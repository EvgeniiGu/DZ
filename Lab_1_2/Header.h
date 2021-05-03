#pragma once
#include <cstdint>
#include <string>
#include <windows.h>
#include "RGB.h"

class ModelWindow
{
public:
	explicit ModelWindow(const unsigned int coordinatesHorizontal,
						const unsigned int coordinatesVertical, const unsigned int sizeHorizontal,
																const unsigned int sizeVertical, const uint8_t r,
																								const uint8_t g,
																								const uint8_t b, const bool isWindowActive, const bool isFrameExists);
	ModelWindow(ModelWindow&);
	~ModelWindow();
	void Move(const int horizontal, const int vertical);
	void ChangeSize(const int horizontal, const int vertical);
	void ChangeColor(const uint8_t R, const uint8_t G, const uint8_t B);
	void ChangeStateWindow(const bool stateWindow);
	void ChangeFrameCondition(const bool stateFrame);
	bool isWindowActive();
	bool isFrameExists();
	struct StrWindowSize
	{
		unsigned int horizontal = 0,
					vertical = 0;
	};
	struct StrCoordinates//UpLeftCorner
	{
		unsigned int horizontal = 0,
					vertical = 0;
	};


private:
	void setCoordinatesHorizontal(const unsigned int horizontal);
	void setCoordinatesVertical(const unsigned int vertical);
	void setWindowSizeHorizontal(const unsigned int horizontal);
	void setWindowSizeVertical(const unsigned int vertical);
	StrWindowSize WindowSize;
	StrCoordinates Coordinates;
	colorWindowRGB NewColor;
	std::string WindowTitle;
	bool _stateWindow = 0;
	bool _frameCondition = 0;
	const unsigned int monitorSizeHorizontal = 1920;
	const unsigned int monitorSizeVertical = 1080;
};