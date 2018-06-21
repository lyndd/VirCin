#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_VirCin.h"

class VirCin : public QMainWindow
{
	Q_OBJECT

public:
	VirCin(QWidget *parent = Q_NULLPTR);

private:
	Ui::VirCinClass ui;
};
