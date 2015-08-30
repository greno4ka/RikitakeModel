/********************************************************************************
** Form generated from reading UI file 'help.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HELP_H
#define UI_HELP_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Help
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QPushButton *pushButton;
    QWidget *widget;

    void setupUi(QMainWindow *Help)
    {
        if (Help->objectName().isEmpty())
            Help->setObjectName(QStringLiteral("Help"));
        Help->resize(761, 544);
        QIcon icon;
        icon.addFile(QStringLiteral(":/me.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        Help->setWindowIcon(icon);
        Help->setStyleSheet(QStringLiteral("background-color: rgb(0, 0, 0);"));
        centralwidget = new QWidget(Help);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(250, 0, 281, 171));
        label->setStyleSheet(QLatin1String("color: rgb(221, 221, 221);\n"
"font: 10pt \"MS Shell Dlg 2\";"));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(660, 510, 75, 23));
        pushButton->setStyleSheet(QLatin1String("background-color: rgb(221, 221, 221);\n"
"color: rgb(0, 0, 0);"));
        widget = new QWidget(centralwidget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(240, 180, 311, 351));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy);
        widget->setStyleSheet(QStringLiteral("background-image: url(:/me.jpg);"));
        Help->setCentralWidget(centralwidget);

        retranslateUi(Help);
        QObject::connect(pushButton, SIGNAL(clicked()), Help, SLOT(shut()));

        QMetaObject::connectSlotsByName(Help);
    } // setupUi

    void retranslateUi(QMainWindow *Help)
    {
        Help->setWindowTitle(QApplication::translate("Help", "\320\236 \320\277\321\200\320\276\320\263\321\200\320\260\320\274\320\274\320\265", 0));
        label->setText(QApplication::translate("Help", "\320\220\320\262\321\202\320\276\321\200: \320\243\321\201\321\202\320\270\320\275\320\276\320\262 \320\223\321\200\320\270\320\263\320\276\321\200\320\270\320\271 \320\220\320\275\320\264\321\200\320\265\320\265\320\262\320\270\321\207\n"
"\320\223\321\200\321\203\320\277\320\277\320\260: 304\n"
"\320\232\320\260\321\204\320\265\320\264\321\200\320\260: \320\222\321\213\321\207\320\270\321\201\320\273\320\270\321\202\320\265\320\273\321\214\320\275\321\213\321\205 \320\274\320\265\321\202\320\276\320\264\320\276\320\262\n"
"\320\244\320\260\320\272\321\203\320\273\321\214\321\202\320\265\321\202: \320\222\320\234\320\232\n"
"\320\222\320\265\321\201\320\275\320\260 2014\n"
"\320\240\321\203\320\272\320\276\320\262\320\276\320\264\320\270\321\202\320\265\320\273\321\214: \320\245\320\260\320\277\320\260\320\265\320\262 \320\234\320\270\321\205\320\260\320\270\320\273 \320\234\320\270\321\205\320\260\320\271\320\273\320\276\320\262\320\270\321\207", 0));
        pushButton->setText(QApplication::translate("Help", "\320\237\320\276\320\275\321\217\321\202\320\275\320\276", 0));
    } // retranslateUi

};

namespace Ui {
    class Help: public Ui_Help {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HELP_H
