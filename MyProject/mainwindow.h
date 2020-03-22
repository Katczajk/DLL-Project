#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

    const QString l_msgtype = "Info";
    const QString l_msgtxt = "Button is pressed";

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButton_clicked();
    QString GetLineTxt();
    void pushToLabel(QString input);

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
