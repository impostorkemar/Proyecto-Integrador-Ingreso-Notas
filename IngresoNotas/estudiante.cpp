#include "estudiante.h"

Estudiante::Estudiante(Usuario *parent):Usuario("","",0,""){

}
Estudiante::Estudiante(QString nombre, QString apellido, int cedula, QString codigo,QString matricula):Usuario(nombre,apellido,cedula,codigo)
{
    m_Matricula=matricula;

}
QString Estudiante::getMatricula(){
    return m_Matricula;
}
