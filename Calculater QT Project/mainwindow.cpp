#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "qdebug.h"
#include <QDesktopServices>
#include <QUrl>
#include<math.h>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow),
    high_changed(false)
{
    ui->setupUi(this);
    ui->high_value->setText("0.0");
    ui->addition_p->setText("0.0");
}

MainWindow::~MainWindow() {delete ui;}


void MainWindow::on_high_value_textChanged(const QString &arg1)
{

    double d = arg1.toDouble();
    if (fabs(d - high) < 0.0001) return;
    else {
        high_changed = true;
        high = d;
        emit high_value_changed(d);
        qDebug()<<d;
    }
}

void MainWindow::on_addition_p_textChanged(const QString &arg1)
{

    double e = arg1.toDouble();
    pf = e;
}

#include "ussa.h"

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
    qDebug() << arg1;
}

void MainWindow::on_density_unit_activated(const QString &arg1)
{
    qDebug() << arg1;
}

void MainWindow::on_speed_unit_activated(const QString &arg1)
{
    qDebug() << arg1;
}

#include<QMessageBox>
void MainWindow::on_calculate_clicked()
{
    if (!high_changed)return;
    if (high < -2000.0 || high > 100000.0) {
        QMessageBox::information(
                   NULL,"Error","The height is illegal,please enter a new height!"
                    );
        return;
    }
    qDebug() << "push button clicked!";
    USSA u = ussa_get(high);

    temperature = u.T,pressure = u.p+pf,sound_speed = u.a,density = u.rho,mu = u.mu,g = u.g;
    ui->temperature_text->setText(QString::number(temperature));
    ui->pressute_text->setText(QString::number(pressure));
    ui->density_text->setText(QString::number(density));
    ui->sound_Speed_text->setText(QString::number(sound_speed));
    ui->g_text->setText(QString::number(g));
    ui->mu_text->setText(QString::number(mu));
}


void MainWindow::on_action_triggered()      //退出
{
    this->close();
}

void MainWindow::on_action_3_triggered()        //关于
{
    QDesktopServices::openUrl(QUrl("https://github.com/Veenxz/Software-of-standard-parameters-calculate-in-fluid-mechanics"));
}

void MainWindow::on_action_2_triggered()    //相关公式
{
    QString qtManulFile = "equation.pdf";
    QDesktopServices::openUrl(QUrl::fromLocalFile(qtManulFile));
}

void MainWindow::on_action_1_triggered()    //软件说明
{
    QString qtManulFile = "help.pdf";
    QDesktopServices::openUrl(QUrl::fromLocalFile(qtManulFile));
}

void MainWindow::on_reset_clicked()
{
    ui->high_value->setText("0.0");
    ui->addition_p->setText("0.0");
    ui->temperature_text->setText(NULL);
    ui->pressute_text->setText(NULL);
    ui->density_text->setText(NULL);
    ui->sound_Speed_text->setText(NULL);
    ui->g_text->setText(NULL);
    ui->mu_text->setText(NULL);
}

void MainWindow::on_actionMatlab_triggered()
{
    QString qtManulFile = "calculate.m";
    QDesktopServices::openUrl(QUrl::fromLocalFile(qtManulFile));
}
