/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLineEdit *high_value;
    QPushButton *calculate;
    QTextBrowser *temperature_text;
    QTextBrowser *pressute_text;
    QTextBrowser *density_text;
    QTextBrowser *sound_Speed_text;
    QComboBox *high_unit;
    QComboBox *temperture_unit;
    QComboBox *pressure_unit;
    QComboBox *density_unit;
    QComboBox *speed_unit;
    QLabel *label_9;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->setEnabled(true);
        MainWindow->resize(500, 700);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setMinimumSize(QSize(500, 700));
        MainWindow->setMaximumSize(QSize(500, 700));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(130, 30, 111, 21));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(310, 30, 121, 21));
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(30, 82, 54, 20));
        label_5 = new QLabel(centralWidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(30, 210, 61, 21));
        label_6 = new QLabel(centralWidget);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(30, 260, 61, 21));
        label_7 = new QLabel(centralWidget);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(30, 305, 61, 21));
        label_8 = new QLabel(centralWidget);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(30, 350, 51, 21));
        high_value = new QLineEdit(centralWidget);
        high_value->setObjectName(QStringLiteral("high_value"));
        high_value->setGeometry(QRect(100, 80, 121, 31));
        QFont font;
        font.setFamily(QStringLiteral("Consolas"));
        high_value->setFont(font);
        calculate = new QPushButton(centralWidget);
        calculate->setObjectName(QStringLiteral("calculate"));
        calculate->setGeometry(QRect(210, 140, 81, 31));
        temperature_text = new QTextBrowser(centralWidget);
        temperature_text->setObjectName(QStringLiteral("temperature_text"));
        temperature_text->setGeometry(QRect(100, 200, 121, 31));
        pressute_text = new QTextBrowser(centralWidget);
        pressute_text->setObjectName(QStringLiteral("pressute_text"));
        pressute_text->setGeometry(QRect(100, 250, 121, 31));
        density_text = new QTextBrowser(centralWidget);
        density_text->setObjectName(QStringLiteral("density_text"));
        density_text->setGeometry(QRect(100, 300, 121, 31));
        sound_Speed_text = new QTextBrowser(centralWidget);
        sound_Speed_text->setObjectName(QStringLiteral("sound_Speed_text"));
        sound_Speed_text->setGeometry(QRect(100, 350, 121, 31));
        high_unit = new QComboBox(centralWidget);
        high_unit->setObjectName(QStringLiteral("high_unit"));
        high_unit->setGeometry(QRect(300, 80, 91, 31));
        temperture_unit = new QComboBox(centralWidget);
        temperture_unit->setObjectName(QStringLiteral("temperture_unit"));
        temperture_unit->setGeometry(QRect(300, 200, 91, 31));
        pressure_unit = new QComboBox(centralWidget);
        pressure_unit->setObjectName(QStringLiteral("pressure_unit"));
        pressure_unit->setGeometry(QRect(300, 250, 91, 31));
        density_unit = new QComboBox(centralWidget);
        density_unit->setObjectName(QStringLiteral("density_unit"));
        density_unit->setGeometry(QRect(300, 300, 91, 31));
        speed_unit = new QComboBox(centralWidget);
        speed_unit->setObjectName(QStringLiteral("speed_unit"));
        speed_unit->setGeometry(QRect(300, 350, 91, 31));
        label_9 = new QLabel(centralWidget);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(190, 10, 221, 21));
        MainWindow->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWindow", "\345\233\275\351\231\205\345\215\225\344\275\215", Q_NULLPTR));
        label_3->setText(QApplication::translate("MainWindow", "\350\213\261\345\210\266\345\215\225\344\275\215", Q_NULLPTR));
        label_4->setText(QApplication::translate("MainWindow", "\351\253\230\345\272\246", Q_NULLPTR));
        label_5->setText(QApplication::translate("MainWindow", "\346\270\251\345\272\246", Q_NULLPTR));
        label_6->setText(QApplication::translate("MainWindow", "\345\216\213\345\274\272", Q_NULLPTR));
        label_7->setText(QApplication::translate("MainWindow", "\345\257\206\345\272\246", Q_NULLPTR));
        label_8->setText(QApplication::translate("MainWindow", "\345\243\260\351\200\237", Q_NULLPTR));
        calculate->setText(QApplication::translate("MainWindow", "\350\256\241\347\256\227", Q_NULLPTR));
        high_unit->clear();
        high_unit->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "\347\261\263(m)", Q_NULLPTR)
         << QApplication::translate("MainWindow", "\350\213\261\345\260\272(feet)", Q_NULLPTR)
        );
        temperture_unit->clear();
        temperture_unit->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "\345\274\200\345\260\224\346\226\207", Q_NULLPTR)
         << QApplication::translate("MainWindow", "\346\221\204\346\260\217\345\272\246", Q_NULLPTR)
         << QApplication::translate("MainWindow", "\345\215\216\346\260\217\345\272\246", Q_NULLPTR)
        );
        pressure_unit->clear();
        pressure_unit->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "\345\270\225", Q_NULLPTR)
        );
        density_unit->clear();
        density_unit->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "kg/m\302\263", Q_NULLPTR)
        );
        speed_unit->clear();
        speed_unit->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "m/s", Q_NULLPTR)
         << QApplication::translate("MainWindow", "km/h", Q_NULLPTR)
        );
        label_9->setText(QApplication::translate("MainWindow", "\346\240\207\345\207\206\345\244\247\346\260\224\345\216\213\345\217\202\346\225\260\350\256\241\347\256\227", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
