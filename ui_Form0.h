/********************************************************************************
** Form generated from reading UI file 'Form0.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORM0_H
#define UI_FORM0_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "glwidget.h"

QT_BEGIN_NAMESPACE

class Ui_Form0
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_6;
    QSpacerItem *horizontalSpacer;
    QLabel *label_4;
    QSpacerItem *horizontalSpacer_2;
    QVBoxLayout *verticalLayout;
    QPushButton *dynbut;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QSpinBox *spinBox;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QSpinBox *spinBox_2;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_6;
    QDoubleSpinBox *doubleSpinBox_3;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_5;
    QDoubleSpinBox *doubleSpinBox_2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QDoubleSpinBox *doubleSpinBox;
    QCheckBox *checkBox;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QSpacerItem *verticalSpacer;
    QPushButton *pushButton_4;
    QPushButton *pushButton;
    GLWidget *widget;

    void setupUi(QMainWindow *Form0)
    {
        if (Form0->objectName().isEmpty())
            Form0->setObjectName(QStringLiteral("Form0"));
        Form0->setWindowModality(Qt::ApplicationModal);
        Form0->resize(703, 445);
        QIcon icon;
        icon.addFile(QStringLiteral(":/me.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        Form0->setWindowIcon(icon);
        Form0->setStyleSheet(QStringLiteral("background-color: rgb(0, 0, 0);"));
        centralWidget = new QWidget(Form0);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer);

        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setStyleSheet(QLatin1String("font: 26pt \"MS Shell Dlg 2\";\n"
"color: rgb(221, 221, 221);"));

        horizontalLayout_6->addWidget(label_4);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_2);


        gridLayout->addLayout(horizontalLayout_6, 0, 0, 1, 2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        dynbut = new QPushButton(centralWidget);
        dynbut->setObjectName(QStringLiteral("dynbut"));
        dynbut->setStyleSheet(QLatin1String("background-color: rgb(221, 221, 221);\n"
"color: rgb(0, 0, 0);"));

        verticalLayout->addWidget(dynbut);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setStyleSheet(QStringLiteral("color: rgb(221, 221, 221);"));

        horizontalLayout->addWidget(label);

        spinBox = new QSpinBox(centralWidget);
        spinBox->setObjectName(QStringLiteral("spinBox"));
        spinBox->setStyleSheet(QStringLiteral("color: rgb(221, 221, 221);"));
        spinBox->setMinimum(5000);
        spinBox->setMaximum(500000);
        spinBox->setSingleStep(1000);
        spinBox->setValue(100000);
        spinBox->setDisplayIntegerBase(10);

        horizontalLayout->addWidget(spinBox);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setStyleSheet(QStringLiteral("color: rgb(221, 221, 221);"));

        horizontalLayout_2->addWidget(label_2);

        spinBox_2 = new QSpinBox(centralWidget);
        spinBox_2->setObjectName(QStringLiteral("spinBox_2"));
        spinBox_2->setStyleSheet(QStringLiteral("color: rgb(221, 221, 221);"));
        spinBox_2->setMaximum(1000);
        spinBox_2->setSingleStep(5);
        spinBox_2->setValue(300);

        horizontalLayout_2->addWidget(spinBox_2);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_6 = new QLabel(centralWidget);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setStyleSheet(QStringLiteral("color: rgb(221, 221, 221);"));

        horizontalLayout_4->addWidget(label_6);

        doubleSpinBox_3 = new QDoubleSpinBox(centralWidget);
        doubleSpinBox_3->setObjectName(QStringLiteral("doubleSpinBox_3"));
        doubleSpinBox_3->setStyleSheet(QStringLiteral("color: rgb(221, 221, 221);"));
        doubleSpinBox_3->setMinimum(0.01);
        doubleSpinBox_3->setSingleStep(0.5);
        doubleSpinBox_3->setValue(5);

        horizontalLayout_4->addWidget(doubleSpinBox_3);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label_5 = new QLabel(centralWidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setStyleSheet(QStringLiteral("color: rgb(221, 221, 221);"));

        horizontalLayout_5->addWidget(label_5);

        doubleSpinBox_2 = new QDoubleSpinBox(centralWidget);
        doubleSpinBox_2->setObjectName(QStringLiteral("doubleSpinBox_2"));
        doubleSpinBox_2->setStyleSheet(QStringLiteral("color: rgb(221, 221, 221);"));
        doubleSpinBox_2->setSingleStep(0.5);
        doubleSpinBox_2->setValue(15);

        horizontalLayout_5->addWidget(doubleSpinBox_2);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setStyleSheet(QStringLiteral("color: rgb(221, 221, 221);"));

        horizontalLayout_3->addWidget(label_3);

        doubleSpinBox = new QDoubleSpinBox(centralWidget);
        doubleSpinBox->setObjectName(QStringLiteral("doubleSpinBox"));
        doubleSpinBox->setStyleSheet(QStringLiteral("color: rgb(221, 221, 221);"));
        doubleSpinBox->setDecimals(3);
        doubleSpinBox->setMaximum(1);
        doubleSpinBox->setSingleStep(0.001);
        doubleSpinBox->setValue(0.1);

        horizontalLayout_3->addWidget(doubleSpinBox);


        verticalLayout->addLayout(horizontalLayout_3);

        checkBox = new QCheckBox(centralWidget);
        checkBox->setObjectName(QStringLiteral("checkBox"));
        checkBox->setStyleSheet(QStringLiteral("color: rgb(221, 221, 221);"));

        verticalLayout->addWidget(checkBox);

        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setStyleSheet(QLatin1String("background-color: rgb(221, 221, 221);\n"
"color: rgb(0, 0, 0);"));

        verticalLayout->addWidget(pushButton_2);

        pushButton_3 = new QPushButton(centralWidget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setStyleSheet(QStringLiteral("background-color: rgb(221, 221, 221);"));

        verticalLayout->addWidget(pushButton_3);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        pushButton_4 = new QPushButton(centralWidget);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setStyleSheet(QLatin1String("background-color: rgb(221, 221, 221);\n"
"color: rgb(0, 0, 0);"));

        verticalLayout->addWidget(pushButton_4);

        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setStyleSheet(QLatin1String("background-color: rgb(221, 221, 221);\n"
"color: rgb(0, 0, 0);"));

        verticalLayout->addWidget(pushButton);


        gridLayout->addLayout(verticalLayout, 1, 0, 1, 1);

        widget = new GLWidget(centralWidget);
        widget->setObjectName(QStringLiteral("widget"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy);

        gridLayout->addWidget(widget, 1, 1, 1, 1);

        Form0->setCentralWidget(centralWidget);

        retranslateUi(Form0);
        QObject::connect(pushButton, SIGNAL(clicked()), Form0, SLOT(close()));
        QObject::connect(doubleSpinBox, SIGNAL(valueChanged(double)), Form0, SLOT(changeEps(double)));
        QObject::connect(doubleSpinBox_3, SIGNAL(valueChanged(double)), Form0, SLOT(changeM(double)));
        QObject::connect(doubleSpinBox_2, SIGNAL(valueChanged(double)), Form0, SLOT(changeM(double)));
        QObject::connect(spinBox_2, SIGNAL(valueChanged(int)), Form0, SLOT(changeT(int)));
        QObject::connect(spinBox, SIGNAL(valueChanged(int)), Form0, SLOT(changeN(int)));
        QObject::connect(checkBox, SIGNAL(clicked()), Form0, SLOT(changeLines()));
        QObject::connect(dynbut, SIGNAL(clicked()), Form0, SLOT(changeMode()));
        QObject::connect(pushButton_2, SIGNAL(clicked()), Form0, SLOT(save()));
        QObject::connect(pushButton_4, SIGNAL(clicked()), Form0, SLOT(help()));
        QObject::connect(pushButton_3, SIGNAL(clicked()), Form0, SLOT(graph()));

        QMetaObject::connectSlotsByName(Form0);
    } // setupUi

    void retranslateUi(QMainWindow *Form0)
    {
        Form0->setWindowTitle(QApplication::translate("Form0", "\320\234\320\276\320\264\320\265\320\273\321\214 \320\240\320\270\320\272\320\270\321\202\320\260\320\272\320\270", 0));
        label_4->setText(QApplication::translate("Form0", "\320\235\320\224\320\241 \"\320\274\320\276\320\264\320\265\320\273\321\214 \320\240\320\270\320\272\320\270\321\202\320\260\320\272\320\265\"", 0));
        dynbut->setText(QApplication::translate("Form0", "\320\222\320\272\320\273. \321\204\320\270\320\272\321\201\320\260\321\206\320\270\321\216", 0));
        label->setText(QApplication::translate("Form0", "N=", 0));
        spinBox->setSuffix(QString());
        label_2->setText(QApplication::translate("Form0", "T=", 0));
        label_6->setText(QApplication::translate("Form0", "M=", 0));
        label_5->setText(QApplication::translate("Form0", "A=", 0));
        label_3->setText(QApplication::translate("Form0", "eps=", 0));
        checkBox->setText(QApplication::translate("Form0", "\320\241\320\276\320\265\320\264\320\270\320\275\320\270\321\202\321\214 \321\202\320\276\321\207\320\272\320\270", 0));
        pushButton_2->setText(QApplication::translate("Form0", "\320\227\320\260\320\277\320\270\321\201\321\214 \320\262 \321\204\320\260\320\271\320\273", 0));
        pushButton_3->setText(QApplication::translate("Form0", "\320\237\320\276\321\201\320\274\320\276\321\202\321\200\320\265\321\202\321\214 \320\277\321\200\320\276\320\265\320\272\321\206\320\270\320\270", 0));
        pushButton_4->setText(QApplication::translate("Form0", "\320\236 \320\277\321\200\320\276\320\263\321\200\320\260\320\274\320\274\320\265", 0));
        pushButton->setText(QApplication::translate("Form0", "&\320\222\321\213\321\205\320\276\320\264", 0));
    } // retranslateUi

};

namespace Ui {
    class Form0: public Ui_Form0 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORM0_H
