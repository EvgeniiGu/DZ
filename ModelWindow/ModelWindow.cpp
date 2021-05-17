#include "ModelWindow.h"

ModelWindow::ModelWindow(const unsigned int coordinatesHorizontal,
						const unsigned int coordinatesVertical, const unsigned int sizeHorizontal,
																const unsigned int sizeVertical, const unsigned int r,
																								const unsigned int g,
																								const unsigned int b, const bool isWindowActive, const bool isFrameExists)
{
	setColorR(r);
	setColorG(g);
	setColorB(b);
	setCoordinatesHorizontal(coordinatesHorizontal);
	setCoordinatesVertical(coordinatesVertical);
	setWindowSizeHorizontal(sizeHorizontal);
	setWindowSizeVertical(sizeVertical);
	stateWindow = isWindowActive;
	frameCondition = isFrameExists;
}
ModelWindow::ModelWindow(ModelWindow& other) {}
ModelWindow::~ModelWindow() {}
void ModelWindow::move(int horizontal, int vertical)
{
	int tempVar1 = Coordinates.horizontal + horizontal;
	setCoordinatesHorizontal(tempVar1);
	int tempVar2 = Coordinates.vertical + vertical;
	setCoordinatesVertical(tempVar2);
}
void ModelWindow::changeSize(int horizontal, int vertical)
{
	setWindowSizeHorizontal(horizontal);
	setWindowSizeVertical(vertical);
}
void ModelWindow::changeColor(const unsigned int r, const unsigned int g, const unsigned int b)
{
	setColorR(r);
	setColorG(g);
	setColorB(b);
}
void ModelWindow::changeStateWindow(bool isWindowActive) { stateWindow = isWindowActive; }
void ModelWindow::changeFrameCondition(bool isFrameExists) { frameCondition = isFrameExists; }
const bool ModelWindow::isWindowActive() { return stateWindow; }
const bool ModelWindow::isFrameExists() { return frameCondition; }
const unsigned int ModelWindow::getCoordinatesHorizontal() { return Coordinates.horizontal; }
const unsigned int ModelWindow::getCoordinatesVertical() { return Coordinates.vertical; }
const unsigned int ModelWindow::getColorR() { return Color.R; }
const unsigned int ModelWindow::getColorG() { return Color.G; }
const unsigned int ModelWindow::getColorB() { return Color.B; }
void ModelWindow::setCoordinatesHorizontal(const unsigned int horizontal)
{
	if (horizontal > monitorSizeHorizontal)
	{
		throw "setCoordinatesHorizontal: Invalid number entered!";
	}
	else
	{
		Coordinates.horizontal = horizontal;
	}
}
void ModelWindow::setCoordinatesVertical(const unsigned int vertical)
{
	if (vertical > monitorSizeVertical)
	{
		throw "setCoordinatesVertical: Invalid number entered!";
	}
	else
	{
		Coordinates.vertical = vertical;
	}
}
void ModelWindow::setWindowSizeHorizontal(const unsigned int horizontal)
{
	if (horizontal + Coordinates.horizontal > monitorSizeHorizontal)
	{
		throw "setWindowSizeHorizontal: Invalid number entered!";
	}
	else
	{
		Size.horizontal = horizontal;
	}
}
void ModelWindow::setWindowSizeVertical(const unsigned int vertical)
{
	if (vertical + Coordinates.vertical > monitorSizeHorizontal)
	{
		throw "setWindowSizeVertical: Invalid number entered!";
	}
	else
	{
		Size.vertical = vertical;
	}
}
void ModelWindow::setColorR(const unsigned int r)
{
	if (r > 255)
	{
		throw "setColorR: Invalid number entered!";
	}
	else
	{
		Color.R = r;
	}
}
void ModelWindow::setColorG(const unsigned int g)
{
	if (g > 255)
	{
		throw "setColorG: Invalid number entered!";
	}
	else
	{
		Color.G = g;
	}
}
void ModelWindow::setColorB(const unsigned int b)
{
	if (b > 255)
	{
		throw "setColorB: Invalid number entered!";
	}
	else
	{
		Color.B = b;
	}
}