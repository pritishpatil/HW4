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
	ComplexVector operator+(ComplexVector&);
	ComplexVector operator-(ComplexVector&);
	ComplexVector operator*(ComplexVector&);
	ComplexVector operator/(ComplexVector&);
	friend ostream& operator<<(ostream& out, const ComplexVector& value);
	void put(Complex);

private:
	vector<Complex> vector;
};

