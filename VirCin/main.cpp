#include "VirCin.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	VirCin w;
	w.show();
	return a.exec();
}
