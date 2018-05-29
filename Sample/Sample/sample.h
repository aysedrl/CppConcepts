#ifndef SAMPLE_H
#define SAMPLE_H

#include <QtWidgets/QMainWindow>
#include "ui_sample.h"

class Sample : public QMainWindow
{
	Q_OBJECT

public:
	Sample(QWidget *parent = 0);
	~Sample();
public slots:
	void addSlot();
	void deleteSlot();

private:
	Ui::SampleClass ui;
};

#endif // SAMPLE_H
