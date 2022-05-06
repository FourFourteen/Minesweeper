#pragma once
#include "wx/wx.h"

class MainWindow;

class App : public wxApp
{
private:
	MainWindow* mainWindow;
public:
	virtual bool OnInit();
	App();
	~App();
};


