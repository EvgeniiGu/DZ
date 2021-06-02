#pragma once
#define _USE_MATH_DEFINES
#include <cmath>
/*
 *GeometricFigure->|->Ball
 *				   |->Cone
 *				   |->Pyramid
 */
class GeometricFigure
{
protected:
	void setRadius(const double rad);			//Изменение полей с проверкой введенного значения: радиус	(новое значение радиуса)
	void setHeight(const double hei);			//Изменение полей с проверкой введенного значения: высота	(новое значение высоты)
	double radius_{ 0.0 }, height_{ 0.0 };		//Поля радиус и высота
public:
	virtual ~GeometricFigure();					//
	virtual const double getVolume() = 0;		//Получение значения объема
	virtual const double getSurfaceArea() = 0;	//Получение значения площади поверхности
};