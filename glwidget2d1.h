#ifndef GLWIDGET2D1_H
#define GLWIDGET2D1_H

#include <QGLWidget>
#include <QtOpenGL>
#include <QTimer>


class GLWidget2d1 : public QGLWidget
{
    Q_OBJECT
public:
    GLWidget2d1(QWidget *parent = 0);

void initializeGL();
void paintGL();
void resizeGL(int w, int h);

};

#endif // GLWIDGET2D1_H
