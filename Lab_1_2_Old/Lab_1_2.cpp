#include <iostream>
using namespace std;
/*
Структура для класса Complex
*/
struct StrComplex
{
	float re = 0,
		  im = 0;
};
/*
Структура для класса Complex
*/
class Complex
{
public:
	Complex(float a, float b);
	void Add(float c, float d); //(a, b) + (c, d) = (a + b, c + d);
	void Sub(float c, float d); //(a, b) - (c, d) = (a - b, c - d);
	void Mul(float c, float d);  //(a, b)* (c, d) = (ac + bd, ad + bc);
	void Div(float c, float d);  //(a, b) / (c, d) = (ac + bd, bc - ad) / (c * c + d * d);
	bool Equ(float c, float d);  //(a, b) = (c, d), если(a = c) и(b = d);
	void Conj(); //(a, b) = (a, -b).
	void Set(float a, float b);
	float GetRealPart();
	float GetImaginaryPart();
	StrComplex ComplexNum;
private:
	const float eps = 0.00001;
};

/*
Структура для класса Vector3D
*/
struct StrСoordinatesVector
{
	int x,
		y,
		z;
};
/*
Структура для класса Vector3D
*/
class Vector3D
{
public:
	Vector3D (int x, int y, int z);
	void Add (int x, int y, int z);
	void Sub (int x, int y, int z);
	int ScalarMul (int x, int y, int z);
	void MulNum (int t);
	bool VectorComp (int x, int y, int z);
	float CalcLength ();
	bool LengthComp (int x, int y, int z);
	StrСoordinatesVector Coordinates;
private:
	float LengthOfVector();
};
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
/*
Структуры для класса ModelWindow
*/
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






int main()
{
	cout << "work in progress...\n";
}