#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <nota.h>
#include <profesor.h>
QT_BEGIN_NAMESPACE
namespace Ui {
class widget;
}

class widget : public QWidget
{
    Q_OBJECT

public:
    explicit widget(QWidget *parent = nullptr);
    ~widget();
    widget(QString auxUsuario, QString auxContrasena,QList<Profesor*> m_profesor);
    double aporte1=0;
    double aporte2=0;
    double promedio=0;
    QString m_usuario;
    QString m_contrasena;
    QList<Profesor*> m_profesor;
    QString getUsuario();
    QString getContrasena();
    QList<Profesor*> getProfesores();

    void inicio();
    void agregar();
    void eliminar();
    void abrirVetana(QList<Nota*> m_nota);
    void abrirVetana2(QList<Nota*> m_nota);
private slots:

    void on_btnnuevo_clicked();
    void on_btnanadir_clicked();
    void on_btnEliminar_clicked();
    void on_btnsalir_clicked();

    void on_GraficoBarras_clicked();

    void on_ArbolBinario_clicked();

private:
    Ui::widget *ui;
    QList<Nota*> m_nota;
};

#endif // WIDGET_H
