#include <iostream>
#include <exception>
#include <string>
using namespace std;

bool numberEnteredCorrectly(double num)
{
	return num > -0.0000001 && num < 0.0000001;
}

class UwUException : public exception
{
private:
	string uwu;
public:
	UwUException(string error): uwu(error){}
	const char* what() const noexcept { return uwu.c_str(); }
};
/*************************************************************************************************/
double calculatingRootOfLinearEquation0(double a, double b)
{
	if (numberEnteredCorrectly(a))
	{
		throw 1;
	}
    return -b / a;
}
double calculatingRootOfLinearEquation1(double a, double b)
{
	if (numberEnteredCorrectly(a) || a > 1000000)
	{
		throw "Bad things happened: a > MAX_NUM";
	}
	return -b / a;
}
double calculatingRootOfLinearEquation2(double a, double b)
{
	if (numberEnteredCorrectly(a) || a < -1000000)
	{
		throw invalid_argument("Bad things happened: a < MIN_NUM");
	}
	return -b / a;
}
double calculatingRootOfLinearEquation3(double a, double b)
{
	if (numberEnteredCorrectly(a) || rand() > b)
	{
		throw UwUException("Bad things happened!");
	}
	return -b / a;
}
/*************************************************************************************************/
int main()
{
	double a, b;
	cin >> a;
	cin >> b;
	try
	{
		cout << calculatingRootOfLinearEquation0(a, b);
		cout << "UwU";
		cout << calculatingRootOfLinearEquation1(a, b);
		cout << "UwU";
		cout << calculatingRootOfLinearEquation2(a, b);
		cout << "UwU";
		cout << calculatingRootOfLinearEquation3(a, b);
		cout << "UwU";
	}	
	catch(UwUException& except)
	{
		cerr << "An exception occurred (" << except.what() << ")\n";
	}
	catch(exception& except)
	{
		cerr << "Some other std::exception occurred (" << except.what() << ")\n";
	}
	catch(const char* OwO)
	{
		cout << OwO;
	}
	catch (int)
	{
		cout << "a cannot be zero";
	}
}