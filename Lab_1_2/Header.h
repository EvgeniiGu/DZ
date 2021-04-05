#pragma once
#include <cstdint>
#include <string>

class ModelWindow
{
public:
	ModelWindow(const int coordinatesHorizontal,
				const int coordinatesVertical, const int sizeHorizontal,
												const int sizeVertical, const uint8_t r,
																		const uint8_t g,
																		const uint8_t b, const bool stateWindow, const bool stateFrame);
	ModelWindow(ModelWindow&);
	~ModelWindow();
	void Move(const int horizontal, const int vertical);
	void ChangeSize(const int horizontal, const int vertical);
	void ChangeColor(const uint8_t R, const uint8_t G, const uint8_t B);
	void ChangeStateWindow(const bool stateWindow);
	void ChangeFrameCondition(const bool stateFrame);
	bool getStatusWindow();
	bool getStatusFrame();
	//void moveHorizontal();
	//void moveVertical();
	struct StrSizeScreen
	{
		int horizontal = 0,
			vertical = 0;
	};
	struct StrCoordinates//UpLeftCorner
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

private:
	StrSizeScreen SizeScreen;
	StrCoordinates Coordinates;
	StrWindowColor WindowColor;
	std::string WindowTitle;
	bool _state = 0;
	bool _frameCondition = 0;
};