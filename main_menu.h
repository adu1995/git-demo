#ifndef MAIN_MENU_H
#define MAIN_MENU_H

#include <QMainWindow>
#include <QPainter>
#include <QPaintEvent>
#include <QMouseEvent>
#include <QVector>
#include <QToolBar>
#include <QAction>
#include <QColor>
#include <QMenu>
#include <QFileDialog>
#include <QTextEdit>
#include <QPen>
#include <QColorDialog>

namespace Ui {
class main_menu;
}

class main_menu : public QMainWindow
{
    Q_OBJECT

public:
    explicit main_menu(QWidget *parent = nullptr);
    ~main_menu();

    void paintEvent(QPaintEvent *event);
    void mousePressEvent(QMouseEvent *event);
    void mouseReleaseEvent(QMouseEvent *event);
    void mouseMoveEvent(QMouseEvent *event);
    void contextMenuEvent(QContextMenuEvent *event);

    enum mode{
        LINE = 1, RECT, PEN, TEXT
    };
    QVector<QVector<QPoint>> d_lineS;//画笔的点集合
    QVector<QRect> d_rects; //矩形
    QVector<QRect> d_line; //直线
    QVector<QString> d_text; //文本
    QVector<QPoint> d_point; //文本的文字位置的点
    QVector<int> d_shape;
    QVector<QColor> d_color;

public slots:
    void received_login(void);
    void save_icon(void);
    void open_icon(void);
    void set_color(void);
    void set_line(void);
    void set_rect(void);
    void set_pencil(void);
    void set_text(void);
    void add_text(void);

private:
    Ui::main_menu *ui;

    QMenu *p_menu;
    QTextEdit *p_text;
    QPixmap p_map;
    QColor p_color;
    QPen p_pen;
    int open_status;
    int mouse_status;
    int draw_status;
};

#endif // MAIN_MENU_H
