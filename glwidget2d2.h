#ifndef GLWIDGET2D2_H
#define GLWIDGET2D2_H

#include <QGLWidget>
#include <QtOpenGL>
#include <QTimer>


class GLWidget2d2 : public QGLWidget
{
    Q_OBJECT
public:
    GLWidget2d2(QWidget *parent = 0);

void initializeGL();
void paintGL();
void resizeGL(int w, int h);

};

#endif // GLWIDGET2D2_H
