#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:


    void on_bt_trace_clicked();

    void on_bt_debug_clicked();

    void on_bt_info_clicked();

    void on_val_x_textChanged(const QString &arg1);

    void on_val_y_textChanged(const QString &arg1);

    void on_bt_div_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
