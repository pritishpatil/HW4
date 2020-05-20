#pragma once
#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Complex
{
public:
	
	Complex();
	Complex(double, double);
	int getReal();
	int getImaginary();
	void setReal(double);
	void setImaginary(double);
	Complex operator+(Complex&);
	Complex operator-(Complex&);
	Complex operator*(Complex&);
	Complex operator/(Complex&);
	friend ostream& operator<<(ostream& out, const Complex& value);

private: 

	double real;
	double imaginary;

};

