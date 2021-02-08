#ifndef ESTUDIANTE_H
#define ESTUDIANTE_H

#include <usuario.h>

class Estudiante : public Usuario
{
public:    
    explicit Estudiante(Usuario *aparent = nullptr);
    Estudiante(QString nombre, QString apellido, int cedula, QString codigo,QString matricula);
    //get
    QString getMatricula();

private:
    QString m_Matricula;
};

#endif // ESTUDIANTE_H

#ifndef ESTUDIANTE_H



#endif // ESTUDIANTE_H
