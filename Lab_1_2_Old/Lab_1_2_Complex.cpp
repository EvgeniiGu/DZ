#include "Lab_1_2.cpp"

Complex::Complex(float a, float b)
{
	ComplexNum.re = a;
	ComplexNum.im = b;
}

void Complex::Add(float c, float d)
{
	ComplexNum.re += c;
	ComplexNum.im += d;
}

void Complex::Sub(float c, float d)
{
	ComplexNum.re -= c;
	ComplexNum.im -= d;
}

void Complex::Mul(float c, float d)
{
	ComplexNum.re *= c;
	ComplexNum.im *= d;
}

void Complex::Div(float c, float d)
{
	if (c != 0 and d != 0)
	{
		ComplexNum.re /= c;
		ComplexNum.im /= d;
	}
	else
	{
		cout << "Division error\n";
	}
}

bool Complex::Equ(float c, float d)
{
	if (fabs(ComplexNum.re - c) < eps and fabs(ComplexNum.im - d) < eps) return 1;
	else return 0;
}

void Complex::Conj()
{
	ComplexNum.im = -ComplexNum.im;
}

void Complex::Set(float a, float b)
{
	ComplexNum.re = a;
	ComplexNum.im = b;
}

float Complex::GetRealPart()
{
	return ComplexNum.re;
}

float Complex::GetImaginaryPart()
{
	return ComplexNum.im;
}