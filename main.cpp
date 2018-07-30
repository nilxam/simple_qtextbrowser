#include <QApplication>
#include <QHBoxLayout>
#include <QTextBrowser>
#include <QDebug>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QWidget *window = new QWidget;
    QHBoxLayout *layout = new QHBoxLayout;
    QTextBrowser *browser = new QTextBrowser;
    QTextBrowser *browser2 = new QTextBrowser;
    layout->addWidget(browser);
    layout->addWidget(browser2);

    QString text = "Plain text\nTest";
    browser->setPlainText(text);
    QString html = "<h4>Html List</h4><ul><li>line1</li></ul>";
    browser2->setHtml(html);
    qInfo() << browser2->toPlainText();

    window->setLayout(layout);
    window->show();

    return a.exec();
}
