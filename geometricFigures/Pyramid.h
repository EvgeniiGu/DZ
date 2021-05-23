#pragma once
#include"GeometricFigures.h"
class Pyramid : public GeometricFigure
{
public:
	Pyramid(const double radius = 0.0, const double height = 0.0);
	virtual ~Pyramid();
	virtual const double getVolume() override;
	virtual const double getSurfaceArea() override;
};