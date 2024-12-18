/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionfkd;
    QAction *action_O;
    QAction *action_C;
    QAction *action_S;
    QAction *action_A;
    QAction *action_X;
    QWidget *centralwidget;
    QTextEdit *textEdit;
    QMenuBar *menubar;
    QMenu *menu;
    QMenu *menu_2;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        actionfkd = new QAction(MainWindow);
        actionfkd->setObjectName("actionfkd");
        action_O = new QAction(MainWindow);
        action_O->setObjectName("action_O");
        action_C = new QAction(MainWindow);
        action_C->setObjectName("action_C");
        action_S = new QAction(MainWindow);
        action_S->setObjectName("action_S");
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/copy.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        action_S->setIcon(icon);
        action_A = new QAction(MainWindow);
        action_A->setObjectName("action_A");
        action_X = new QAction(MainWindow);
        action_X->setObjectName("action_X");
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        textEdit = new QTextEdit(centralwidget);
        textEdit->setObjectName("textEdit");
        textEdit->setGeometry(QRect(13, 4, 771, 521));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 25));
        menu = new QMenu(menubar);
        menu->setObjectName("menu");
        menu_2 = new QMenu(menubar);
        menu_2->setObjectName("menu_2");
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName("toolBar");
        MainWindow->addToolBar(Qt::ToolBarArea::TopToolBarArea, toolBar);

        menubar->addAction(menu->menuAction());
        menubar->addAction(menu_2->menuAction());
        menu->addAction(actionfkd);
        menu->addAction(action_O);
        menu->addAction(action_C);
        menu->addSeparator();
        menu->addAction(action_S);
        menu->addAction(action_A);
        menu->addSeparator();
        menu->addAction(action_X);
        toolBar->addAction(action_S);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionfkd->setText(QCoreApplication::translate("MainWindow", "\346\226\260\345\242\236(N)", nullptr));
        action_O->setText(QCoreApplication::translate("MainWindow", "\351\226\213\345\225\237(O)", nullptr));
        action_C->setText(QCoreApplication::translate("MainWindow", "\351\227\234\351\226\211(C)", nullptr));
        action_S->setText(QCoreApplication::translate("MainWindow", "\345\204\262\345\255\230(S)", nullptr));
        action_A->setText(QCoreApplication::translate("MainWindow", "\345\217\246\345\255\230(A)", nullptr));
        action_X->setText(QCoreApplication::translate("MainWindow", "\351\200\200\345\207\272(X)", nullptr));
        menu->setTitle(QCoreApplication::translate("MainWindow", "\346\252\224\346\241\210", nullptr));
        menu_2->setTitle(QCoreApplication::translate("MainWindow", "\347\267\250\350\274\257", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("MainWindow", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
