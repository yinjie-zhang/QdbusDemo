#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDBusConnection>
#include <QDBusError>
#include <QDebug>
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(&m_company,SIGNAL(ageChangedSingal()),this,SLOT(ageChangedSlot()));
    connect(&m_company,SIGNAL(nameChangedSingal()),this,SLOT(nameChangedSlot()));
    connect(&m_company,SIGNAL(professionChangedSingal()),this,SLOT(professionChangedSlot()));
    connect(&m_company,SIGNAL(salaryChangedSingal()),this,SLOT(salaryChangeSlot()));
    connect(this->ui->resultLine,SIGNAL(editingFinished()),this,SLOT(recuritChangeSlot()));

    //创建连接
    QDBusConnection connection = QDBusConnection::sessionBus();
    //注册服务 注："company.recruitment"就是 service name
    if(!connection.registerService("company.recruitment")){
        qDebug()<<connection.lastError().message();
        exit(1);
    }
    //注册对象 注："/company/path"就是 Object Paths
    //Message Bus 会根据service name判断是哪个应用，根据Object Paths判断是哪个对象
    connection.registerObject("/company/path",&m_company,
                                   QDBusConnection::ExportAllContents);

    setWindowTitle("companyRecuitmentSystem");
}

MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::ageChangedSlot(){
    qDebug()<<"age changed slot";
    ui->ageLine->setText(QString::number(m_company.getUsrAge()));
}

void MainWindow::nameChangedSlot(){
    qDebug()<<"name changed slot";
    ui->nameLine->setText(m_company.getUsrName());
}
void MainWindow::salaryChangeSlot(){
    qDebug()<<"salary changed slot";
    ui->salaryline->setText(QString::number(m_company.getUsrSalary()));
}
void MainWindow::professionChangedSlot(){
    qDebug()<<"profession changed slot";
    ui->professionline->setText(m_company.gerUsrProfession());
}
void MainWindow::recuritChangeSlot(){
    qDebug()<<"recurit changed slot";
    emit m_company.recruitInfo(m_company.getUsrName(),this->ui->resultLine->text()); //
}
