#include "widget.h"
#include "./ui_widget.h"


Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    resize(Window);
    setMinimumSize(Window);
    setMaximumSize(Window);
    InputText->setFixedHeight(200);
    OutputText->setFixedHeight(200);
    InputText->setStyleSheet("QTextEdit { border: 2px solid gray; border-radius: 7px; }");
    OutputText->setStyleSheet("QTextEdit { border: 2px solid gray; border-radius: 7px; }");
    OutputText->setReadOnly(true);
    KeyLine->setStyleSheet("QLineEdit { border: 2px solid gray; border-radius: 7px; }");
    //Labels
    InputTextLabel->setBuddy(InputText);
    OutputTextLabel->setBuddy(OutputText);
    KeyLineLabel->setBuddy(KeyLine);
    //
    //SecondaryLayout->addWidget(InputTextLabel);
    LeftInputTextLayuot->addWidget(InputTextLabel);
    LeftInputTextLayuot->addWidget(InputText);
    LeftInputTextLayuot->addStretch(1);
    RightInputTextLayout->addWidget(OutputTextLabel);
    RightInputTextLayout->addWidget(OutputText);
    RightInputTextLayout->addStretch(1);
    SecondaryLayout->addLayout(LeftInputTextLayuot);
    SecondaryLayout->addLayout(RightInputTextLayout);
    MainLayout->addLayout(SecondaryLayout);
    MainLayout->addStretch(2);
    MainLayout->addWidget(KeyLineLabel);
    MainLayout->addWidget(KeyLine);
    MainLayout->addStretch(1);
    MainLayout->addWidget(OkButton);
    this->setLayout(MainLayout);
    ui->setupUi(this);
}

Widget::~Widget()
{
    delete ui;
}

