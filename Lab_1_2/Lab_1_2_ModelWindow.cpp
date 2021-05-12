#include "Header.h"

ModelWindow::ModelWindow(const unsigned int coordinatesHorizontal,
						const unsigned int coordinatesVertical, const unsigned int sizeHorizontal,
																const unsigned int sizeVertical, const uint8_t r,
																								const uint8_t g, 
																								const uint8_t b, const bool stateWindow, const bool frameCondition)
{
	NewColor.setR(r);
	setCoordinatesHorizontal(coordinatesHorizontal);
	setCoordinatesVertical(coordinatesVertical);
	setWindowSizeHorizontal(sizeHorizontal);
	setWindowSizeVertical(sizeVertical);
	_stateWindow = stateWindow;
	_frameCondition = frameCondition;
}

ModelWindow::ModelWindow(ModelWindow&)
{
	colorWindowRGB(NewColor);	//вызвали конструктор копирования класса colorWindowRGB
}

ModelWindow::~ModelWindow()
{	//объект NewColor должен удальться сам или это нужно вручную делать?
}

void ModelWindow::Move(int horizontal, int vertical)
{
	int tempVar1 = Coordinates.horizontal + horizontal;
	setCoordinatesHorizontal(tempVar1);
	int tempVar2 = Coordinates.vertical + vertical;
	setCoordinatesVertical(tempVar2);
}

void ModelWindow::ChangeSize(int horizontal, int vertical)
{
	setWindowSizeHorizontal(horizontal);
	setWindowSizeVertical(vertical);
}

void ModelWindow::ChangeColor(uint8_t R, uint8_t G, uint8_t B)
{
	NewColor.setR(R);
	NewColor.setG(G);
	NewColor.setB(B);
}

void ModelWindow::ChangeStateWindow(bool stateWindow)
{
	_stateWindow = stateWindow;
}

void ModelWindow::ChangeFrameCondition(bool stateFrame)
{
	_frameCondition = stateFrame;
}

bool ModelWindow::isWindowActive()
{
	return _stateWindow;
}

bool ModelWindow::isFrameExists()
{
	return _frameCondition;
}

void ModelWindow::setCoordinatesHorizontal(const unsigned int horizontal)
{
	if (horizontal > monitorSizeHorizontal)
	{
		/*int msgboxID = MessageBox(
			NULL,
			(LPCWSTR)L"The entered value is incorrect",
			(LPCWSTR)L"Entered value error",
			MB_ICONERROR 
			);*/
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
		/*int msgboxID = MessageBox(
			NULL,
			(LPCWSTR)L"The entered value is incorrect",
			(LPCWSTR)L"Entered value error",
			MB_ICONERROR
		);*/
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
		/*int msgboxID = MessageBox(
			NULL,
			(LPCWSTR)L"The entered value is incorrect",
			(LPCWSTR)L"Entered value error",
			MB_ICONERROR
		);*/
		throw "setWindowSizeHorizontal: Invalid number entered!";
	}
	else
	{
		WindowSize.horizontal = horizontal;
	}
}

void ModelWindow::setWindowSizeVertical(const unsigned int vertical)
{
	if (vertical + Coordinates.vertical > monitorSizeHorizontal)
	{
		/*int msgboxID = MessageBox(
			NULL,
			(LPCWSTR)L"The entered value is incorrect",
			(LPCWSTR)L"Entered value error",
			MB_ICONERROR
		);*/
		throw "setWindowSizeVertical: Invalid number entered!";
	}
	else
	{
		WindowSize.vertical = vertical;
	}
}
