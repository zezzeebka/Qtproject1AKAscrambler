#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QtWidgets>

QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

private:
    QSize Window = QSize(800,600);
    std::string InputString;
    std::string OutputString;
    Ui::Widget *ui;
};
#endif // WIDGET_H
