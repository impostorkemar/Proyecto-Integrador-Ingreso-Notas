/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_widget
{
public:
    QGroupBox *groupBox_3;
    QTableWidget *lista;
    QWidget *layoutWidget_2;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QLineEdit *Aporte1;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_8;
    QLineEdit *Aporte2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_7;
    QLineEdit *Promedio;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *btnnuevo;
    QPushButton *btnanadir;
    QPushButton *btnEliminar;
    QPushButton *btnsalir;
    QLabel *fecha;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_2;
    QLineEdit *apellido;
    QLabel *label;
    QLineEdit *nombre;
    QLabel *label_5;
    QLineEdit *cedula;
    QGroupBox *groupBox_2;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout;
    QLabel *label_4;
    QLineEdit *materia;
    QLabel *label_6;
    QLineEdit *codigoMateria;
    QWidget *widget1;
    QHBoxLayout *horizontalLayout_6;
    QPushButton *GraficoBarras;
    QPushButton *ArbolBinario;

    void setupUi(QWidget *widget)
    {
        if (widget->objectName().isEmpty())
            widget->setObjectName(QString::fromUtf8("widget"));
        widget->resize(824, 507);
        groupBox_3 = new QGroupBox(widget);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setGeometry(QRect(20, 170, 581, 271));
        lista = new QTableWidget(groupBox_3);
        lista->setObjectName(QString::fromUtf8("lista"));
        lista->setGeometry(QRect(10, 20, 561, 241));
        layoutWidget_2 = new QWidget(widget);
        layoutWidget_2->setObjectName(QString::fromUtf8("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(610, 170, 141, 113));
        verticalLayout_2 = new QVBoxLayout(layoutWidget_2);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_3 = new QLabel(layoutWidget_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_2->addWidget(label_3);

        Aporte1 = new QLineEdit(layoutWidget_2);
        Aporte1->setObjectName(QString::fromUtf8("Aporte1"));
        Aporte1->setEnabled(true);
        Aporte1->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_2->addWidget(Aporte1);


        verticalLayout_2->addLayout(horizontalLayout_2);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_8 = new QLabel(layoutWidget_2);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        horizontalLayout_5->addWidget(label_8);

        Aporte2 = new QLineEdit(layoutWidget_2);
        Aporte2->setObjectName(QString::fromUtf8("Aporte2"));
        Aporte2->setEnabled(true);
        Aporte2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_5->addWidget(Aporte2);


        verticalLayout_2->addLayout(horizontalLayout_5);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_7 = new QLabel(layoutWidget_2);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        horizontalLayout_3->addWidget(label_7);

        Promedio = new QLineEdit(layoutWidget_2);
        Promedio->setObjectName(QString::fromUtf8("Promedio"));
        Promedio->setEnabled(false);
        Promedio->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_3->addWidget(Promedio);


        verticalLayout_2->addLayout(horizontalLayout_3);

        layoutWidget = new QWidget(widget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(640, 300, 77, 112));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        btnnuevo = new QPushButton(layoutWidget);
        btnnuevo->setObjectName(QString::fromUtf8("btnnuevo"));

        verticalLayout->addWidget(btnnuevo);

        btnanadir = new QPushButton(layoutWidget);
        btnanadir->setObjectName(QString::fromUtf8("btnanadir"));

        verticalLayout->addWidget(btnanadir);

        btnEliminar = new QPushButton(layoutWidget);
        btnEliminar->setObjectName(QString::fromUtf8("btnEliminar"));

        verticalLayout->addWidget(btnEliminar);

        btnsalir = new QPushButton(layoutWidget);
        btnsalir->setObjectName(QString::fromUtf8("btnsalir"));

        verticalLayout->addWidget(btnsalir);

        fecha = new QLabel(widget);
        fecha->setObjectName(QString::fromUtf8("fecha"));
        fecha->setGeometry(QRect(340, 20, 201, 16));
        groupBox = new QGroupBox(widget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(20, 40, 556, 53));
        horizontalLayout_4 = new QHBoxLayout(groupBox);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_4->addWidget(label_2);

        apellido = new QLineEdit(groupBox);
        apellido->setObjectName(QString::fromUtf8("apellido"));

        horizontalLayout_4->addWidget(apellido);

        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_4->addWidget(label);

        nombre = new QLineEdit(groupBox);
        nombre->setObjectName(QString::fromUtf8("nombre"));

        horizontalLayout_4->addWidget(nombre);

        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout_4->addWidget(label_5);

        cedula = new QLineEdit(groupBox);
        cedula->setObjectName(QString::fromUtf8("cedula"));

        horizontalLayout_4->addWidget(cedula);

        groupBox_2 = new QGroupBox(widget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(20, 100, 501, 51));
        layoutWidget1 = new QWidget(groupBox_2);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(18, 20, 409, 22));
        horizontalLayout = new QHBoxLayout(layoutWidget1);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(layoutWidget1);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout->addWidget(label_4);

        materia = new QLineEdit(layoutWidget1);
        materia->setObjectName(QString::fromUtf8("materia"));

        horizontalLayout->addWidget(materia);

        label_6 = new QLabel(layoutWidget1);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        horizontalLayout->addWidget(label_6);

        codigoMateria = new QLineEdit(layoutWidget1);
        codigoMateria->setObjectName(QString::fromUtf8("codigoMateria"));

        horizontalLayout->addWidget(codigoMateria);

        widget1 = new QWidget(widget);
        widget1->setObjectName(QString::fromUtf8("widget1"));
        widget1->setGeometry(QRect(190, 450, 177, 25));
        horizontalLayout_6 = new QHBoxLayout(widget1);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        GraficoBarras = new QPushButton(widget1);
        GraficoBarras->setObjectName(QString::fromUtf8("GraficoBarras"));

        horizontalLayout_6->addWidget(GraficoBarras);

        ArbolBinario = new QPushButton(widget1);
        ArbolBinario->setObjectName(QString::fromUtf8("ArbolBinario"));

        horizontalLayout_6->addWidget(ArbolBinario);


        retranslateUi(widget);

        QMetaObject::connectSlotsByName(widget);
    } // setupUi

    void retranslateUi(QWidget *widget)
    {
        widget->setWindowTitle(QCoreApplication::translate("widget", "Form", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("widget", "Lista de estudiantes", nullptr));
        label_3->setText(QCoreApplication::translate("widget", "Aporte 1", nullptr));
        Aporte1->setText(QCoreApplication::translate("widget", "0.00", nullptr));
        label_8->setText(QCoreApplication::translate("widget", "Aporte 2", nullptr));
        Aporte2->setText(QCoreApplication::translate("widget", "0.00", nullptr));
        label_7->setText(QCoreApplication::translate("widget", "Promedio", nullptr));
        Promedio->setText(QCoreApplication::translate("widget", "0.00", nullptr));
        btnnuevo->setText(QCoreApplication::translate("widget", "Nuevo", nullptr));
        btnanadir->setText(QCoreApplication::translate("widget", "A\303\261adir", nullptr));
        btnEliminar->setText(QCoreApplication::translate("widget", "Eliminar", nullptr));
        btnsalir->setText(QCoreApplication::translate("widget", "Salir", nullptr));
        fecha->setText(QCoreApplication::translate("widget", "Fecha", nullptr));
        groupBox->setTitle(QCoreApplication::translate("widget", "Estudiante", nullptr));
        label_2->setText(QCoreApplication::translate("widget", "Apellido", nullptr));
        label->setText(QCoreApplication::translate("widget", "Nombre", nullptr));
        label_5->setText(QCoreApplication::translate("widget", "Cedula", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("widget", "Curso", nullptr));
        label_4->setText(QCoreApplication::translate("widget", "Materia", nullptr));
        label_6->setText(QCoreApplication::translate("widget", "Codigo de Materia", nullptr));
        GraficoBarras->setText(QCoreApplication::translate("widget", "Gr\303\241fico de Barras ", nullptr));
        ArbolBinario->setText(QCoreApplication::translate("widget", "\303\201rbol binario", nullptr));
    } // retranslateUi

};

namespace Ui {
    class widget: public Ui_widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
