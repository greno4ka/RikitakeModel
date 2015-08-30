#include "glwidget2d.h"
#include "recalc.h"
#include "rungekutta.h"
#include <cmath>
#include <GL/glu.h>

extern int X,Y;
extern int N;
extern double tau;
extern vector <vector <double> > Points;

GLWidget2d::GLWidget2d(QWidget *parent) :   QGLWidget(parent)
{
    this->setMouseTracking(true);
    QTimer *timer = new QTimer(this);
    connect(timer, SIGNAL(timeout()), this, SLOT(updateGL()));
    timer->start(1);
}

void GLWidget2d::initializeGL(){
    qglClearColor(Qt::black);
}

void GLWidget2d::paintGL(){
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3ub(255,255,0);
    glBegin(GL_LINE_STRIP);
    double t=0;

    for (int i=0; i<=N; i++){
        glVertex2f(fx1(t),fy1(Points[i][0]));
        t+=tau;
    }
            glEnd();
            glColor3ub(255,255,255);
    glBegin(GL_LINES);

    glVertex2f(fx1(-200),fy1(0));
    glVertex2f(fx1(400),fy1(0));
    glVertex2f(fx1(0),fy1(-50));
    glVertex2f(fx1(0),fy1(100));
          glEnd();

}


void GLWidget2d::resizeGL(int w, int h){
    /// this resize function allows to work in accustomed coordinates
        X=w;
        Y=h;

        glViewport(0,0,w,h);
        glMatrixMode(GL_PROJECTION);
        glLoadIdentity();
        gluOrtho2D(0,w,0,h);

        glMatrixMode(GL_MODELVIEW);
}
