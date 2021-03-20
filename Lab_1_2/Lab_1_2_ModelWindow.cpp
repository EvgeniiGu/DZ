#include "Lab_1_2.cpp"

ModelWindow::ModelWindow(int x, int y, int sizeHorizontal, int sizeVertical, uint8_t r, uint8_t g, uint8_t b, bool state, bool frameState)
{
	Coordinates.x = x;
	Coordinates.y = y;
	Size.horizontal = sizeHorizontal;
	Size.vertical = sizeVertical;
	WindowColor.R = r;
	WindowColor.G = g;
	WindowColor.B = b;
	State = state;
	FrameCondition = frameState;
}

ModelWindow::ModelWindow(int x, int y, int sizeHorizontal, int sizeVertical, uint8_t r, uint8_t g, uint8_t b, bool state)
{
	Coordinates.x = x;
	Coordinates.y = y;
	Size.horizontal = sizeHorizontal;
	Size.vertical = sizeVertical;
	WindowColor.R = r;
	WindowColor.G = g;
	WindowColor.B = b;
	State = state;
}

ModelWindow::ModelWindow(int x, int y, int sizeHorizontal, int sizeVertical, uint8_t r, uint8_t g, uint8_t b)
{
	Coordinates.x = x;
	Coordinates.y = y;
	Size.horizontal = sizeHorizontal;
	Size.vertical = sizeVertical;
	WindowColor.R = r;
	WindowColor.G = g;
	WindowColor.B = b;
}

ModelWindow::ModelWindow(int x, int y, int sizeHorizontal, int sizeVertical)
{
	Coordinates.x = x;
	Coordinates.y = y;
	Size.horizontal = sizeHorizontal;
	Size.vertical = sizeVertical;
}

ModelWindow::ModelWindow(int x, int y)
{
	Coordinates.x = x;
	Coordinates.y = y;
}

ModelWindow::ModelWindow()
{
}

ModelWindow::~ModelWindow()
{
}

void ModelWindow::getSizeScreen(int sizeX, int sizeY)
{
	SizeScreen.x = sizeX;
	SizeScreen.y = sizeY;
}

void ModelWindow::Move(int x, int y)
{
	Coordinates.x += x;
	Coordinates.y += y;
}

void ModelWindow::ChangeSize(int x, int y)
{
	Size.horizontal += x;
	Size.vertical += y;
}

void ModelWindow::ChangeColor(int R, int G, int B)
{
	WindowColor.R = R;
	WindowColor.G = G;
	WindowColor.B = B;
}

void ModelWindow::ChangeState(bool state)
{
	State = state;
}

void ModelWindow::ChangeFrameCondition(bool state)
{
	FrameCondition = state;
}

bool ModelWindow::getStatus()
{
	return State;
}

bool ModelWindow::getStatusFrame()
{
	return FrameCondition;
}