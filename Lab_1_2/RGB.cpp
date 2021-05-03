#include "RGB.h"

/*const int * colorWindowRGB::getRGB()	// метод возвращает адрес(??)
{
	StrWindowColor * structureAddress = &WindowColor;	// return &WindowColor не работает(??), поэтому создаем переменную типа StrWindowColor и передаем ей адрес
	return structureAddress;	// но и это не работает(??)
}*/

colorWindowRGB::~colorWindowRGB()
{
}

colorWindowRGB::colorWindowRGB(const uint8_t R, const uint8_t G, const uint8_t B)
{
	WindowColor.R = R;
	WindowColor.G = G;
	WindowColor.B = B;
}

colorWindowRGB::colorWindowRGB(colorWindowRGB&)
{
}

const void colorWindowRGB::setR(const uint8_t R)
{
	WindowColor.R = R;
	return void();
}

const void colorWindowRGB::setG(const uint8_t G)
{
	WindowColor.G = G;
	return void();
}

const void colorWindowRGB::setB(const uint8_t B)
{
	WindowColor.B = B;
	return void();
}

const uint8_t colorWindowRGB::getR()
{
	return WindowColor.R;
}

const uint8_t colorWindowRGB::getG()
{
	return WindowColor.G;
}

const uint8_t colorWindowRGB::getB()
{
	return WindowColor.B;
}
