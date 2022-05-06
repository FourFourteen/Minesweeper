#include "App.h"
#include "MainWindow.h"

wxIMPLEMENT_APP(App);

bool App::OnInit() {
	mainWindow = new MainWindow();
	mainWindow->Show();
	return true;
}

App::App() {

}

App::~App() {

}