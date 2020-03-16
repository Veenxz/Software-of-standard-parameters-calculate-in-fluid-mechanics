#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
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

    void on_pushButton_clicked();

    void on_pressure_unit_activated(const QString &arg1);

    void on_high_unit_activated(const QString &arg1);

    void on_temperture_unit_activated(const QString &arg1);

    void on_density_unit_activated(const QString &arg1);

    void on_speed_unit_activated(const QString &arg1);

    void on_calculate_clicked();

signals:
    void high_value_changed(double high);
    void calculate_signals();
private:
    Ui::MainWindow *ui;

    bool high_changed;
    double high,temperature,pressure,density ,sound_speed;
    int unit_high,unit_temp,unit_pressure,unit_density,unit_speed;
};

#endif // MAINWINDOW_H
