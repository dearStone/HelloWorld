/********************************************************************************
** Form generated from reading UI file 'HelloWorld.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HELLOWORLD_H
#define UI_HELLOWORLD_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_HelloWorldClass
{
public:
    QWidget *centralWidget;
    QLabel *label;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *HelloWorldClass)
    {
        if (HelloWorldClass->objectName().isEmpty())
            HelloWorldClass->setObjectName(QStringLiteral("HelloWorldClass"));
        HelloWorldClass->resize(600, 400);
        centralWidget = new QWidget(HelloWorldClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(110, 80, 91, 41));
        HelloWorldClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(HelloWorldClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 600, 23));
        HelloWorldClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(HelloWorldClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        HelloWorldClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(HelloWorldClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        HelloWorldClass->setStatusBar(statusBar);

        retranslateUi(HelloWorldClass);

        QMetaObject::connectSlotsByName(HelloWorldClass);
    } // setupUi

    void retranslateUi(QMainWindow *HelloWorldClass)
    {
        HelloWorldClass->setWindowTitle(QApplication::translate("HelloWorldClass", "HelloWorld", Q_NULLPTR));
        label->setText(QApplication::translate("HelloWorldClass", "Hi,stone!", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class HelloWorldClass: public Ui_HelloWorldClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HELLOWORLD_H
