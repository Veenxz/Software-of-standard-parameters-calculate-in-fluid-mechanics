#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "qdebug.h"
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow),
    high(0x3f3f3f3f),temperature(0),pressure(0),density(0),sound_speed(0),
    high_changed(false),
    unit_high(0),unit_density(0),
    unit_pressure(0),unit_speed(0),
    unit_temp(0)
    {ui->setupUi(this);}

MainWindow::~MainWindow() { delete ui; }

void MainWindow::on_high_value_textChanged(const QString &arg1)
{

    double d = arg1.toDouble();
    if (fabs(d - high) < 0.001)return;
    else {
        high_changed = true;
        high = d;
        emit high_value_changed(d);
        qDebug()<<d;
    }
}
#include "ussa.h"
void MainWindow::on_pushButton_clicked()
{

}

void MainWindow::on_high_unit_activated(const QString &arg1)
{
    qDebug() << arg1;


}

void MainWindow::on_temperture_unit_activated(const QString &arg1)
{
    qDebug() << arg1;
}

void MainWindow::on_pressure_unit_activated(const QString &arg1)
{

}

void MainWindow::on_density_unit_activated(const QString &arg1)
{

}

void MainWindow::on_speed_unit_activated(const QString &arg1)
{

}
#include<QMessageBox>
void MainWindow::on_calculate_clicked()
{
    if (!high_changed)return;
    if (high < -1000 || high > 86000) {
        QMessageBox::information(
                    NULL,"Error","高度不在范围内!"
                    );
        return;
    }
    qDebug() << "push button clicked!";
    USSA u = ussa_get(high);
    temperature = u.T,pressure = u.p,sound_speed = u.a,density = u.rho;
    ui->temperature_text->setText(QString::number(temperature));
    ui->pressute_text->setText(QString::number(pressure));
    ui->density_text->setText(QString::number(density));
    ui->sound_Speed_text->setText(QString::number(sound_speed));
}
