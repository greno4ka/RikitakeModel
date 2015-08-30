#ifndef FORM0_H
#define FORM0_H

#include <QMainWindow>
#include <QLayout>
#include "rungekutta.h"
#include "form1.h"
#include "help.h"
#include "graphics.h"

extern QMainWindow *w0, *w1, *w2, *gr;
extern int N,mode, T,point;
extern bool flag;
extern double tau, M, A, eps;
extern vector <vector <double> > Points;
extern void recalc();
extern void savedata();
extern void changeForm();

namespace Ui {
class Form0;
}

class Form0 : public QMainWindow
{
    Q_OBJECT

public:
    explicit Form0(QWidget *parent = 0);
    ~Form0();

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

    void changeLines(){
       flag=!flag;
    }

    void changeMode(){
       if (mode==0) mode=1; else mode=0;
       changeForm();
    }

    void save()
    {
        savedata();
    }

    void help()
    {
        w0->hide();
        last=w0;
        w2->show();
        w2->setGeometry(100,100,800,600); // Смещение и положение окна
    }

    void graph()
    {
        w0->hide();
        last=w0;
        gr->show();
        gr->setGeometry(100,100,800,600); // Смещение и положение окна
    }

private:
    Ui::Form0 *ui;
};

#endif // FORM0_H
