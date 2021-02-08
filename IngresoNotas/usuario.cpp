#include "usuario.h"

Usuario::Usuario(QString nombre, QString apellido, int cedula, QString codigo):
    m_nombre(nombre),m_apellido(apellido),m_cedula(cedula),m_codigo(codigo)
{
    m_nombre=nombre;
    m_apellido=apellido;
    m_cedula=cedula;
    m_codigo=codigo;
}
QString Usuario::getNombre(){
    return m_nombre;
}
QString Usuario::getApellido(){
    return m_apellido;
}
int Usuario::getCedula(){
    return m_cedula;
}
QString Usuario::getCodigo(){
    return m_codigo;
}
