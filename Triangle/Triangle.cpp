#include"Triangle.h"

Triangle::Triangle(const double a = 0.0, const double b = 0.0, const double c = 0.0) { setSideA(a), setSideB(b), setSideC(c); }
Triangle::~Triangle() {}
Triangle::Triangle(Triangle& other) {}
const double Triangle::getSideA() { return sideA; }
const double Triangle::getSideB() { return sideB; }
const double Triangle::getSideC() { return sideC; }
void Triangle::setSideA(const double a) { if (valueEnteredCorrectly(a)) sideA = a; }
void Triangle::setSideB(const double b) { if (valueEnteredCorrectly(b)) sideB = b; }
void Triangle::setSideC(const double c) { if (valueEnteredCorrectly(c)) sideC = c; }
const double Triangle::getAngleA() { return calculateAngle(sideA, sideC, sideB); }
const double Triangle::getAngleB() { return calculateAngle(sideA, sideB, sideC); }
const double Triangle::getAngleC() { return calculateAngle(sideB, sideC, sideA); }
const double Triangle::getPerimeter() { return sideA + sideB + sideC; }
const int Triangle::calculateAngle(const double a, const double b, const double c) { return acos((pow(a, 2) + pow(c, 2) - pow(b, 2)) / (2 * a * c)); }
const bool Triangle::valueEnteredCorrectly(const double value)
{
	if (value > 0) return true;
	else return false;
}