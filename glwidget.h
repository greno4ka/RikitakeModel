#ifndef GLWIDGET_H
#define GLWIDGET_H

#include <QGLWidget>
#include <QtOpenGL>
#include <QTimer>


class GLWidget : public QGLWidget
{
    Q_OBJECT
public:
    GLWidget(QWidget *parent = 0);

void initializeGL();
void paintGL();
void resizeGL(int w, int h);
void mouseMoveEvent(QMouseEvent *me);
void mousePressEvent(QMouseEvent *me);
void mouseReleaseEvent(QMouseEvent *me);
void wheelEvent(QWheelEvent *event);

};

#endif // GLWIDGET_H
