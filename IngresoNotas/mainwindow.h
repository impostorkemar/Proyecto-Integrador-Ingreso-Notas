#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <profesor.h>
QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void abrirVetana(QString auxUsuario, QString auxContrasena);
    void cargarDatos();

private slots:
    void on_btnEntrar_clicked();


private:
    Ui::MainWindow *ui;
    QList<Profesor*> m_profesor;
};
#endif // MAINWINDOW_H
