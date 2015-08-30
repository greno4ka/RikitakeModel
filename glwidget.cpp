#include "glwidget.h"
#include "display.h"
//#include "recalc.h"
#include "mg.h"
#include <GL/glu.h>
#include <iostream>
#include <QWheelEvent>
#include <QPrinter>
#include <QPainter>

const double PI = 3.14159265358979323846;
const double Rad = PI / 180.0f; // для перевода градусов в радианы
float
     // cx = 10.0f,
     // cy = -15.0f,
     // cz = 150.0f,
      cx=0,cy=0,cz=0,
        fi = 0.0f,
      psy = 20.0f,
      fi_rad = 0.0f,
      psy_rad = 0.0f;

float v = 0.3f;

GLWidget::GLWidget(QWidget *parent) :   QGLWidget(parent)
{
    this->setMouseTracking(true);
    QTimer *timer = new QTimer(this);
    connect(timer, SIGNAL(timeout()), this, SLOT(updateGL()));
    timer->start(1);
}

void GLWidget::initializeGL(){
    qglClearColor(Qt::black);
    setFormat(QGLFormat(QGL::DoubleBuffer)); // Двойная буферизация
    glDepthFunc(GL_LEQUAL); // Буфер глубины
}

void GLWidget::paintGL(){
     display();
     InitBillboards();
     AddButts();
}

void GLWidget::resizeGL(int w, int h){
    glViewport(0, 0, (GLsizei)w, (GLsizei)h);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluPerspective(45.0, (GLfloat)w/h, 0.01, 100000);
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
}

float mouse_x, mouse_y;
int mouse_button=0;

void GLWidget::mouseMoveEvent(QMouseEvent *me)
{
    int dx = me->x() - mouse_x;
    int dy = me->y() - mouse_y;

    if(mouse_button == 1) {
        fi+=dx/3;
        psy+=dy/3;
/*
        // Setup printer
        QPrinter printer(QPrinter::HighResolution);
        printer.setOutputFormat(QPrinter::PdfFormat);
        printer.setOutputFileName("lol.pdf");
        printer.setFullPage(true);
        printer.setPageSize(QPrinter::Custom);
        printer.setPaperSize(QSizeF(500,500),QPrinter::Millimeter);
        printer.setPageMargins(0,0,0,0,QPrinter::Millimeter);

        // Get the painting context from the printer
        QPainter painter(&printer); // Destructing painter writes the pdf file

        // Set the scale, so we can draw in millimeter
        double scale = printer.width()/500;
        painter.setTransform(QTransform(scale,0,0, 0,scale,0, 0,0,1.0));

        // Draw the image
        QRectF src(0,0,image.width(),image.height());
        QRectF dst(0,0,500,500);
        painter.drawImage(dst,image,src);
/*
        // Draw the markings
        QPen pen;
        pen.setWidthF(m_lineWidth);
        pen.setColor(Qt::red);
        QVector<qreal> dashes;
        dashes << m_solidDashLength/m_lineWidth << m_blankDashLength/m_lineWidth;
        pen.setDashPattern(dashes);
        painter.setPen(pen);
        painter.drawRect(QRectF(m_pdfMargin-m_lineWidth/2,m_pdfMargin-m_lineWidth/2,productionWidth+m_lineWidth,productionHeight+m_lineWidth));
*/
        /*
        QPrinter printer;
            printer.setOrientation(QPrinter::Landscape);
            QPainter painter(&printer);
            QRect rect = painter.viewport();

            GLWidget.paintGL();
            QImage image = GLWidget->grabFrameBuffer();

            QSize size = image.size();
            size.scale(rect.size(), Qt::KeepAspectRatio);
            painter.setViewport(rect.x(), rect.y(), size.width()-5, size.height()-5);
            painter.setWindow(image.rect());
            painter.drawImage(2, 2, image);

        /*
                y_angle += dx/3;
                if(y_angle < 0)
                    y_angle += 360;
                if(y_angle >= 360)
                    y_angle -= 360;
                x_angle += dy/3;
                if(x_angle < 0)
                    x_angle += 360;
                if(x_angle >= 360)
                    x_angle -= 360;
          */      //display();
            }
    if(mouse_button == 2) {
/*
        QPrinter printer(QPrinter::HighResolution);
        printer.setOutputFormat(QPrinter::PdfFormat);
        printer.setOutputFileName("lol.pdf");
        //qreal xmargin = contentRect.width()*0.01;
        //qreal ymargin = contentRect.height()*0.01;
        printer.setPaperSize(10*500*1.02,QPrinter::DevicePixel);
        //printer.setPageMargins(xmargin,ymargin,xmargin,ymargin,QPrinter::DevicePixel);
        QPainter painter;
        painter.begin(&printer);
        render(&painter,QRectF(QPointF(0,0),10*500),contentRect);
        painter.end();
*/

        //        cx += dx * sin(fi_rad ) * cos(psy_rad);
          //      cy -= v * sin(psy_rad);
            //    cz -= v * cos(fi_rad ) * cos(psy_rad);

            }

        mouse_x = me->x();
        mouse_y = me->y();
    //std::cout << cax << "  " << cay << std::endl;
    updateGL();
}

void GLWidget::mousePressEvent(QMouseEvent *me)
{
    if(me->button()==Qt::LeftButton)
       mouse_button=1;
    if(me->button()==Qt::RightButton)
       mouse_button=2;

    updateGL();
}

void GLWidget::mouseReleaseEvent(QMouseEvent *me)
{
    if(me->button()==Qt::LeftButton)
       mouse_button=0;
    if(me->button()==Qt::RightButton)
       mouse_button=0;

    updateGL();
}


void GLWidget::wheelEvent(QWheelEvent *event)
{
     int numDegrees = event->delta() / 8;
     int numSteps = numDegrees / 15;

             fi_rad = fi * Rad;
             psy_rad = psy * Rad;
             cx += numSteps * v * sin(fi_rad) * cos(psy_rad);
             cy -= numSteps * v * sin(psy_rad);
             cz -= numSteps * v * cos(fi_rad) * cos(psy_rad);
     event->accept();
     updateGL();
}
