#pragma once
#include "Complex.h"
#include <vector>
#include <iostream>
#include <string>
using namespace std;

class ComplexVector : 
	public Complex
{

public: 

	ComplexVector();
	ComplexVector(Complex,Complex,Complex,Complex);
	/*void printInfo();*/
	void printAddition(ComplexVector, ComplexVector);

private:

	vector<Complex> vector;


};

