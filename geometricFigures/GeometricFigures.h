#pragma once
#define _USE_MATH_DEFINES
#include <cmath>

class GeometricFigure
{
protected:
	void setRadius(const double rad);
	void setHeight(const double hei);
	double radius_{ 0.0 }, height_{ 0.0 };
public:
	virtual ~GeometricFigure();
	virtual const double getVolume() = 0;
	virtual const double getSurfaceArea() = 0;
};