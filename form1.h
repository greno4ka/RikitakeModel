#ifndef FORM1_H
#define FORM1_H

#include <QMainWindow>
#include <QLayout>
#include <QString>
#include "rungekutta.h"
#include "form0.h"
#include "ui_Form1.h"
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
class Form1;
}

class Form1 : public QMainWindow
{
    Q_OBJECT

public:
    explicit Form1(QWidget *parent = 0);
    ~Form1();

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
        A=3*M;
        recalc();
        QString s;
        s.setNum(A,'g',4);
        this->ui->Aout->setText(s);
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
        w1->hide();
        last=w1;
        w2->show();
        w2->setGeometry(100,100,800,600); // Смещение и положение окна
    }
    void graph()
    {
        w1->hide();
        last=w1;
        gr->show();
        gr->setGeometry(100,100,800,600); // Смещение и положение окна
    }

private:
    Ui::Form1 *ui;
};

#endif // Form1_H
