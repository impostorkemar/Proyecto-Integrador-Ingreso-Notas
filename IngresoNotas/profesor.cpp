#include "profesor.h"

Profesor::Profesor(Usuario *parent):Usuario(*parent){

}
Profesor::Profesor(QString nombre, QString apellido, int cedula, QString codigo,QString contrasena,QString usuario,QString categoria):
    Usuario(nombre,apellido,cedula,codigo)
{   
    m_contrasena=contrasena;
    m_usuario=usuario;
    m_categoria=categoria;

}
QString Profesor::getContrasena(){
    return m_contrasena;
}

QString Profesor::getUsuario(){
    return m_usuario;
}

QString Profesor::getCategoria(){
    return m_categoria;
}

