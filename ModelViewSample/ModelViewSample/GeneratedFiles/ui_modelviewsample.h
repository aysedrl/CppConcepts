/********************************************************************************
** Form generated from reading UI file 'modelviewsample.ui'
**
** Created by: Qt User Interface Compiler version 5.3.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MODELVIEWSAMPLE_H
#define UI_MODELVIEWSAMPLE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QListView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ModelViewSampleClass
{
public:
    QWidget *centralWidget;
    QListView *listView;
    QPushButton *addPB;
    QPushButton *insertPB;
    QPushButton *deletePB;
    QComboBox *comboBox;

    void setupUi(QMainWindow *ModelViewSampleClass)
    {
        if (ModelViewSampleClass->objectName().isEmpty())
            ModelViewSampleClass->setObjectName(QStringLiteral("ModelViewSampleClass"));
        ModelViewSampleClass->resize(500, 369);
        ModelViewSampleClass->setMaximumSize(QSize(601, 500));
        centralWidget = new QWidget(ModelViewSampleClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        listView = new QListView(centralWidget);
        listView->setObjectName(QStringLiteral("listView"));
        listView->setGeometry(QRect(30, 30, 401, 192));
        addPB = new QPushButton(centralWidget);
        addPB->setObjectName(QStringLiteral("addPB"));
        addPB->setGeometry(QRect(30, 240, 112, 34));
        insertPB = new QPushButton(centralWidget);
        insertPB->setObjectName(QStringLiteral("insertPB"));
        insertPB->setGeometry(QRect(170, 240, 112, 34));
        deletePB = new QPushButton(centralWidget);
        deletePB->setObjectName(QStringLiteral("deletePB"));
        deletePB->setGeometry(QRect(320, 240, 112, 34));
        comboBox = new QComboBox(centralWidget);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(30, 290, 401, 25));
        ModelViewSampleClass->setCentralWidget(centralWidget);

        retranslateUi(ModelViewSampleClass);

        QMetaObject::connectSlotsByName(ModelViewSampleClass);
    } // setupUi

    void retranslateUi(QMainWindow *ModelViewSampleClass)
    {
        ModelViewSampleClass->setWindowTitle(QApplication::translate("ModelViewSampleClass", "ModelViewSample", 0));
        addPB->setText(QApplication::translate("ModelViewSampleClass", "Add", 0));
        insertPB->setText(QApplication::translate("ModelViewSampleClass", "Insert", 0));
        deletePB->setText(QApplication::translate("ModelViewSampleClass", "Delete", 0));
    } // retranslateUi

};

namespace Ui {
    class ModelViewSampleClass: public Ui_ModelViewSampleClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MODELVIEWSAMPLE_H
