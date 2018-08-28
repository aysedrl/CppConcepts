/********************************************************************************
** Form generated from reading UI file 'sample.ui'
**
** Created by: Qt User Interface Compiler version 5.3.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SAMPLE_H
#define UI_SAMPLE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SampleClass
{
public:
    QWidget *centralWidget;
    QPushButton *addPB;
    QLineEdit *lineEdit;
    QListWidget *listWidget;
    QPushButton *deletePB;
    QPushButton *clearPB;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *SampleClass)
    {
        if (SampleClass->objectName().isEmpty())
            SampleClass->setObjectName(QStringLiteral("SampleClass"));
        SampleClass->resize(600, 400);
        centralWidget = new QWidget(SampleClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        addPB = new QPushButton(centralWidget);
        addPB->setObjectName(QStringLiteral("addPB"));
        addPB->setGeometry(QRect(30, 70, 91, 34));
        lineEdit = new QLineEdit(centralWidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(30, 30, 211, 25));
        listWidget = new QListWidget(centralWidget);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        listWidget->setGeometry(QRect(270, 30, 311, 291));
        QPalette palette;
        QBrush brush(QColor(0, 255, 127, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush);
        QBrush brush1(QColor(255, 255, 0, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Highlight, brush1);
        QBrush brush2(QColor(240, 240, 240, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Highlight, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Highlight, brush1);
        listWidget->setPalette(palette);
        deletePB = new QPushButton(centralWidget);
        deletePB->setObjectName(QStringLiteral("deletePB"));
        deletePB->setGeometry(QRect(140, 70, 112, 34));
        clearPB = new QPushButton(centralWidget);
        clearPB->setObjectName(QStringLiteral("clearPB"));
        clearPB->setGeometry(QRect(30, 130, 91, 34));
        SampleClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(SampleClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 600, 31));
        SampleClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(SampleClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        SampleClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(SampleClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        SampleClass->setStatusBar(statusBar);

        retranslateUi(SampleClass);

        QMetaObject::connectSlotsByName(SampleClass);
    } // setupUi

    void retranslateUi(QMainWindow *SampleClass)
    {
        SampleClass->setWindowTitle(QApplication::translate("SampleClass", "Username List", 0));
        addPB->setText(QApplication::translate("SampleClass", "Add", 0));
        deletePB->setText(QApplication::translate("SampleClass", "Delete", 0));
        clearPB->setText(QApplication::translate("SampleClass", "Clear", 0));
    } // retranslateUi

};

namespace Ui {
    class SampleClass: public Ui_SampleClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SAMPLE_H
