#ifndef UNIVERSIDAD_H
#define UNIVERSIDAD_H

#include <QObject>
#include "estudiante.h"
#include "departamento.h"
class Universidad : public QObject
{
    Q_OBJECT
public:
    explicit Universidad(QObject *parent = nullptr);
    Universidad(QString direccion,QString nombre,int telefono,int codigo,QList<Departamento> listaDepartamentos,QList<Estudiante> listaEstudiantes);
    QString getDireccion();
    QString getNombre();
    int getTelefono();
    int getCodigo();
    QList<Departamento> getlistaDepartamentos();
    QList<Estudiante> getlistaEstudiantes();

signals:

private:
    QString m_direccion;
    QString m_nombre;
    int m_telefono;
    int m_codigo;
    QList<Departamento> m_listaDepartamentos;
    QList<Estudiante> m_listaEstudiantes;

};

#endif // UNIVERSIDAD_H
