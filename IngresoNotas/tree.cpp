#include "tree.h"
#include "ui_tree.h"
#include <iostream>
#include <stdlib.h>
#include <QDebug>
#include <QTextStream>
#include <QLabel>
#include <QMessageBox>
Tree::Tree(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Tree)
{
    ui->setupUi(this);
}
Tree::Tree(QList<Nota*> notas):
    m_notas(notas),
    ui(new Ui::Tree)
{
    inicio();
    ui->setupUi(this);


}
Tree::~Tree()
{
    delete ui;
}
using namespace std;
struct nodo{
    double dato;
    struct nodo *izq;
    struct nodo *der;
};
typedef struct nodo *ARBOL;

void Tree::insertar (ARBOL &arbol, double x){
   ARBOL nuevoNodo = new ( struct nodo);
    nuevoNodo->dato= x;
    nuevoNodo->izq= NULL;
    nuevoNodo->der=NULL;

    if(arbol==NULL){
        arbol=nuevoNodo;
    }else if(x<arbol->dato){
        insertar(arbol->izq,x);
    }else if(x>arbol->dato){
        insertar(arbol->der,x);
    }

}
int  Tree::imprimirHermanos(ARBOL &arbol, int x){
    ARBOL temporal= new (struct nodo);
        temporal=arbol;
        if(temporal!=NULL){
            if(((temporal->der)!=NULL) && ((temporal->izq)!= NULL)){
                cout<<(temporal->izq)->dato<<" y "<<(temporal->der)->dato<<endl;
            }
            imprimirHermanos (temporal->izq,x);
            imprimirHermanos (temporal->der,x);
   }

}
QString Tree::verArbol(ARBOL &arbol, int n,QList <QString> &aux3){
    ARBOL temporal = new (struct nodo);
    temporal = arbol;
    QString aux,aux2;
    if(temporal== NULL)
        return "";
    verArbol(temporal->der,n+1,aux3);
    for(int i=0;i<=n;i++){
        aux=aux+"       ";
        //qDebug()<<" ";
    }
    //aux=aux+ QString::number(temporal->dato)+flush();
    //qDebug()<<aux+QString::number(temporal->dato)<<('\n');
    QString al="<<('\n')";
    //aux3+=aux+QString::number(temporal->dato)+std::endl;
    aux3.append(aux+QString::number(temporal->dato));
    verArbol(temporal->izq,n+1,aux3);
    //qDebug()<<"aux2: "<<aux2;

    return aux2;

}
void Tree::inicio()
{
    QString aux="";
    QList<QString> aux3;
    double auxD;
    ARBOL arbol= NULL;
    for(int i=0; i<m_notas.length();i++){
        insertar(arbol,m_notas.at(i)->getPromedio());
        //qDebug()<<m_notas.at(i)->getPromedio();
    }    
    qDebug()<<"Arbol Binario:"<<('\n');
   aux=verArbol(arbol,0,aux3);
   for(int i=0; i<aux3.length();i++){
       qDebug()<<aux3.at(i);
   }

    //QLabel *nombreBoton;
    //nombreBoton = new QLabel(aux,this);

    int x=375, y=30, weight=47, hight=13, altura, auxAltura;
    /*for(int i=0; i<m_notas.length();i++){
        QString label= "nombreBoton"+i;
        if(i==0){
            QLabel *label;
            label = new QLabel(QString::number(m_notas.at(i)->getPromedio()),this);
            label->setStyleSheet("QLabel { background-color :yellow  ; color : black; }");
            label->setGeometry(375,30,47,13);
            auxD=m_notas.at(i)->getPromedio();
        }else if(auxD<m_notas.at(i)->getPromedio()){

            //qDebug()<<m_notas.at(i)->getPromedio()<<"   altura: "<<altura<<('\n');
            QLabel *label;
            label = new QLabel(QString::number(m_notas.at(i)->getPromedio()),this);
            label->setStyleSheet("QLabel { background-color :yellow  ; color : black; }");
            label->setGeometry(x+20*i,y+20*i,47,13);
            auxD=m_notas.at(i)->getPromedio();

        }else if(auxD>m_notas.at(i)->getPromedio()){

            qDebug()<<m_notas.at(i)->getPromedio()<<"   altura: "<<altura<<('\n');
            QLabel *label;
            label = new QLabel(QString::number(m_notas.at(i)->getPromedio()),this);
            label->setStyleSheet("QLabel { background-color :yellow  ; color : black; }");
            label->setGeometry(x-20*i,y+20*i,47,13);
            auxD=m_notas.at(i)->getPromedio();


        }

    }*/
    for(int i=0; i<aux3.length();i++){
        QLabel *label;
        label = new QLabel(aux3.at(i),this);
        label->setStyleSheet("QLabel { background-color :yellow  ; color : black; }");
        label->setGeometry(100,y+20*i,300,13);
        auxD=m_notas.at(i)->getPromedio();
    }
}
void Tree::on_Regresar_clicked()
{
    this->close();
}
