#include <QApplication>
#include <QHBoxLayout>
#include <QTextBrowser>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QWidget window;
    QHBoxLayout layout(&window);
    QTextBrowser browser;
    layout.addWidget(&browser);

    QString text = "abcde: edcba";
    browser.setPlainText(text);

    window.show();
    return a.exec();
}
