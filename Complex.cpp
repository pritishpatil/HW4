/*
	PIC 10B 2B, Homework 4
	Purpose: Vector Arithmetic + Recursive Function
	Author: Pritish Patil
	Date: 05/20/2020
*/

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

bool Complex::getHighprecision()
{
	return highPrecision;
}

void Complex::setReal(double newReal)
{
	real = newReal;
}

void Complex::setImaginary(double newImaginary)
{
	imaginary = newImaginary;
}

void Complex::setHighprecision()
{
	highPrecision = true;
}

// operator overload for Complex object arithmetic
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

// friend function for cout operator overload
ostream& operator<<(ostream& out, const Complex& value)
{
	string op = value.imaginary < 0 ? " - " : " + ";
	float number = 10.0;
	int precision = value.highPrecision ? 10 : 1;
	if (!value.highPrecision)
	{
		out << fixed << setprecision(precision) << round(number * value.real) / 10 << op << fixed << setprecision(precision) << round(number * abs(value.imaginary)) / 10 << "i";
	}
	else
	{
		out << fixed << setprecision(precision) << value.real << op << fixed << setprecision(precision) << abs(value.imaginary) << "i";

	}
	return out;
}

