#pragma once

#include <QtWidgets/QWidget>
#include "ui_QtDLLTest.h"

class QtDLLTest : public QWidget
{
	Q_OBJECT

public:
	QtDLLTest(QWidget *parent = Q_NULLPTR);

private:
	Ui::QtDLLTestClass ui;
};
