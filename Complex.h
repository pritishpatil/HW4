/*
	PIC 10B 2B, Homework 4
	Purpose: Vector Arithmetic + Recursive Function
	Author: Pritish Patil
	Date: 05/20/2020
*/

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
	double getReal();
	double getImaginary();
	bool getHighprecision();
	void setReal(double);
	void setImaginary(double);
	void setHighprecision();

	// operator overload for Complex object arithmetic
	Complex operator+(Complex&);
	Complex operator-(Complex&);
	Complex operator*(Complex&);
	Complex operator/(Complex&);

	// friend function for cout operator overload
	friend ostream& operator<<(ostream& out, const Complex& value);

private: 

	double real;
	double imaginary;
	bool highPrecision = false;

};

