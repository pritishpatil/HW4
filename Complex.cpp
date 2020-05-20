#include "Complex.h"

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

int Complex::getReal()
{
	return real;
}

int Complex::getImaginary()
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


Complex Complex::operator+(Complex& complexValue1)
{
	real = real + complexValue1.getReal();
	imaginary = imaginary + complexValue1.getImaginary();
	return Complex(real, imaginary);
}

Complex Complex::operator-(Complex& complexValue1)
{
	real = real - complexValue1.getReal();
	imaginary = imaginary - complexValue1.getImaginary();
	return Complex(real, imaginary);
}

Complex Complex::operator*(Complex& complexValue1)
{
	double tempReal = real;
	double tempImaginary = imaginary;
	real = ((tempReal * complexValue1.getReal()) - (tempImaginary * complexValue1.getImaginary()));
	imaginary = ((tempImaginary * complexValue1.getReal()) + (tempReal * complexValue1.getImaginary()));
	return Complex(real, imaginary);
}

Complex Complex::operator/(Complex& complexValue1)
{
	double tempReal = real;
	double tempImaginary = imaginary;
	real = ((tempReal * complexValue1.getReal()) + (tempImaginary * complexValue1.getImaginary())) / (pow(complexValue1.getReal(), 2) + pow(complexValue1.getImaginary(), 2));
	imaginary = (((tempImaginary * complexValue1.getReal()) - (tempReal * complexValue1.getImaginary()))) / ((complexValue1.getReal()) * (complexValue1.getReal())) + ((complexValue1.getImaginary()) * (complexValue1.getImaginary()));
	return Complex(real, imaginary);
}

ostream& operator<<(ostream& out, const Complex& value)
{
	string op = value.imaginary < 0 ? " - " : " + ";
	out << value.real << op << value.imaginary << "i";
	return out;
}

