#ifndef MODELVIEWSAMPLE_H
#define MODELVIEWSAMPLE_H

#include <QtWidgets/QMainWindow>
#include <qstringlistmodel.h>
#include "ui_modelviewsample.h"

class ModelViewSample : public QMainWindow
{
	Q_OBJECT

public:
	ModelViewSample(QWidget *parent = 0);
	~ModelViewSample();

private:
	Ui::ModelViewSampleClass ui;
	QStringListModel *model;

private slots:
	void on_addPB_clicked();
	void on_insertPB_clicked();
	void on_deletePB_clicked();
};

#endif // MODELVIEWSAMPLE_H
