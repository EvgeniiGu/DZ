#include <iostream>
#include <stdlib.h>
#include<typeinfo>

#include"Header.h"

using namespace std;

string enterCoordinates()
{
	string coordinatesHorizontal, coordinatesVertical;
	cout << "Sequentially enter the horizontal and vertical coordinates of the window:\n";
	cin >> coordinatesHorizontal;
	cin >> coordinatesVertical;
	return coordinatesHorizontal + ":" + coordinatesVertical;
}
string enterDimensions()
{
	string sizeHorizontal, sizeVertical;
	cout << "Sequentially enter the horizontal and vertical dimensions of the window:\n";
	cin >> sizeHorizontal;
	cin >> sizeVertical;
	return sizeHorizontal + ":" + sizeVertical;
}
string enterBrightness() 
{
	string r, g, b;
	cout << "Sequentially enter the brightness of each color of the window in RGB:\n";
	cin >> r;
	cin >> g;
	cin >> b;
	return r + ":" + g + ":" + b;
}
string activeWindow()
{
	string isWindowActive;
	cout << "Enter 1 if you want an active window\n";
	cin >> isWindowActive;
	return isWindowActive;
}
string frame()
{
	string isFrameExists;
	cout << "Enter 1 if you want frame\n";
	cin >> isFrameExists;
	return isFrameExists;
}
int main()
{
	cout << "Let's start working with the class ModelWindow!\n";
	string delimiter = ":";
	string enteredCoordinates = enterCoordinates();
	string enteredDimensions = enterDimensions();
	string enteredBrightness = enterBrightness();
	string enteredStateWindow = activeWindow();
	string enteredStateFrame = frame();
	//const char* n = typeid(stoi(enteredDimensions.substr(enteredDimensions.find(delimiter), enteredDimensions.rfind(delimiter)))).name();
	//cout<< stoi(enteredDimensions.substr(enteredDimensions.find(delimiter)+1, enteredDimensions.rfind(delimiter)));
	ModelWindow NewWindow(stoi(enteredCoordinates.substr(0, enteredCoordinates.find(delimiter))),
						stoi(enteredCoordinates.substr(enteredCoordinates.find(delimiter)+1, enteredCoordinates.length())),
						stoi(enteredDimensions.substr(0, enteredDimensions.find(delimiter))), 
						stoi(enteredDimensions.substr(enteredDimensions.find(delimiter)+1, enteredDimensions.length())),
						stoi(enteredBrightness.substr(0, enteredBrightness.find(delimiter))), 
						stoi(enteredBrightness.substr(enteredBrightness.find(delimiter)+1, enteredBrightness.rfind(delimiter))),
						stoi(enteredBrightness.substr(enteredBrightness.rfind(delimiter)+1, enteredBrightness.length())),
						stoi(enteredStateWindow), stoi(enteredStateFrame));
	cout << "The constructor has been created!\n";
	cout << "Menu:" << endl << "1: get" << endl << "2: set" << endl;
	int menu_;
	cin >> menu_;
	switch (menu_)
	{
	case 1:
		cout << "work in progress...";
		break;
	case 2:
		cout << "work in progress...";
		break;
	}
}
