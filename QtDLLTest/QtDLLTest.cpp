#include "QtDLLTest.h"
#include "DLL2.h"
#include "read.h"
#include <QString>
#include <QMessageBox>
QtDLLTest::QtDLLTest(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
	int x = Test1();
	QString str = QString::number(x);
	QMessageBox::information(this, "information", str);
	
}
