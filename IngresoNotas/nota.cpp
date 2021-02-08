#include "nota.h"
Nota::Nota(Curso *parent):Curso(*parent){

}
Nota::Nota(QString materia,int  periodo,QString codigo, Profesor profesor,double aporte1,double aporte2,double promedio,Estudiante estudiante):
    Curso(materia,periodo,codigo,profesor)
{
    m_aporte1=aporte1;
    m_aporte2=aporte2;
    m_promedio=promedio;
    m_estudiante=estudiante;

}
QString Nota::toString(){
    QString text="materia:"+ getMateria()+" perioso:"+getPeriodo()+" codigo:"+getCodigo()+" aporte1:"+getAporte1()+" aporte2:"+getAporte2()+" promedio:"+getPromedio();
    return text;
}
Estudiante Nota::getEstudiante(){
    return m_estudiante;
}
double Nota::getAporte1(){
    return m_aporte1;
}
double Nota::getAporte2(){
    return m_aporte2;
}
double Nota::getPromedio(){
    return m_promedio;
}
