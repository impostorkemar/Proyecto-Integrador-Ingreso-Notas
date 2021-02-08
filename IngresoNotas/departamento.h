#ifndef DEPARTAMENTO_H
#define DEPARTAMENTO_H

#include <QObject>
#include "profesor.h"
class Departamento : public QObject
{
    Q_OBJECT
public:
    explicit Departamento(QObject *parent = nullptr);
    Departamento(QString nombre,int codigo,QList<Profesor> listaProfesores);
    QString getNombre();
    int getCodigo();
    QList<Profesor> getListaProfesores();
signals:

private:
    QString m_nombre;
    int m_codigo;
    QList<Profesor> m_listaProfesores;
};

#endif // DEPARTAMENTO_H
