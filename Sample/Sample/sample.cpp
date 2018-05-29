#include "sample.h"

Sample::Sample(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	connect(ui.addPB, SIGNAL(pressed()), SLOT(addSlot()));
	connect(ui.deletePB, SIGNAL(pressed()), SLOT(deleteSlot()));
}

Sample::~Sample()
{

}
void Sample::addSlot()
{
	ui.listWidget->addItem(ui.lineEdit->text());
}

void Sample::deleteSlot()
{
	int currentrow = ui.listWidget->currentRow();
	QListWidgetItem *curritem = ui.listWidget->item(currentrow);
	ui.listWidget->takeItem(currentrow);


}

