#include "widget.h"
#include "ui_widget.h"
#include <nota.h>
#include <QDate>
#include <profesor.h>
#include <form.h>
#include <QDebug>
#include <QWidget>
#include <tree.h>
widget::widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::widget)
{
    ui->setupUi(this);
    inicio();
}
widget::widget(QString usuario, QString contrasena,QList<Profesor*> profesor):
    m_usuario(usuario),m_contrasena(contrasena),m_profesor(profesor),
    ui(new Ui::widget)
{
    ui->setupUi(this);
    inicio();

}
widget::~widget()
{
    delete ui;
}

void widget::inicio()
{

    aporte1=0;
    aporte2=0;
    promedio=0;
    ui->apellido->setText("");
    ui->nombre->setText("");
    ui->Aporte1->setText("0.0");
    ui->Aporte2->setText("0.0");
    ui->Promedio->setText("0.0");
    ui->lista->reset();
    QString fecha= QDate::currentDate().toString();
    ui->fecha->setText(fecha);
    //definir la lista de la cabecera
    QStringList cabecera ={"Materia","Aporte1","Aporte2","Promedio","NombreEstudiante","ApellidoEstudiante","Cedula"};
    //define número de columnas
    ui->lista->setColumnCount(7);
    //asigna la cabecera tipo lista como etiquetas
    ui->lista->setHorizontalHeaderLabels(cabecera);
    //define los anchos de cada columna
    ui->lista->setColumnWidth(0,50);
    ui->lista->setColumnWidth(1,60);
    ui->lista->setColumnWidth(2,60);
    ui->lista->setColumnWidth(3,60);
    ui->lista->setColumnWidth(4,120);
    ui->lista->setColumnWidth(5,120);
    ui->lista->setColumnWidth(6,120);
}

void widget::agregar()
{
    QString fecha= QDate::currentDate().toString();
    QString nombre=ui->nombre->text();
    QString apellido=ui->apellido->text();
    QString materia=ui->materia->text();
    QString codigo=ui->codigoMateria->text();
    int cedula= ui->cedula->text().toInt();
    double aporte1=ui->Aporte1->text().toDouble();
    double aporte2=ui->Aporte2->text().toDouble();
    double promedio=(aporte1+aporte2);
    ui->Promedio->setText(QString::number(promedio));
    //lista
    int posicion = ui->lista->rowCount();
    ui->lista->insertRow(posicion);
    ui->lista->setItem(posicion,0,new QTableWidgetItem(materia));
    ui->lista->setItem(posicion,1,new QTableWidgetItem(QString::number(aporte1)));
    ui->lista->setItem(posicion,2,new QTableWidgetItem(QString::number(aporte2)));
    ui->lista->setItem(posicion,3,new QTableWidgetItem(QString::number(promedio)));
    ui->lista->setItem(posicion,4,new QTableWidgetItem(nombre));
    ui->lista->setItem(posicion,5,new QTableWidgetItem(apellido));
    ui->lista->setItem(posicion,6,new QTableWidgetItem(QString::number(cedula)));
    QString nombreP="", apellidoP="",codigoP="", categoriaP="";
    int cedulaP=0;
    for(int i=0;i<m_profesor.length();i++){
        if(m_profesor.at(i)->getUsuario()==m_usuario&&m_profesor.at(i)->getContrasena()==m_contrasena){
            nombreP=m_profesor.at(i)->getNombre();
            apellidoP=m_profesor.at(i)->getApellido();
            codigoP=m_profesor.at(i)->getCodigo();
            categoriaP=m_profesor.at(i)->getCategoria();
            cedulaP= m_profesor.at(i)->getCedula();
        }
    }
    Profesor *auxProfesor= new Profesor(nombreP,apellidoP,cedulaP,codigoP,m_contrasena,m_usuario,categoriaP);
    Estudiante *auxEstudiante= new Estudiante(ui->nombre->text(), ui->apellido->text(), ui->cedula->text().toInt(), " "," ");
    Nota *auxNota= new Nota(ui->materia->text(),ui->fecha->text().toInt(),ui->codigoMateria->text(), *auxProfesor,ui->Aporte1->text().toDouble(),ui->Aporte2->text().toDouble(),ui->Promedio->text().toDouble(),*auxEstudiante);
    m_nota.append(new Nota(ui->materia->text(),ui->fecha->text().toInt(),ui->codigoMateria->text(), *auxProfesor,ui->Aporte1->text().toDouble(),ui->Aporte2->text().toDouble(),ui->Promedio->text().toDouble(),*auxEstudiante));
    /*for(int i=0; i<m_nota.length();i++){
        qDebug()<<m_nota.at(i)->getPromedio();
        qDebug()<<m_nota.at(i)->getEstudiante().getApellido();

    }*/

}

void widget::eliminar()
{
    QString auxApellido;
    for(int i=0; i<m_nota.length();i++){
        int auxCedula=m_nota.at(i)->getEstudiante().getCedula();
        if(ui->cedula->text().toInt()==auxCedula){
            Nota *auxNota= new Nota(m_nota.at(i));
            auxApellido=m_nota.at(i)->getEstudiante().getApellido();
            m_nota.removeOne(auxNota);

        }
    }
    int i=1, col=1, fila=0;
    QTableWidgetItem* theitem= ui->lista->item(1,1);

    //QString thetext =ui->lista->row();

    for(int i=0; i<ui->lista->rowCount();i++){
        //qDebug()<<"apellido: "<<ui->lista->item(i,5)->text();
       if(ui->apellido->text()==ui->lista->item(i,5)->text()&&ui->nombre->text()==ui->lista->item(i,4)->text()&&ui->cedula->text().toInt()==ui->lista->item(i,6)->text().toInt()){
         ui->lista->removeRow(i);
        // qDebug()<<"fila: "<<fila;
       }else{
         //qDebug()<<"No encontro el dato";

       }
    }
   //

}
QString widget::getUsuario(){
    return m_usuario;
}
QString widget::getContrasena(){
    return m_contrasena;
}
QList<Profesor*> widget::getProfesores(){
    return m_profesor;
}

void widget::on_btnnuevo_clicked()
{
     inicio();
}

void widget::on_btnanadir_clicked()
{
    agregar();
}

void widget::on_btnEliminar_clicked()
{
    eliminar();
}

void widget::on_btnsalir_clicked()
{
    close();
}
void widget::abrirVetana(QList<Nota*> notas){
    Form *AuxWidget=new Form(notas);
    AuxWidget->show();
    //AuxWidget->setVisible(true);
    //AuxWidget->hide();
   // AuxWidget->setVisible(false);


}
void widget::abrirVetana2(QList<Nota*> notas){
    Tree *AuxWidget=new Tree(notas);
    AuxWidget->show();
    //AuxWidget->setVisible(true);
    //AuxWidget->hide();
   // AuxWidget->setVisible(false);


}
void widget::on_GraficoBarras_clicked()
{
    abrirVetana(m_nota);
    //this->hide();
}

void widget::on_ArbolBinario_clicked()
{
    abrirVetana2(m_nota);
    //this->hide();
}
