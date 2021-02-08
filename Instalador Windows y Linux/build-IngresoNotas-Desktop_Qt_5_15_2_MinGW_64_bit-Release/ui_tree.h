/********************************************************************************
** Form generated from reading UI file 'tree.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TREE_H
#define UI_TREE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Tree
{
public:
    QPushButton *Regresar;

    void setupUi(QWidget *Tree)
    {
        if (Tree->objectName().isEmpty())
            Tree->setObjectName(QString::fromUtf8("Tree"));
        Regresar = new QPushButton(Tree);
        Regresar->setObjectName(QString::fromUtf8("Regresar"));
        Regresar->setGeometry(QRect(340, 450, 75, 23));

        retranslateUi(Tree);

        QMetaObject::connectSlotsByName(Tree);
    } // setupUi

    void retranslateUi(QWidget *Tree)
    {
        Tree->setWindowTitle(QCoreApplication::translate("Tree", "Form", nullptr));
        Regresar->setText(QCoreApplication::translate("Tree", "Regresar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Tree: public Ui_Tree {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TREE_H
