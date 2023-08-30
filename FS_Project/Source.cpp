#include <iostream>
#include <string.h>
#include <stdlib.h>
#include <conio.h>
#include <fstream>

#include "Mainform.h";
#include "Addform.h";
#include "Viewform.h";
#include "Modform.h";
#include "Deleteform.h";


using namespace System;
using namespace System::Windows::Forms;
using namespace std;

void main()
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	while (true)
	{
		FSProject::Mainform mainform;
		FSProject::Addform addform;
		FSProject::Viewform viewform;
		FSProject::Modform modform;
		FSProject::Deleteform delform;


		mainform.ShowDialog();

		if (mainform.switchtoadd) {
			addform.ShowDialog();
		}
		else if (mainform.switchtoview) {
			viewform.ShowDialog();
		}
		else if (mainform.switchtomod) {
			modform.ShowDialog();
		}
		else if (mainform.switchtodel) {
			delform.ShowDialog();
		}
		else if (addform.switchtomenu) {
			mainform.switchtoadd = false;
			continue;
		}
		else if (viewform.switchtomenu) {
			mainform.switchtoview = false;
			continue;
		}
		else if (modform.switchtomenu) {
			mainform.switchtomod = false;
			continue;
		}
		else if (delform.switchtomenu) {
			mainform.switchtodel = false;
			continue;
		}
		else if (mainform.closepgm) {
			exit(0);
		}
	}
}

