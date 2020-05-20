/*
	PIC 10B 2B, Homework 4
	Purpose: Vector Arithmetic + Recursive Function
	Author: Pritish Patil
	Date: 05/20/2020
*/

#pragma once
#include "Complex.h"
#include <vector>
#include <iostream>
#include <string>
using namespace std;

class ComplexVector
{
public: 
	ComplexVector();
	ComplexVector(Complex,Complex,Complex,Complex);

	// operator overload for various arithmetic
	ComplexVector operator+(ComplexVector&);
	ComplexVector operator-(ComplexVector&);
	ComplexVector operator*(ComplexVector&);
	ComplexVector operator/(ComplexVector&);

	// friend function for cout operator overload
	friend ostream& operator<<(ostream& out, const ComplexVector& value);
	void put(Complex);

private:
	vector<Complex> vector;
};

