#include "QtDLLTest.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	QtDLLTest w;
	w.show();
	return a.exec();
}
