#ifndef FORM_H
#define FORM_H

#include <QWidget>
#include <nota.h>
namespace Ui {
class Form;
}

class Form : public QWidget
{
    Q_OBJECT

public:
    explicit Form(QWidget *parent = nullptr);
    ~Form();
    Form(QList<Nota*> notas);

     QList<Nota*> getNotas();
     void inicio();
private slots:
     void on_Regresar_clicked();

private:
    Ui::Form *ui;
    QList<Nota*> m_notas;
    QPixmap pixmap;
};

#endif // FORM_H
