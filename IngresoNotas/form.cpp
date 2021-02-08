#include "form.h"
#include "ui_form.h"
#include <QWidget>
#include <nota.h>
#include <QPainter>
#include <QPen>
#include <QDebug>
Form::Form(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Form)
{
    ui->setupUi(this);
}
Form::Form(QList<Nota*> notas):
    m_notas(notas),
    ui(new Ui::Form)
{
    m_notas=notas;
    ui->setupUi(this);
    pixmap=QPixmap(ui->imagen->size());
    pixmap.fill(Qt::white);
    ui->imagen->setPixmap(pixmap);
    inicio();

}
Form::~Form()
{
    delete ui;
}

void Form::on_Regresar_clicked()
{
    this->close();
}
void Form::inicio(){
    QPainter painter(&pixmap);

    QPen penc(Qt::black);
    penc.setColor(Qt::black);
    painter.setPen(penc);

    //linea de mitad
    painter.drawLine(550,100,17,100);

    //linea de arriba
    painter.drawLine(15,300,15,10);

    //linea de la abajo(x)
    painter.drawLine(15,15,550,14);

    //cordenadas del plano
    painter.drawText(11,10,"Y");
    painter.drawText(600,15,"X");
    int aux=30;
   for(int i=0; i<m_notas.length();i++){
       if(m_notas.at(i)->getPromedio()>70){
           painter.setBrush(Qt::green);
           painter.drawRect(30+i*50,aux,10,m_notas.at(i)->getPromedio()*2);
        //qDebug()<<"promedio: "<<m_notas.at(i)->getPromedio();
           QPen pen(Qt::black);
           pen.setColor(Qt::black);
           painter.setPen(pen);
           painter.drawText(30+i*50,27,m_notas.at(i)->getEstudiante().getApellido());

           ui->imagen->setPixmap(pixmap);
       }else if(m_notas.at(i)->getPromedio()<70){
           painter.setBrush(Qt::red);
           painter.drawRect(30+i*50,aux,10,m_notas.at(i)->getPromedio()*2);
        //qDebug()<<"promedio: "<<m_notas.at(i)->getPromedio();
           QPen pen(Qt::black);
           pen.setColor(Qt::black);
           painter.setPen(pen);
           painter.drawText(30+i*50,27,m_notas.at(i)->getEstudiante().getApellido());

           ui->imagen->setPixmap(pixmap);
       }

   }
}
