#include <QApplication>
#include <QPushButton>
#include <QWebView>

extern "C" {
    int start_browser(char *title)
    {
        char *argv[1];
        argv[0] = title;
        int argc = 1;

        QApplication app(argc, argv);
        QWebView *view = new QWebView();
        view->load(QUrl("http://localhost:3000/"));
        view->show();

        return app.exec();
    }
}
