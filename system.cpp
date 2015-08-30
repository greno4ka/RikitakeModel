#include "system.h"
#include <QApplication>

system::system(QWidget *parent) :
    QWidget(parent)

{
    connect(&timer, SIGNAL(timeout()), this, SLOT(updateALL()));
    timer.start(1);
}

void updateALL()
{
    keyPressEvent(QKeyEvent *ke);
    mouseMoveEvent(QMouseEvent *me);
    mousePressEvent(QMouseEvent *me);
}

void system::keyPressEvent(QKeyEvent *ke)
{
    switch (ke->key())
    {
          case Qt::Key_Space:
                break;
          case Qt::Key_Enter:
                printf("111");
                break;
    }
}

void system::mouseMoveEvent(QMouseEvent *me)
{
    // Получаем координаты курсора
  //  cax=me->x();
   // cay=me->y();
}

void system::mousePressEvent(QMouseEvent *me)
{
    if(me->button()==Qt::LeftButton){
       // if(me->x()>
    }
}
