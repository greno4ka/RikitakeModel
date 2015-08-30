#include <QtOpenGL>
#include <QGLWidget>
#include <GL\glu.h>
#include "rungekutta.h"

extern int N, flag;
extern vector <vector <double> > Points;

extern const double PI;
extern const double Rad;
extern float cx,cy,cz,fi,psy,fi_rad,psy_rad;

double x_angle, y_angle;
double MAX=100,l=1.25;

void display()
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

    glLoadIdentity();
  //  glTranslatef(-cx, -cy, -cz);
    glTranslatef(10.0f,-15.0f,-150.0f);          // Сдвинуть вправо и вглубь экрана
    glRotatef(fi, 0.0f, 1.0f, 0.0f);
    glRotatef(psy, (float) cos(fi * Rad), 0.0f, (float) sin((90-fi) * Rad));
    glTranslatef(-cx, -cy, -cz);


   // glRotated(x_angle,1,0,0);
  //  glRotated(y_angle,0,1,0);

    glColor3ub(255,255,255);
    glBegin(GL_LINES);
    glVertex3f(0,0,0);
    glVertex3f(0,MAX,0);

    glVertex3f(0,0,0);
    glVertex3f(0,0,MAX);

    glVertex3f(0,0,0);
    glVertex3f(MAX,0,0);
    glEnd();

    glBegin(GL_TRIANGLES);

    glVertex3f(0,MAX,0);
    glVertex3f(-l,MAX-2*l,l);
    glVertex3f(l,MAX-2*l,-l);

    glVertex3f(0,MAX,0);
    glVertex3f(-l,MAX-2*l,-l);
    glVertex3f(l,MAX-2*l,l);


    glVertex3f(MAX,0,0);
    glVertex3f(MAX-2*l,l,-l);
    glVertex3f(MAX-2*l,-l,l);

    glVertex3f(MAX,0,0);
    glVertex3f(MAX-2*l,-l,-l);
    glVertex3f(MAX-2*l,l,l);


    glVertex3f(0,0,MAX);
    glVertex3f(l,-l,MAX-2*l);
    glVertex3f(-l,l,MAX-2*l);

    glVertex3f(0,0,MAX);
    glVertex3f(-l,-l,MAX-2*l);
    glVertex3f(l,l,MAX-2*l);

    glEnd();

    glColor3ub(0,0,255);
    glPointSize(1);
    switch(flag) {
    case 0:
        glBegin(GL_POINTS);
        break;
    case 1:
        glBegin(GL_LINE_STRIP);
        break;
    }

    glColor3ub(0,0,255);
    for (int i=0; i<=N; i++)
        glVertex3f(Points[i][0],Points[i][1],Points[i][2]);

    glEnd();
    glFinish();
}
/*
void display0()
{
    glClear(GL_COLOR_BUFFER_BIT);

}
*/
