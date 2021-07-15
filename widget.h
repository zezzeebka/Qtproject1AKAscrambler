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
    QString InputString;
    QString KeyString;
    QString OutputString;
    QVBoxLayout* MainLayout = new QVBoxLayout();
    QVBoxLayout* LeftInputTextLayuot = new QVBoxLayout();
    QVBoxLayout* RightInputTextLayout = new QVBoxLayout();
    QHBoxLayout* LabelLayout = new QHBoxLayout();
    QHBoxLayout* SecondaryLayout = new QHBoxLayout();
    QLabel* OutputTextLabel = new QLabel("&Output");
    QLabel* InputTextLabel = new QLabel("&Input");
    QLabel* KeyLineLabel = new QLabel("&Key");
    QLineEdit* KeyLine = new QLineEdit();
    QTextEdit* InputText = new QTextEdit();
    QTextEdit* OutputText = new QTextEdit();
    QPushButton* OkButton = new QPushButton("&Encrypt");
    QPushButton* UnencryptButton = new QPushButton("&Unencrypt");
    Ui::Widget *ui;
private slots:
    void EncryptionText(bool Type);
    void Encrypt();
    void Unencrypt();
};
#endif // WIDGET_H
