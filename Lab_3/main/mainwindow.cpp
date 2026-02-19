#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <logger.h>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}



void MainWindow::on_bt_trace_clicked()
{
    Logger::Trace("Trace button pressed - starting event handling");
}


void MainWindow::on_bt_debug_clicked()
{
    Logger::Debug("Current values:");
}


void MainWindow::on_bt_info_clicked()
{
    Logger::Info("Info button pressed");
}

bool x_is_valid;
void MainWindow::on_val_x_textChanged(const QString &arg1)
{
    Logger::set_x(ui->val_x->text().toInt(&x_is_valid));
}

bool y_is_valid;
void MainWindow::on_val_y_textChanged(const QString &arg1)
{
    Logger::set_y(ui->val_y->text().toInt(&y_is_valid));
}


void MainWindow::on_bt_div_clicked()
{
    if (!x_is_valid || !y_is_valid){
        Logger::Warning();
    }
    else if (Logger::get_y() == 0){
        Logger::Fatal();
        ui->result->setText("Error: Division by zero");
    }
    else if (Logger::get_x() % Logger::get_y() != 0){
        Logger::Error();
        Logger::division();
        ui->result->setText(QString::number(Logger::get_div()));
    }
    else{
        Logger::division();
        ui->result->setText(QString::number(Logger::get_div()));
    }
}

