#pragma once
#include"GeometricFigures.h"
class Cone : public GeometricFigure
{
public:
	Cone(const double radius = 0.0, const double height = 0.0);		//Конструктор класса Cone	(радиус конуса, высота конуса)
	virtual ~Cone();
	virtual const double getVolume() override;
	virtual const double getSurfaceArea() override;
};