#pragma once
#include <cstdint>

class colorWindowRGB
{
public:
	explicit colorWindowRGB(const uint8_t R = 0,	// конструктор с значениями по умолчанию
							const uint8_t G = 0, 
							const uint8_t B = 0);
	colorWindowRGB(colorWindowRGB&);
	~colorWindowRGB();
	const void setR(const uint8_t R);	// можно изменить каждое значение отдельно
	const void setG(const uint8_t G);
	const void setB(const uint8_t B);
	const uint8_t getR();	// получаем каждое значение отдельно
	const uint8_t getG();
	const uint8_t getB();
	const int * getRGB();	// получаем указатель на поле класса(??)

	struct  StrWindowColor
	{
		uint8_t R = 0,
				G = 0,
				B = 0;
	};
private:
	StrWindowColor WindowColor;
};