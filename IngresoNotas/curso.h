#ifndef CURSO_H
#define CURSO_H

#include <QObject>
#include "profesor.h"
class Curso
{    

public:

    Curso(QString materia,int  periodo,QString codigo, Profesor Profesor);
    QString getMateria();
    int getPeriodo();
    QString getCodigo();
    Profesor getProfesor();

signals:
private:
    QString m_materia;
    int m_periodo;
    QString m_codigo;
    Profesor m_Profesor;
};

#endif // CURSO_H

