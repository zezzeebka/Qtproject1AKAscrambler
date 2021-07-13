#include "widget.h"
#include "./ui_widget.h"


Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    resize(Window);
    setMinimumSize(Window);
    setMaximumSize(Window);
    ui->setupUi(this);
}

Widget::~Widget()
{
    delete ui;
}

