/********************************************************************************
** Form generated from reading UI file 'QtWidgetsApplication1.ui'
**
** Created by: Qt User Interface Compiler version 6.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QTWIDGETSAPPLICATION1_H
#define UI_QTWIDGETSAPPLICATION1_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QtWidgetsApplication1Class
{
public:
    QWidget *centralWidget;
    QLabel *lblSaludo;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *QtWidgetsApplication1Class)
    {
        if (QtWidgetsApplication1Class->objectName().isEmpty())
            QtWidgetsApplication1Class->setObjectName("QtWidgetsApplication1Class");
        QtWidgetsApplication1Class->resize(600, 400);
        centralWidget = new QWidget(QtWidgetsApplication1Class);
        centralWidget->setObjectName("centralWidget");
        lblSaludo = new QLabel(centralWidget);
        lblSaludo->setObjectName("lblSaludo");
        lblSaludo->setGeometry(QRect(20, 10, 301, 16));
        QtWidgetsApplication1Class->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(QtWidgetsApplication1Class);
        menuBar->setObjectName("menuBar");
        menuBar->setGeometry(QRect(0, 0, 600, 21));
        QtWidgetsApplication1Class->setMenuBar(menuBar);
        mainToolBar = new QToolBar(QtWidgetsApplication1Class);
        mainToolBar->setObjectName("mainToolBar");
        QtWidgetsApplication1Class->addToolBar(Qt::ToolBarArea::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(QtWidgetsApplication1Class);
        statusBar->setObjectName("statusBar");
        QtWidgetsApplication1Class->setStatusBar(statusBar);

        retranslateUi(QtWidgetsApplication1Class);

        QMetaObject::connectSlotsByName(QtWidgetsApplication1Class);
    } // setupUi

    void retranslateUi(QMainWindow *QtWidgetsApplication1Class)
    {
        QtWidgetsApplication1Class->setWindowTitle(QCoreApplication::translate("QtWidgetsApplication1Class", "QtWidgetsApplication1", nullptr));
        lblSaludo->setText(QCoreApplication::translate("QtWidgetsApplication1Class", "\302\241Pura vida! Mi primera aplicacion de escritorio en C++", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QtWidgetsApplication1Class: public Ui_QtWidgetsApplication1Class {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QTWIDGETSAPPLICATION1_H
