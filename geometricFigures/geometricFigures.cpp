#include"GeometricFigures.h"

Cone::Cone(const double radius, const double height)
{
	radius_ = radius;
	height_ = height;
}

const double Cone::getVolume()
{
	return (M_PI * pow(radius_, 2) * height_) / 3;
}

const double Cone::getSurfaceArea()
{
	return M_PI * radius_*(radius_ + sqrt(pow(radius_, 2) + pow(height_, 2)));
}

Ball::Ball(const double radius, const double height)
{
	radius_ = radius;
	height_ = height;
}

const double Ball::getVolume()
{
	return (4 * M_PI * pow(radius_, 3)) / 3;
}

const double Ball::getSurfaceArea()
{
	return 4 * M_PI * pow(radius_, 2);
}

Pyramid::Pyramid(const double radius, const double height)
{
	radius_ = radius;
	height_ = height;
}

const double Pyramid::getVolume()
{
	return 2 * M_PI * radius_ * height_ + 2 * M_PI * pow(radius_, 2);
}

const double Pyramid::getSurfaceArea()
{
	return M_PI * pow(radius_, 2) * height_;
}
