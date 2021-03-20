#include "Lab_1_2.cpp"

Vector3D::Vector3D(int x, int y, int z)
{
	Coordinates.x = x;
	Coordinates.y = y;
	Coordinates.z = z;
}

void Vector3D::Add(int x, int y, int z)
{
	Coordinates.x += x;
	Coordinates.y += y;
	Coordinates.z += z;
}

void Vector3D::Sub(int x, int y, int z)
{
	Coordinates.x -= x;
	Coordinates.y -= y;
	Coordinates.z -= z;
}

int Vector3D::ScalarMul(int x, int y, int z)
{
	return Coordinates.x * x + Coordinates.y * y + Coordinates.z * z;
}

void Vector3D::MulNum(int t)
{
	Coordinates.x += t;
	Coordinates.y += t;
	Coordinates.z += t;
}

bool Vector3D::VectorComp(int x, int y, int z)
{
	if (Coordinates.x == x && Coordinates.y == y && Coordinates.z == z) return 1;
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
	return sqrt(Coordinates.x ^ 2 + Coordinates.y ^ 2 + Coordinates.z ^ 2);
}