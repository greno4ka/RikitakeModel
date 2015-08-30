#include "form0.h"
#include "form1.h"
#include "help.h"
#include "graphics.h"
#include "rungekutta.h"
#include <QApplication>
#include <QMessageBox>
#include <QLayout>
#include <cmath>
#include <GL\glu.h>
#include <iostream>
//#include "screenshot.h"


int N=100000,mode=0, T, point=0;
bool flag, g=1;
double tau, M, A, eps;
int X,Y;


vector <vector <double> > Points;
QMainWindow *w0, *w1, *w2, *gr, *last; // suppose, that using virtual class


void changeForm()
{
    if (mode==0)
    {
        w0->show();
        w1->hide();
        w0->setGeometry(100,100,800,600); // Смещение и положение окна
    }
    else
    {
        w1->show();
        w0->hide();
        w1->setGeometry(100,100,800,600); // Смещение и положение окна
    }
}

void recalc()
{
    tau = (double) T/N; // integrate step

    vector <double> y0(3),y(3);
    switch (point) {
    case 0:
        y0[0] =  sqrt((A/M + sqrt(pow(A/M, 2) + 4))/2) + eps;
        break;
    case 1:
        y0[0] =  -sqrt((A/M + sqrt(pow(A/M, 2) + 4))/2) + eps;
        break;
    case 2:
        y0[0] =  sqrt((A/M - sqrt(pow(A/M, 2) + 4))/2) + eps;
        break;
    case 3:
        y0[0] =  -sqrt((A/M - sqrt(pow(A/M, 2) + 4))/2) + eps;
        break;
    }
    y0[1] =  1/(y0[0] - eps) + eps;
    y0[2] = M*pow(y0[0] - eps, 2) + eps;
y[0]=y[1]=y[2]=0;

    // конструктор копирования параметров
    RungeKutta Rk (tau, M, A);
    for (int i = 0; i <= N+1; i++)
    {
       Points.push_back(y);
       Points[i].resize(3);
}
    Points[0] = y0;
        for (int i = 1; i <= N/2; i ++) {
        Rk.Method(Points[2*i - 2], Points[2*i - 1]);
        Rk.Method(Points[2*i - 1], Points[2*i]);
    }
}

void savedata()
{
    FILE *F;
    double t=0;
    F = fopen ("data.txt","w+");
    fprintf(F,"     t          x          y          z\n");
    for (int i=0; i<=N; i++) {
        fprintf(F,"%f , %f , %f , %f\n",t,Points[i][0],Points[i][1],Points[i][2]);
        t+=tau;
    }
    fclose (F);
}

int main(int argc, char *argv[])
{
    T = 300; M = 5; A = 15; eps = 0.1;

    //Screenshot screenshot;
    QApplication app(argc, argv);
        w0 = new Form0;
        w1 = new Form1;
        w2 = new Help;
        gr = new Graphics;
  //      screenshot.show();

        gr->show();
        gr->hide();
        w2->show();
        w2->hide();
        w1->show();
        w1->hide();
         w0->show();
         //w0->showFullScreen();
         w0->setGeometry(100,100,800,600); // Смещение и положение окна
        // gr->show();
        // gr->setGeometry(100,100,800,600); // Смещение и положение окна

    recalc();
    return app.exec();
}
