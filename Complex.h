#include <math.h>
#include <stdexcept>
#include <iostream>
#include <sstream>

// перечисляем все элементы private и public зон

using namespace std;
class Complex
{
private:
	double re, im;

public:

	Complex();
	Complex(double iValue);
	Complex(double rValue, double iValue);
	void setComplex(double rValue, double iValue);
	void setRe(double rValue);
	void setIm(double iValue);
	void getComplex(double& rValue, double& iValue);
	double getRe();
	double getIm();
	Complex operator+(Complex& c);
	Complex operator-(Complex& c);
	Complex operator*(Complex& c);
	Complex operator/(Complex& c);
	friend ostream& operator<<(ostream& out, Complex& c);
	friend istream& operator>>(istream& in, Complex& c);
};
