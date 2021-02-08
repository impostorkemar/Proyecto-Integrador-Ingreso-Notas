#include "curso.h"
#include "profesor.h"

Curso::Curso(QString materia,int  periodo,QString codigo, Profesor profesor):
    m_materia(materia),m_periodo(periodo),m_codigo(codigo),m_Profesor(profesor)
{
    m_materia=materia;
    m_periodo=periodo;
    m_codigo=codigo;
    m_Profesor=profesor;
}
QString Curso::getMateria(){
    return m_materia;
}
int Curso::getPeriodo(){
    return m_periodo;
}
QString Curso::getCodigo(){
    return m_codigo;
}
Profesor Curso::getProfesor(){
    return m_Profesor;
}
