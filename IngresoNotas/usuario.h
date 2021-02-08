#ifndef USUARIO_H
#define USUARIO_H
#include <QString>
#include <QObject>
class Usuario
{

public:

    Usuario(QString nombre, QString apellido, int cedula, QString codigo);

    QString getNombre();
    QString getApellido();
    int getCedula();
    QString getCodigo();
signals:

private:
    QString m_nombre;
    QString m_apellido;
    int m_cedula;
    QString m_codigo;
};


#endif // USUARIO_H
