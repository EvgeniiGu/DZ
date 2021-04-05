#include "Header.h"

ModelWindow::ModelWindow(const int coordinatesHorizontal,
						const int coordinatesVertical, const int sizeHorizontal,
														const int sizeVertical, const uint8_t r, 
																				const uint8_t g, 
																				const uint8_t b, const bool stateWindow, const bool stateFrame)
{
	Coordinates.horizontal = coordinatesHorizontal;
	Coordinates.vertical = coordinatesVertical;
	SizeScreen.horizontal = sizeHorizontal;
	SizeScreen.vertical = sizeVertical;
	WindowColor.R = r;
	WindowColor.G = g;
	WindowColor.B = b;
	_state = stateWindow;
	_frameCondition = stateFrame;
}

ModelWindow::ModelWindow(ModelWindow&)
{
}

ModelWindow::~ModelWindow()
{
}

void ModelWindow::Move(int horizontal, int vertical)
{
	Coordinates.horizontal += horizontal;
	Coordinates.vertical += vertical;
}

void ModelWindow::ChangeSize(int horizontal, int vertical)
{
	SizeScreen.horizontal += horizontal;
	SizeScreen.vertical += vertical;
}

void ModelWindow::ChangeColor(uint8_t R, uint8_t G, uint8_t B)
{
	WindowColor.R = R;
	WindowColor.G = G;
	WindowColor.B = B;
}

void ModelWindow::ChangeStateWindow(bool stateWindow)
{
	_state = stateWindow;
}

void ModelWindow::ChangeFrameCondition(bool stateFrame)
{
	_frameCondition = stateFrame;
}

bool ModelWindow::getStatusWindow()
{
	return _state;
}

bool ModelWindow::getStatusFrame()
{
	return _frameCondition;
}