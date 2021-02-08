#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "widget.h"
#include <QApplication>
#include <QWidget>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{

    ui->setupUi(this);
    cargarDatos();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::abrirVetana(QString auxUsuario, QString auxContrasena){
    widget *AuxWidget=new widget(auxUsuario,auxContrasena,m_profesor);
    AuxWidget->show();
    //AuxWidget->setVisible(true);
    //AuxWidget->hide();
   // AuxWidget->setVisible(false);


}
void MainWindow::cargarDatos(){
    m_profesor.append(new Profesor("Walter", "Gaibor", 1724124084, "S10","1234","tester","Completo"));
}
void MainWindow::on_btnEntrar_clicked()
{
    QString auxUsuario="";
    QString auxContrasena="";
    for(int i=0; i<m_profesor.length();i++){
        auxUsuario=m_profesor.at(i)->getUsuario();
        auxContrasena=m_profesor.at(i)->getContrasena();
        if(ui->QLineUsuario->text()==auxUsuario&&ui->QlineContrasea->text()==auxContrasena){
            abrirVetana(auxUsuario,auxContrasena);
            this->hide();
            ui->labeltest->setText("Clave Encontrada");
        }else{
            ui->labeltest->setText("Clave Incorrecta");
        }
    }


}

