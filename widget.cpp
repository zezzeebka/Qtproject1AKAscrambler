#include "widget.h"
#include "./ui_widget.h"


Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    resize(Window);
    setMinimumSize(Window);
    setMaximumSize(Window);
    InputLine->setFixedHeight(100);
    OutputLine->setBaseSize(200,100);
    OutputLine->setReadOnly(true);
    InputLineLabel->setBuddy(InputLine);
    SecondaryLayout->addWidget(InputLine);
    MainLayout->addWidget(InputLineLabel);
    SecondaryLayout->addWidget(OutputLine);
    MainLayout->addLayout(SecondaryLayout);
    MainLayout->addWidget(OkButton);
    this->setLayout(MainLayout);
    ui->setupUi(this);
}

Widget::~Widget()
{
    delete ui;
}

