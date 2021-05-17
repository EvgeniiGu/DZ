#include"Triangle.h"

Triangle::Triangle(const double a = 0.0, const double b = 0.0, const double c = 0.0) : sideA(a), sideB(b), sideC(c){}
Triangle::~Triangle() {}
Triangle::Triangle(Triangle& other) {}
const double Triangle::getSideA() { return sideA; }
const double Triangle::getSideB() { return sideB; }
const double Triangle::getSideC() { return sideC; }
void Triangle::setSideA(const double a) { if (valueEnteredCorrectly(a)) sideA = a; }
void Triangle::setSideB(const double b) { if (valueEnteredCorrectly(b)) sideB = b; }
void Triangle::setSideC(const double c) { if (valueEnteredCorrectly(c)) sideC = c; }
const double Triangle::getAngleA() { return acos((pow(sideA, 2) + pow(sideC, 2) - pow(sideB, 2)) / (2 * sideA * sideC)); }
const double Triangle::getAngleB() { return acos((pow(sideA, 2) + pow(sideB, 2) - pow(sideC, 2)) / (2 * sideA * sideB)); }
const double Triangle::getAngleC() { return acos((pow(sideB, 2) + pow(sideC, 2) - pow(sideA, 2)) / (2 * sideB * sideC)); }
const double Triangle::getPerimeter() { return sideA + sideB + sideC; }
const bool Triangle::valueEnteredCorrectly(const double value)
{
	if (value > 0) return true;
	else return false;
}

RightAngled::RightAngled(const double a, const double b, const double c)
{
	if (valueEnteredCorrectly(a) && valueEnteredCorrectly(b) && valueEnteredCorrectly(c)) {
		if (pow(a, 2) + pow(b, 2) == pow(c, 2)) {
			sideA = a;
			sideB = b;
			sideC = c;
		}
		else
		{
			throw "this triangle is not right-angled";
		}
	}
	else
	{
		throw "The entered values are not correct.";
	}
}
RightAngled::~RightAngled() {}
const double RightAngled::getSquare()
{
	square = 0.5 * sideA * sideB;
	return square;
}