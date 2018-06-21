/********************************************************************************
** Form generated from reading UI file 'VirCin.ui'
**
** Created by: Qt User Interface Compiler version 5.11.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VIRCIN_H
#define UI_VIRCIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_VirCinClass
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *VirCinClass)
    {
        if (VirCinClass->objectName().isEmpty())
            VirCinClass->setObjectName(QStringLiteral("VirCinClass"));
        VirCinClass->resize(600, 400);
        menuBar = new QMenuBar(VirCinClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        VirCinClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(VirCinClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        VirCinClass->addToolBar(mainToolBar);
        centralWidget = new QWidget(VirCinClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        VirCinClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(VirCinClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        VirCinClass->setStatusBar(statusBar);

        retranslateUi(VirCinClass);

        QMetaObject::connectSlotsByName(VirCinClass);
    } // setupUi

    void retranslateUi(QMainWindow *VirCinClass)
    {
        VirCinClass->setWindowTitle(QApplication::translate("VirCinClass", "VirCin", nullptr));
    } // retranslateUi

};

namespace Ui {
    class VirCinClass: public Ui_VirCinClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIRCIN_H
