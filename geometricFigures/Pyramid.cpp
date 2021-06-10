#include"Pyramid.h"
Pyramid::Pyramid(const double radius = 0.0, const double height = 0.0)
{
	radius_ = radius;
	height_ = height;
}

Pyramid::~Pyramid() {}
const double Pyramid::getVolume() { return 2 * M_PI * radius_ * height_ + 2 * M_PI * pow(radius_, 2); }
const double Pyramid::getSurfaceArea() { return M_PI * pow(radius_, 2) * height_; }