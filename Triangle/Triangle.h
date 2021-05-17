#pragma once
#include<cmath>
class Triangle
{
public:
	Triangle(const double a,
			const double b,
			const double c);
	~Triangle();
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
	/*struct SidesOfTriangle
	{
		unsigned int a,
					b,
					c;
	};*/
protected:
	double sideA,
			sideB,
			sideC;
	const bool valueEnteredCorrectly(const double value);
	/*SidesOfTriangle Side;*/
};

class RightAngled : public Triangle
{
public:
	RightAngled(double a,
				double b,
				double c);
	~RightAngled();
	const double getSquare();
private:
	double square;
};
