#include <iostream>
using namespace std;
class Complex
{
public:
	Complex(float a, float b);
	void Add(float c, float d); //(a, b) + (c, d) = (a + b, c + d);
	void Sub(float c, float d); //(a, b) - (c, d) = (a - b, c - d);
	void Mul(float c, float d);  //(a, b)* (c, d) = (ac + bd, ad + bc);
	void Div(float c, float d);  //(a, b) / (c, d) = (ac + bd, bc - ad) / (c * c + d * d);
	bool Equ(float c, float d);  //(a, b) = (c, d), если(a = c) и(b = d);
	void Conj(); //(a, b) = (a, -b).
	void Set(float a, float b);
	float GetRealPart();
	float GetImaginaryPart();
private:
	const float eps = 0.00001;
	float x1 = 0;
	float y1 = 0;
};

Complex::Complex(float a, float b)
{
	x1 = a;
	y1 = b;
}

void Complex::Add(float c, float d)
{
	x1 += c;
	y1 += d;
}

void Complex::Sub(float c, float d)
{
	x1 -= c;
	y1 -= d;
}

void Complex::Mul(float c, float d)
{
	x1 *= c;
	y1 *= d;
}

void Complex::Div(float c, float d)
{
	if (c != 0 and d != 0 )
	{
	x1 /= c;
	y1 /= d;
	}
	else
	{
		cout << "Division error\n";
	}
}

bool Complex::Equ(float c, float d)
{
	if (fabs(x1 - c) < eps and fabs(y1 - d) < eps) return 1;
	else return 0;
}

void Complex::Conj()
{
	y1 = -y1;
}

void Complex::Set(float a, float b)
{
	x1 = a;
	y1 = b;
}

float Complex::GetRealPart()
{
	return x1;
}

float Complex::GetImaginaryPart()
{
	return y1;
}

class Vector3D
{
public:
	Vector3D (int x, int y, int z);
	void Add (int x, int y, int z);
	void Sub (int x, int y, int z);
	int ScalarMul (int x, int y, int z);
	void MulNum (int t);
	bool VectorComp (int x, int y, int z);
	float CalcLength ();
	bool LengthComp (int x, int y, int z);
private:
	int x1,
	    y1,
	    z1;
	float LengthOfVector();
};

Vector3D::Vector3D(int x, int y, int z)
{
	x1 = x;
	y1 = y;
	z1 = z;

}

void Vector3D::Add(int x, int y, int z)
{
	x1 += x;
	y1 += y;
	z1 += z;
}

void Vector3D::Sub(int x, int y, int z)
{
	x1 -= x;
	y1 -= y;
	z1 -= z;
}

int Vector3D::ScalarMul(int x, int y, int z)
{
	return x1 * x + y1 * y + z1 * z;
}

void Vector3D::MulNum(int t)
{
	x1 += t;
	y1 += t;
	z1 += t;
}

bool Vector3D::VectorComp(int x, int y, int z)
{
	if (x1 == x && y1 == y && z1 == z) return 1;
	else return 0;
}

float Vector3D::CalcLength()
{
	return LengthOfVector();
}

bool Vector3D::LengthComp(int x, int y, int z)
{
	if (LengthOfVector() == sqrt(x ^ 2 + y ^ 2 + z ^ 2)) return 1;
	else return 0;
}

float Vector3D::LengthOfVector()
{
	return sqrt(x1 ^ 2 + y1 ^ 2 + z1 ^ 2);
}



int main()
{
    cout << "work in progress...\n";
}
