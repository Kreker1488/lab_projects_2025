#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // Подключаем кнопку INFO
    connect(ui->pushButton_info, &QPushButton::clicked, this, [](){
        // Сюда потом вставим Logger::info
    });

    // Подключаем кнопку WARNING
    connect(ui->pushButton_warning, &QPushButton::clicked, this, [](){
        // Сюда потом вставим Logger::warning
    });

    // Подключаем кнопку ERROR
    connect(ui->pushButton_error, &QPushButton::clicked, this, [](){
        // Сюда потом вставим Logger::error
    });

    // Подключаем кнопку CRITICAL
    connect(ui->pushButton_critical, &QPushButton::clicked, this, [](){
        // Сюда потом вставим Logger::critical
    });
}

MainWindow::~MainWindow()
{
    delete ui;
}
