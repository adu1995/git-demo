#include "main_menu.h"
#include "ui_main_menu.h"

main_menu::main_menu(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::main_menu)
{
    ui->setupUi(this);

    draw_status = 0;//记录选择的工具 enum mode {}
    open_status = 0;//记录打开的图片文件
    mouse_status = 0;//记录鼠标状态
    p_text = new QTextEdit(this);//文本
    p_text->hide();
    p_color = Qt::black;

    //enum mode mode_st;
    //窗口设置
    this->setWindowTitle("Paint");
    this->setWindowIcon(QPixmap(":/icon/paint.png"));
    this->setGeometry(400, 200, 650, 400);

    //窗口内鼠标右键菜单
    p_menu = new QMenu(this);
    p_menu->addAction(tr("退出"), this, SLOT(close()));
    p_menu->addAction(tr("保存"), this, SLOT(save_icon()));

    //工具栏
    QToolBar *p_tool = addToolBar(tr("工具栏"));
    p_tool->setStyleSheet("background-color:rgb(135,206,235)");
    p_tool->setIconSize(QSize(20,20));
    p_tool->setMovable(true);

    //工具栏open action
    QAction *open_action = new QAction(tr("打开"), this);
    open_action->setIcon(QPixmap(":/icon/folder-open.png"));
    p_tool->addAction(open_action);
    connect(open_action, SIGNAL(triggered()), this, SLOT(open_icon()));

    //工具栏save action
    QAction *save_action = new QAction(tr("保存"), this);
    save_action->setIcon(QPixmap(":/icon/save.png"));
    p_tool->addAction(save_action);
    connect(save_action, SIGNAL(triggered()), this, SLOT(save_icon()));

    //工具栏set color action
    QAction *color_action = new QAction(tr("颜色"), this);
    color_action->setIcon(QPixmap(":/icon/color.png"));
    p_tool->addAction(color_action);
    connect(color_action, SIGNAL(triggered()), this, SLOT(set_color()));

    //工具栏select line action
    QAction *line_action = new QAction(tr("直线"), this);
    line_action->setIcon(QPixmap(":/icon/line_t.png"));
    p_tool->addAction(line_action);
    connect(line_action, SIGNAL(triggered()), this, SLOT(set_line()));

    //工具栏select rect action
    QAction *rect_action = new QAction(tr("矩形"), this);
    rect_action->setIcon(QPixmap(":/icon/Rectangle.png"));
    p_tool->addAction(rect_action);
    connect(rect_action, SIGNAL(triggered()), this, SLOT(set_rect()));

    //工具栏select pencil action
    QAction *pen_action = new QAction(tr("画笔"), this);
    pen_action->setIcon(QPixmap(":/icon/pen.png"));
    p_tool->addAction(pen_action);
    connect(pen_action, SIGNAL(triggered()), this, SLOT(set_pencil()));

    //工具栏select text action
    QAction *text_action = new QAction(tr("文本"), this);
    text_action->setIcon(QPixmap(":/icon/text.png"));
    p_tool->addAction(text_action);
    connect(text_action, SIGNAL(triggered()), this, SLOT(set_text()));
    connect(p_text, SIGNAL(textChanged()), this, SLOT(add_text()));
}

main_menu::~main_menu()
{
    delete ui;
}
//绘画事件
void main_menu::paintEvent(QPaintEvent *event)
{
    if(open_status == 0){
        p_map = QPixmap(this->size());
        p_map.fill(Qt::white);
    }
    QPixmap map = p_map;
    QPainter painter(&map);
    int line_index = 0, rect_index = 0, text_index = 0, pen_index = 0;
    for(int i = 0; i < d_shape.size(); i++){
        painter.setPen(p_pen);
        //draw line by two point
        if(LINE == d_shape.at(i)){
            painter.setPen(d_color.at(i));
            painter.drawLine(d_line.at(line_index).topLeft(), d_line.at(line_index).bottomRight());
            line_index++;
        }
        //draw rectangle
        else if(RECT == d_shape.at(i)){
            painter.setPen(d_color.at(i));
            painter.drawRect(d_rects.at(rect_index));
            rect_index++;
        }
        //draw line by pen
        else if(PEN == d_shape.at(i)){
            painter.setPen(d_color.at(i));
            const QVector<QPoint> &line = d_lineS.at(pen_index);
            pen_index++;
            for(int j = 0; j < line.size() - 1; j++){
                painter.drawLine(line.at(j), line.at(j + 1));
            }
        }
        //select textEdit
        else if(TEXT == d_shape.at(i)){
            painter.setPen(d_color.at(i));
            painter.drawText(d_point.at(text_index), d_text.at(text_index));
            text_index++;
        }
    }
    painter.end();
    //画到主窗口
    painter.begin(this);
    painter.drawPixmap(0, 0, map);
}
//鼠标点击事件
void main_menu::mousePressEvent(QMouseEvent *event)
{
    mouse_status = 1;//记录鼠标状态
    if(event->button() == Qt::LeftButton){
        if(LINE == draw_status){
            QRect rect;
            d_line.append(rect);
            QRect &last_line = d_line.last();
            last_line.setTopLeft(event->pos());
            d_shape.append(LINE);
            d_color.append(p_color);
        }
        else if(RECT == draw_status){
            QRect rect;
            d_rects.append(rect);
            QRect &last_rect = d_rects.last();
            last_rect.setTopLeft(event->pos());
            d_shape.append(RECT);
            d_color.append(p_color);
        }
        else if(PEN == draw_status){
            QVector<QPoint> line;
            d_lineS.append(line);
            QVector<QPoint> &last_line = d_lineS.last();
            last_line.append(event->pos());
            d_shape.append(3);
            d_color.append(p_color);
        }
        else if(TEXT == draw_status){
            update();
            QPoint p;
            d_point.append(p);
            QPoint &last_p = d_point.last();
            last_p = event->pos();
            p_text->setGeometry(last_p.x(), last_p.y(), 90, 90);
            p_text->show();
            d_text.append("");
            p_text->clear();
            d_shape.append(TEXT);
            d_color.append(p_color);
        }
    }
}

void main_menu::mouseReleaseEvent(QMouseEvent *event)
{
    if(1 == mouse_status){
        if(LINE == draw_status){
            QRect &last_line = d_line.last();
            last_line.setBottomRight(event->pos());
            mouse_status = 0;
        }
        else if(RECT == draw_status){
            QRect &last_rect = d_rects.last();
            last_rect.setBottomRight(event->pos());
            mouse_status = 0;
        }
        else if(PEN == draw_status){
            QVector<QPoint> &last_line = d_lineS.last();
            last_line.append(event->pos());
            mouse_status = 0;
        }
    }
}

void main_menu::mouseMoveEvent(QMouseEvent *event)
{
    if(1 == mouse_status){
        if(LINE == draw_status){
            QRect &last_line = d_line.last();
            last_line.setBottomRight(event->pos());
            update();
        }
        else if(RECT == draw_status){
            QRect &last_rect = d_rects.last();
            last_rect.setBottomRight(event->pos());
            update();
        }
        else if(PEN == draw_status){
            if(d_lineS.size() <= 0){
                return ;
            }
            QVector<QPoint> &last_line = d_lineS.last();
            last_line.append(event->pos());
            update();
        }
    }
}

void main_menu::contextMenuEvent(QContextMenuEvent *event)
{
    p_menu->exec(cursor().pos());
}

void main_menu::received_login()
{
    this->show();
}

void main_menu::save_icon()
{
    QString filename = QFileDialog::getSaveFileName(this, tr("保存"), "1.jpe", "Image(*.jpg *.png *.bmp)");
    if(filename.length() > 0){
        p_text->hide();
        QPixmap map(this->size());
        QPainter painter(&map);
        this->render(&painter);
        map.copy(QRect(0, 30, this->size().width() - 30, this->size().height() - 30)).save(filename);
    }
}

void main_menu::open_icon()
{
    QString filename = QFileDialog::getOpenFileName(this, tr("打开"),"","Image Files(*.jpg *.png)");
    if(!filename.isEmpty()){
        QPixmap map;
        map.load(filename);
        QPainter painter(&p_map);
        painter.drawPixmap(0, 15, map);
        open_status = 1;
        update();
    }
}

void main_menu::set_color()
{
    p_color = QColorDialog::getColor(Qt::black, this, tr("选择画笔颜色"));
    p_pen.setColor(p_color);
}

void main_menu::set_line()
{
    draw_status = LINE;
    p_text->hide();
}

void main_menu::set_rect()
{
    draw_status = RECT;
    p_text->hide();
}

void main_menu::set_pencil()
{
    draw_status = 3;
    p_text->hide();
}

void main_menu::set_text()
{
    draw_status = TEXT;
}

void main_menu::add_text()
{
    QString &last = d_text.last();
    last = p_text->toPlainText();
}
