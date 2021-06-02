#pragma once
#include <cstdint>
#include <string>

//переопределить оператор сдвига
class ModelWindow
{
public:
	explicit ModelWindow(const unsigned int coordinatesHorizontal,
								const unsigned int coordinatesVertical,
																			const unsigned int sizeHorizontal,
																			const unsigned int sizeVertical,
		const unsigned int r,
		const unsigned int g,
		const unsigned int b,
		const bool isWindowActive, const bool isFrameExists);
	ModelWindow(ModelWindow& other);
	~ModelWindow();
	void move(const int horizontal, const int vertical);
	void changeSize(const int horizontal, const int vertical);
	void changeColor(const unsigned int r, const unsigned int g, const unsigned int b);
	void changeStateWindow(const bool isWindowActive);
	void changeFrameCondition(const bool isFrameExists);
	const bool isWindowActive();
	const bool isFrameExists();
	const unsigned int getCoordinatesHorizontal();
	const unsigned int getCoordinatesVertical();
	const unsigned int getColorR();
	const unsigned int getColorG();
	const unsigned int getColorB();
	struct WindowSize
	{
		unsigned int horizontal = 0,
			vertical = 0;
	};
	struct WindowCoordinates//UpLeftCorner
	{
		unsigned int horizontal = 0,
			vertical = 0;
	};

private:
	void setCoordinatesHorizontal(const unsigned int horizontal);
	void setCoordinatesVertical(const unsigned int vertical);
	void setWindowSizeHorizontal(const unsigned int horizontal);
	void setWindowSizeVertical(const unsigned int vertical);
	void setColorR(const unsigned int r);
	void setColorG(const unsigned int g);
	void setColorB(const unsigned int b);
	unsigned int R{ 0 },
				G{ 0 },
				B{ 0 };
	WindowSize Size;
	WindowCoordinates Coordinates;
	std::string WindowTitle;
	bool stateWindow = 0;
	bool frameCondition = 0;
	const unsigned int monitorSizeHorizontal = 1920;
	const unsigned int monitorSizeVertical = 1080;
};//255 в константу