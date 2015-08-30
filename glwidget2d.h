#ifndef GLWIDGET2D_H
#define GLWIDGET2D_H

#include <QGLWidget>
#include <QtOpenGL>
#include <QTimer>


class GLWidget2d : public QGLWidget
{
    Q_OBJECT
public:
    GLWidget2d(QWidget *parent = 0);

void initializeGL();
void paintGL();
void resizeGL(int w, int h);

};

#endif // GLWIDGET2D_H
