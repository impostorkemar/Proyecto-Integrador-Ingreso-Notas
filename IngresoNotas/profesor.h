#ifndef PROFESOR_H
#define PROFESOR_H


#include "usuario.h"

class Profesor : public Usuario
{

public:
    explicit Profesor(Usuario *aparent = nullptr);
    Profesor(QString nombre, QString apellido, int cedula, QString codigo,QString contrasena,QString usuario,QString categoria);
    //gets
    QString getContrasena();
    QString getUsuario();
    QString getCategoria();

signals:

private:
    QString m_contrasena;
    QString m_usuario;
    QString m_categoria;

};

#endif // PROFESOR_H
