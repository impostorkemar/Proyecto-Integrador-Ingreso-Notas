/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *QLUsuario;
    QLineEdit *QLineUsuario;
    QLabel *QLContrasea;
    QLineEdit *QlineContrasea;
    QPushButton *btnEntrar;
    QLabel *labeltest;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(425, 382);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayoutWidget = new QWidget(centralwidget);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(100, 30, 211, 271));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        QLUsuario = new QLabel(verticalLayoutWidget);
        QLUsuario->setObjectName(QString::fromUtf8("QLUsuario"));
        QLUsuario->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(QLUsuario);

        QLineUsuario = new QLineEdit(verticalLayoutWidget);
        QLineUsuario->setObjectName(QString::fromUtf8("QLineUsuario"));

        verticalLayout->addWidget(QLineUsuario);

        QLContrasea = new QLabel(verticalLayoutWidget);
        QLContrasea->setObjectName(QString::fromUtf8("QLContrasea"));
        QLContrasea->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(QLContrasea);

        QlineContrasea = new QLineEdit(verticalLayoutWidget);
        QlineContrasea->setObjectName(QString::fromUtf8("QlineContrasea"));

        verticalLayout->addWidget(QlineContrasea);

        btnEntrar = new QPushButton(verticalLayoutWidget);
        btnEntrar->setObjectName(QString::fromUtf8("btnEntrar"));

        verticalLayout->addWidget(btnEntrar);

        labeltest = new QLabel(centralwidget);
        labeltest->setObjectName(QString::fromUtf8("labeltest"));
        labeltest->setEnabled(false);
        labeltest->setGeometry(QRect(100, 310, 201, 16));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 425, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        QLUsuario->setText(QCoreApplication::translate("MainWindow", "USUARIO", nullptr));
        QLContrasea->setText(QCoreApplication::translate("MainWindow", "CONTRASE\303\221A", nullptr));
        btnEntrar->setText(QCoreApplication::translate("MainWindow", "Entrar", nullptr));
        labeltest->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
