#pragma once
#include"GeometricFigures.h"
class Ball : public GeometricFigure
{
public:
	Ball(const double radius = 0.0);				//Конструктор класса Ball	(радиус шара)
	virtual ~Ball();
	virtual const double getVolume() override;		//убрать virtual везде
	virtual const double getSurfaceArea() override;
};