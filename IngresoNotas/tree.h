#ifndef TREE_H
#define TREE_H
#include <nota.h>
#include <QWidget>

namespace Ui {
class Tree;
}

class Tree : public QWidget
{
    Q_OBJECT


public:
    explicit Tree(QWidget *parent = nullptr);
    ~Tree();
    Tree(QList<Nota*> m_notas);
    QList<Nota*> getNotas();
    void inicio();
    struct nodo{
        double dato;
        struct nodo *izq;
        struct nodo *der;
    };
    typedef struct nodo *ARBOL;
    void insertar(ARBOL &arbol, double x);    
    int imprimirHermanos(ARBOL &arbol, int x);
    QString verArbol(ARBOL &arbol, int x,QList<QString> &aux3);
private slots:
      void on_Regresar_clicked();

private:
    Ui::Tree *ui;
     QList<Nota*> m_notas;

};

#endif // TREE_H
