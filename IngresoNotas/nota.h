#ifndef NOTA_H
#define NOTA_H

#include <QObject>
#include "curso.h"
#include "estudiante.h"
#include "profesor.h"

class Nota : public Curso
{

public:
    explicit Nota(Curso *aparent = nullptr);
    Nota(QString materia,int  periodo,QString codigo, Profesor Profesor,double aporte1,double aporte2,double promedio,Estudiante estudiante);
    double getAporte1();
    double getAporte2();
    double getPromedio();
    Estudiante getEstudiante();
    QString toString();
signals:
private:
    double m_aporte1;
    double m_aporte2;
    double m_promedio;
    Estudiante m_estudiante;
};

#endif // NOTA_H
