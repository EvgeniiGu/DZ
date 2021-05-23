#pragma once
#include<cmath>
class Triangle
{
public:
	Triangle(const double a = 0.0,
			const double b = 0.0,
			const double c = 0.0);
	virtual ~Triangle();
	Triangle(Triangle& other);
	const double getSideA();
	const double getSideB();
	const double getSideC();
	void setSideA(const double a);
	void setSideB(const double b);
	void setSideC(const double c);
	const double getAngleA();
	const double getAngleB();
	const double getAngleC();
	const double getPerimeter();
protected:
	const int calculateAngle(const double a, const double b, const double c);
	double sideA{0.0}, 
			sideB{0.0}, 
			sideC{0.0};
	const bool valueEnteredCorrectly(const double value);
};