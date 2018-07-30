#include <QApplication>
#include <QHBoxLayout>
#include <QTextBrowser>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QWidget *window = new QWidget;
    QHBoxLayout *layout = new QHBoxLayout;
    QTextBrowser *browser = new QTextBrowser;
    layout->addWidget(browser);

    QString text = "abcde: edcba";
    browser->setPlainText(text);

    window->setLayout(layout);
    window->show();

    return a.exec();
}
