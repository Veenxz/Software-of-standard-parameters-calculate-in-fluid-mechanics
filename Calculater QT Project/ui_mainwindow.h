/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *action_3;
    QAction *action;
    QAction *action_2;
    QAction *action_1;
    QAction *actionMatlab;
    QWidget *centralWidget;
    QTabWidget *tabWidget;
    QWidget *tab_1;
    QPushButton *calculate;
    QLabel *Title_1;
    QGroupBox *Input;
    QComboBox *high_unit;
    QLineEdit *high_value;
    QLabel *label_4;
    QComboBox *addition_p_unit;
    QLineEdit *addition_p;
    QLabel *label_37;
    QGroupBox *Output;
    QTextBrowser *pressute_text;
    QLabel *label_5;
    QComboBox *speed_unit;
    QComboBox *g_unit;
    QTextBrowser *sound_Speed_text;
    QComboBox *density_unit;
    QLabel *label_6;
    QLabel *label_7;
    QTextBrowser *temperature_text;
    QLabel *label_10;
    QTextBrowser *g_text;
    QLabel *label_8;
    QComboBox *pressure_unit;
    QTextBrowser *density_text;
    QComboBox *temperture_unit;
    QComboBox *mu_unit;
    QTextBrowser *mu_text;
    QLabel *label_38;
    QPushButton *reset;
    QMenuBar *menuBar;
    QMenu *menuoo;
    QMenu *menu;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(985, 830);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setMinimumSize(QSize(985, 830));
        MainWindow->setMaximumSize(QSize(985, 830));
        MainWindow->setContextMenuPolicy(Qt::DefaultContextMenu);
        MainWindow->setIconSize(QSize(30, 30));
        action_3 = new QAction(MainWindow);
        action_3->setObjectName(QString::fromUtf8("action_3"));
        action = new QAction(MainWindow);
        action->setObjectName(QString::fromUtf8("action"));
        action_2 = new QAction(MainWindow);
        action_2->setObjectName(QString::fromUtf8("action_2"));
        action_1 = new QAction(MainWindow);
        action_1->setObjectName(QString::fromUtf8("action_1"));
        actionMatlab = new QAction(MainWindow);
        actionMatlab->setObjectName(QString::fromUtf8("actionMatlab"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(0, 0, 985, 830));
        tabWidget->setContextMenuPolicy(Qt::DefaultContextMenu);
        tab_1 = new QWidget();
        tab_1->setObjectName(QString::fromUtf8("tab_1"));
        tab_1->setContextMenuPolicy(Qt::DefaultContextMenu);
        calculate = new QPushButton(tab_1);
        calculate->setObjectName(QString::fromUtf8("calculate"));
        calculate->setGeometry(QRect(370, 270, 81, 31));
        Title_1 = new QLabel(tab_1);
        Title_1->setObjectName(QString::fromUtf8("Title_1"));
        Title_1->setGeometry(QRect(340, 20, 271, 61));
        QFont font;
        font.setFamily(QString::fromUtf8("Adobe Garamond Pro Bold"));
        font.setPointSize(20);
        font.setBold(true);
        font.setWeight(75);
        Title_1->setFont(font);
        Input = new QGroupBox(tab_1);
        Input->setObjectName(QString::fromUtf8("Input"));
        Input->setGeometry(QRect(150, 80, 671, 151));
        high_unit = new QComboBox(Input);
        high_unit->addItem(QString());
        high_unit->setObjectName(QString::fromUtf8("high_unit"));
        high_unit->setGeometry(QRect(400, 40, 91, 31));
        high_value = new QLineEdit(Input);
        high_value->setObjectName(QString::fromUtf8("high_value"));
        high_value->setGeometry(QRect(200, 40, 121, 31));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Consolas"));
        high_value->setFont(font1);
        label_4 = new QLabel(Input);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(103, 44, 81, 20));
        addition_p_unit = new QComboBox(Input);
        addition_p_unit->addItem(QString());
        addition_p_unit->setObjectName(QString::fromUtf8("addition_p_unit"));
        addition_p_unit->setGeometry(QRect(400, 90, 91, 31));
        addition_p = new QLineEdit(Input);
        addition_p->setObjectName(QString::fromUtf8("addition_p"));
        addition_p->setGeometry(QRect(200, 90, 121, 31));
        addition_p->setFont(font1);
        label_37 = new QLabel(Input);
        label_37->setObjectName(QString::fromUtf8("label_37"));
        label_37->setGeometry(QRect(103, 94, 81, 20));
        Output = new QGroupBox(tab_1);
        Output->setObjectName(QString::fromUtf8("Output"));
        Output->setGeometry(QRect(150, 330, 671, 371));
        pressute_text = new QTextBrowser(Output);
        pressute_text->setObjectName(QString::fromUtf8("pressute_text"));
        pressute_text->setGeometry(QRect(200, 100, 121, 31));
        label_5 = new QLabel(Output);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(100, 60, 70, 16));
        speed_unit = new QComboBox(Output);
        speed_unit->addItem(QString());
        speed_unit->setObjectName(QString::fromUtf8("speed_unit"));
        speed_unit->setGeometry(QRect(400, 200, 91, 31));
        g_unit = new QComboBox(Output);
        g_unit->addItem(QString());
        g_unit->setObjectName(QString::fromUtf8("g_unit"));
        g_unit->setGeometry(QRect(400, 250, 91, 31));
        sound_Speed_text = new QTextBrowser(Output);
        sound_Speed_text->setObjectName(QString::fromUtf8("sound_Speed_text"));
        sound_Speed_text->setGeometry(QRect(200, 200, 121, 31));
        density_unit = new QComboBox(Output);
        density_unit->addItem(QString());
        density_unit->setObjectName(QString::fromUtf8("density_unit"));
        density_unit->setGeometry(QRect(400, 150, 91, 31));
        label_6 = new QLabel(Output);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(100, 108, 70, 16));
        label_7 = new QLabel(Output);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(100, 160, 70, 16));
        temperature_text = new QTextBrowser(Output);
        temperature_text->setObjectName(QString::fromUtf8("temperature_text"));
        temperature_text->setGeometry(QRect(200, 50, 121, 31));
        label_10 = new QLabel(Output);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(100, 260, 75, 16));
        g_text = new QTextBrowser(Output);
        g_text->setObjectName(QString::fromUtf8("g_text"));
        g_text->setGeometry(QRect(200, 250, 121, 31));
        label_8 = new QLabel(Output);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(100, 210, 70, 16));
        pressure_unit = new QComboBox(Output);
        pressure_unit->addItem(QString());
        pressure_unit->setObjectName(QString::fromUtf8("pressure_unit"));
        pressure_unit->setGeometry(QRect(400, 100, 91, 31));
        density_text = new QTextBrowser(Output);
        density_text->setObjectName(QString::fromUtf8("density_text"));
        density_text->setGeometry(QRect(200, 150, 121, 31));
        temperture_unit = new QComboBox(Output);
        temperture_unit->addItem(QString());
        temperture_unit->setObjectName(QString::fromUtf8("temperture_unit"));
        temperture_unit->setGeometry(QRect(400, 50, 91, 31));
        mu_unit = new QComboBox(Output);
        mu_unit->addItem(QString());
        mu_unit->setObjectName(QString::fromUtf8("mu_unit"));
        mu_unit->setGeometry(QRect(400, 300, 91, 31));
        mu_text = new QTextBrowser(Output);
        mu_text->setObjectName(QString::fromUtf8("mu_text"));
        mu_text->setGeometry(QRect(200, 300, 121, 31));
        label_38 = new QLabel(Output);
        label_38->setObjectName(QString::fromUtf8("label_38"));
        label_38->setGeometry(QRect(100, 290, 75, 52));
        reset = new QPushButton(tab_1);
        reset->setObjectName(QString::fromUtf8("reset"));
        reset->setGeometry(QRect(520, 270, 81, 31));
        tabWidget->addTab(tab_1, QString());
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 985, 26));
        menuoo = new QMenu(menuBar);
        menuoo->setObjectName(QString::fromUtf8("menuoo"));
        menuoo->setGeometry(QRect(333, 116, 143, 144));
        menu = new QMenu(menuBar);
        menu->setObjectName(QString::fromUtf8("menu"));
        MainWindow->setMenuBar(menuBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);
        QWidget::setTabOrder(tabWidget, high_value);
        QWidget::setTabOrder(high_value, calculate);
        QWidget::setTabOrder(calculate, high_unit);
        QWidget::setTabOrder(high_unit, pressute_text);
        QWidget::setTabOrder(pressute_text, speed_unit);
        QWidget::setTabOrder(speed_unit, g_unit);
        QWidget::setTabOrder(g_unit, sound_Speed_text);
        QWidget::setTabOrder(sound_Speed_text, density_unit);
        QWidget::setTabOrder(density_unit, temperature_text);
        QWidget::setTabOrder(temperature_text, g_text);
        QWidget::setTabOrder(g_text, pressure_unit);
        QWidget::setTabOrder(pressure_unit, density_text);
        QWidget::setTabOrder(density_text, temperture_unit);
        QWidget::setTabOrder(temperture_unit, mu_unit);
        QWidget::setTabOrder(mu_unit, mu_text);

        menuBar->addAction(menuoo->menuAction());
        menuBar->addAction(menu->menuAction());
        menuoo->addAction(action_2);
        menuoo->addAction(actionMatlab);
        menuoo->addSeparator();
        menuoo->addSeparator();
        menuoo->addAction(action);
        menu->addAction(action_1);
        menu->addAction(action_3);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "\346\265\201\344\275\223\345\212\233\345\255\246\346\240\207\345\207\206\345\217\202\346\225\260\350\256\241\347\256\227\350\275\257\344\273\266 V1.0", nullptr));
#ifndef QT_NO_ACCESSIBILITY
        MainWindow->setAccessibleDescription(QString());
#endif // QT_NO_ACCESSIBILITY
        action_3->setText(QApplication::translate("MainWindow", "Git-Hub\347\273\264\346\212\244", nullptr));
#ifndef QT_NO_SHORTCUT
        action_3->setShortcut(QApplication::translate("MainWindow", "Ctrl+L", nullptr));
#endif // QT_NO_SHORTCUT
        action->setText(QApplication::translate("MainWindow", "\351\200\200\345\207\272", nullptr));
#ifndef QT_NO_SHORTCUT
        action->setShortcut(QApplication::translate("MainWindow", "Ctrl+Q", nullptr));
#endif // QT_NO_SHORTCUT
        action_2->setText(QApplication::translate("MainWindow", "\350\256\241\347\256\227\345\205\254\345\274\217", nullptr));
#ifndef QT_NO_TOOLTIP
        action_2->setToolTip(QApplication::translate("MainWindow", "\350\256\241\347\256\227\345\205\254\345\274\217", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        action_2->setShortcut(QApplication::translate("MainWindow", "Ctrl+X", nullptr));
#endif // QT_NO_SHORTCUT
        action_1->setText(QApplication::translate("MainWindow", "\350\275\257\344\273\266\350\257\264\346\230\216", nullptr));
#ifndef QT_NO_SHORTCUT
        action_1->setShortcut(QApplication::translate("MainWindow", "Ctrl+H", nullptr));
#endif // QT_NO_SHORTCUT
        actionMatlab->setText(QApplication::translate("MainWindow", "Matlab\344\273\243\347\240\201", nullptr));
#ifndef QT_NO_SHORTCUT
        actionMatlab->setShortcut(QApplication::translate("MainWindow", "Ctrl+M", nullptr));
#endif // QT_NO_SHORTCUT
        calculate->setText(QApplication::translate("MainWindow", "\350\256\241\347\256\227", nullptr));
        Title_1->setText(QApplication::translate("MainWindow", "\346\240\207\345\207\206\345\244\247\346\260\224\345\217\202\346\225\260\350\256\241\347\256\227", nullptr));
        Input->setTitle(QApplication::translate("MainWindow", "\350\276\223\345\205\245", nullptr));
        high_unit->setItemText(0, QApplication::translate("MainWindow", "m", nullptr));

        high_value->setText(QApplication::translate("MainWindow", "0", nullptr));
        label_4->setText(QApplication::translate("MainWindow", "\351\253\230     \345\272\246", nullptr));
        addition_p_unit->setItemText(0, QApplication::translate("MainWindow", "Pa", nullptr));

        addition_p->setText(QApplication::translate("MainWindow", "0", nullptr));
        label_37->setText(QApplication::translate("MainWindow", "\346\260\264\350\222\270\346\260\224\345\210\206\345\216\213", nullptr));
        Output->setTitle(QApplication::translate("MainWindow", "\350\276\223\345\207\272", nullptr));
        label_5->setText(QApplication::translate("MainWindow", "\346\270\251     \345\272\246", nullptr));
        speed_unit->setItemText(0, QApplication::translate("MainWindow", "m/s", nullptr));

        g_unit->setItemText(0, QApplication::translate("MainWindow", "m/s\302\262", nullptr));

        density_unit->setItemText(0, QApplication::translate("MainWindow", "kg/m\302\263", nullptr));

        label_6->setText(QApplication::translate("MainWindow", "\345\216\213     \345\274\272", nullptr));
        label_7->setText(QApplication::translate("MainWindow", "\345\257\206     \345\272\246", nullptr));
        label_10->setText(QApplication::translate("MainWindow", "\351\207\215\345\212\233\345\212\240\351\200\237\345\272\246", nullptr));
        label_8->setText(QApplication::translate("MainWindow", "\345\243\260     \351\200\237", nullptr));
        pressure_unit->setItemText(0, QApplication::translate("MainWindow", "Pa", nullptr));

        temperture_unit->setItemText(0, QApplication::translate("MainWindow", "K", nullptr));

        mu_unit->setItemText(0, QApplication::translate("MainWindow", "kg/m\302\267s", nullptr));

        label_38->setText(QApplication::translate("MainWindow", "\347\262\230     \345\272\246", nullptr));
        reset->setText(QApplication::translate("MainWindow", "\351\207\215\347\275\256", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_1), QApplication::translate("MainWindow", "\346\240\207\345\207\206\345\244\247\346\260\224\345\217\202\346\225\260", nullptr));
        menuoo->setTitle(QApplication::translate("MainWindow", "\345\212\237\350\203\275\350\217\234\345\215\225", nullptr));
        menu->setTitle(QApplication::translate("MainWindow", "\345\270\256\345\212\251", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

