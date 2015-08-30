#ifndef GRAPHICS_H
#define GRAPHICS_H

#include <QMainWindow>
#include <QLayout>
#include "rungekutta.h"
#include "form1.h"
#include "help.h"

extern QMainWindow *w0, *w1, *w2;
extern int N,mode, T,point;
extern bool flag;
extern double tau, M, A, eps;
extern vector <vector <double> > Points;
extern void recalc();
extern void savedata();
extern void changeForm();

namespace Ui {
class Graphics;
}

extern QMainWindow *last;

class Graphics : public QMainWindow
{
    Q_OBJECT

public:
    explicit Graphics(QWidget *parent = 0);
    ~Graphics();

public slots:
    void changeT(int d){
        T=d;
        recalc();
    }

    void changeN(int d){
        N=d;
        Points.clear();
        recalc();
    }

    void changeM(double d){
        M=d;
        recalc();
    }

    void changeA(double d){
        A=d;
        recalc();
    }

    void changeEps(double d){
        eps=d;
        recalc();
    }

    void shut()
    {
        this->hide();
        last->show();
        last->setGeometry(100,100,800,600); // Смещение и положение окна
    }

private:
    Ui::Graphics *ui;
};

#endif // Graphics_H
