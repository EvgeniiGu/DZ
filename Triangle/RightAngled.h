#pragma once
#include"Triangle.h"
class RightAngled : public Triangle
{
public:
	RightAngled(const double a = 0.0,
		const double b = 0.0,
		const double c = 0.0);
	virtual ~RightAngled();
	const double getSquare();
private:
	double square{ 0.0 };
};