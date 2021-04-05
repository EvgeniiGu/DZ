#pragma once

/*
Структуры для класса ModelWindow
*/
struct StrSizeScreen
{
	int x = 0,
		y = 0;
};
struct StrCoordinates//UpLeftCorner
{
	int x = 0,
		y = 0;
};
struct StrSize
{
	int horizontal = 0,
		vertical = 0;
};
struct StrWindowColor
{
	uint8_t R = 0,
			G = 0,
			B = 0;
};

class ModelWindow
{
public:
	ModelWindow(int x,
		int y, int sizeHorizontal,
		int sizeVertical, uint8_t r,
		uint8_t g,
		uint8_t b, bool state, bool frameState);
	ModelWindow(int x,
		int y, int sizeHorizontal,
		int sizeVertical, uint8_t r,
		uint8_t g,
		uint8_t b, bool state);
	ModelWindow(int x,
		int y, int sizeHorizontal,
		int sizeVertical, uint8_t r,
		uint8_t g,
		uint8_t b);
	ModelWindow(int x,
		int y, int sizeHorizontal,
		int sizeVertical);
	ModelWindow(int x,
		int y);
	ModelWindow();
	~ModelWindow();
	void getSizeScreen(int sizeX, int sizeY);
	void Move(int x, int y);
	void ChangeSize(int x, int y);
	void ChangeColor(int R, int G, int B);
	void ChangeState(bool state);
	void ChangeFrameCondition(bool state);
	bool getStatus();
	bool getStatusFrame();
	//void moveHorizontal();
	//void moveVertical();
	StrSizeScreen SizeScreen;
	StrCoordinates Coordinates;
	StrWindowColor WindowColor;
	StrSize Size;
private:
	string WindowTitle;
	bool State = 0;
	bool FrameCondition = 0;
};