#ifndef HELP_H
#define HELP_H

#include <QMainWindow>

extern QMainWindow *last;

namespace Ui {
class Help;
}

class Help : public QMainWindow
{
    Q_OBJECT

public:
    explicit Help(QWidget *parent = 0);
    ~Help();

public slots:
    void shut()
    {
        this->hide();
        last->show();
        last->setGeometry(100,100,800,600); // Смещение и положение окна
    }

private:
    Ui::Help *ui;
};

#endif // HELP_H
