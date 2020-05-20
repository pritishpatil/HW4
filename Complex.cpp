#include "Complex.h"
#include <iomanip>

Complex::Complex()
{
	real = 0;
	imaginary = 0;
}

Complex::Complex(double newReal, double newImaginary)
{
	real = newReal;
	imaginary = newImaginary;
}

double Complex::getReal()
{
	return real;
}

double Complex::getImaginary()
{
	return imaginary;
}

void Complex::setReal(double newReal)
{
	real = newReal;
}

void Complex::setImaginary(double newImaginary)
{
	imaginary = newImaginary;
}


Complex Complex::operator+(Complex& value)
{
	double newReal = real + value.getReal();
	double newImaginary = imaginary + value.getImaginary();
	return Complex(newReal, newImaginary);
}

Complex Complex::operator-(Complex& value)
{
	double newReal = real - value.getReal();
	double newImaginary = imaginary - value.getImaginary();
	return Complex(newReal, newImaginary);
}

Complex Complex::operator*(Complex& value)
{
	double newReal = (real * value.getReal()) - (imaginary * value.getImaginary());
	double newImaginary = (imaginary * value.getReal()) + (real * value.getImaginary());
	return Complex(newReal, newImaginary);
}

Complex Complex::operator/(Complex& value)
{
	double a = real;
	double b = imaginary;
	double c = value.getReal();
	double d = value.getImaginary();
	double numeratorReal = (a * c) + (b * d);
	double numeratorImaginary = (b * c) - (a * d);
	double denominator = pow(c, 2) + pow(d, 2);
	double newReal = numeratorReal / denominator;
	double newImaginary = numeratorImaginary / denominator;
	return Complex(newReal, newImaginary);
}

ostream& operator<<(ostream& out, const Complex& value)
{
	string op = value.imaginary < 0 ? " - " : " + ";
	float number = 10.0;
	out << fixed << setprecision(1) << round(number *value.real) / 10 << op << fixed << setprecision(1) << round(number * abs(value.imaginary)) / 10 << "i";
	return out;
}

