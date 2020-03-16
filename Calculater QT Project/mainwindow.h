#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QDesktopServices>
#include <QUrl>
#include <unit.h>
namespace Ui {class MainWindow;}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();


private slots:

    void on_high_value_textChanged(const QString &arg1);

    void on_addition_p_textChanged(const QString &arg1);

    void on_pressure_unit_activated(const QString &arg1);

    void on_high_unit_activated(const QString &arg1);

    void on_temperture_unit_activated(const QString &arg1);

    void on_density_unit_activated(const QString &arg1);

    void on_speed_unit_activated(const QString &arg1);

    void on_calculate_clicked();

    void on_action_triggered();

    void on_action_3_triggered();

    void on_action_2_triggered();

    void on_action_1_triggered();

    void on_reset_clicked();

    void on_actionMatlab_triggered();

signals:

    void high_value_changed(double high);
    void calculate_signals();

private:
    Ui::MainWindow *ui;
    bool high_changed;
    double high,pf,temperature,pressure,density,sound_speed,mu,g;
    int unit_high,unit_temp,unit_pressure,unit_density,unit_speed;
};

#endif // MAINWINDOW_H

