#pragma once
#define _USE_MATH_DEFINES
#include <math.h>
class GeometricFigure
{
protected:
	double radius_, height_;
public:
	virtual const double getVolume() = 0;
	virtual const double getSurfaceArea() = 0;
};

class Cone : public GeometricFigure
{
public:
	Cone(const double radius, const double height);
	virtual const double getVolume() override;
	virtual const double getSurfaceArea() override;
};

class Ball : public GeometricFigure
{
public:
	Ball(const double radius, const double height);
	virtual const double getVolume() override;
	virtual const double getSurfaceArea() override;
};

class Pyramid : public GeometricFigure
{
public:
	Pyramid(const double radius, const double height);
	virtual const double getVolume() override;
	virtual const double getSurfaceArea() override;
};