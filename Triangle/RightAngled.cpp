#include"RightAngled.h"

RightAngled::RightAngled(const double a = 0.0, const double b = 0.0, const double c = 0.0)
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