/*
    PIC 10B 2B, Homework 4
    Purpose: Vector Arithmetic + Recursive Function
    Author: Pritish Patil
    Date: 05/20/2020
*/

#include <iostream>
#include <fstream>
#include "Complex.h"
#include "ComplexVector.h"
using namespace std;

// recursive for complex sequence
Complex series(int n)
{
    double real = 0;
    double imaginary = 0;
    // terminating case
    if (n == 0)
    {
        real = 1;
        imaginary = 1;
    }
    else 
    {
        Complex c1 = Complex(2 * n, 3 * n);
        Complex c2 = Complex(7, 5 * pow(n, 2));
        Complex quotient = c1 / c2;
        Complex prev = series(n - 1);
        Complex value = quotient * prev;
        real = value.getReal();
        imaginary = value.getImaginary();
    }
    return Complex(real, imaginary);
}


int main()
{
    // creates Complex objects
    Complex value1(2, 4);
    Complex value2(3,5);
    Complex value3(-1,-3);
    Complex value4(8,10);

    Complex value5(-10,3.5);
    Complex value6(4,7.3);
    Complex value7(2,-8);
    Complex value8(10,-142);

    // creates ComplexVector objects
    ComplexVector v1(value1, value2, value3, value4);
    ComplexVector v2(value5, value6, value7, value8);

    // displays ComplexVector objects
    cout << "v1 = " << v1 << endl;
    cout << "v2 = " << v2 << endl;
    
    // displays ComplexVector arithmetic
    cout << "v1 + v2 = " << v1 + v2 << endl;
    cout << "v1 - v2 = " << v1 - v2 << endl;
    cout << "v1 * v2 = " << v1 * v2 << endl;
    cout << "v1 / v2 = " << v1 / v2 << endl;

    // outputs recursive sequence to output file
    ofstream outputFile;
    outputFile.open("ComplexSequence.txt");
    Complex s1 = series(0);
    Complex s2 = series(1);
    Complex s3 = series(2);
    Complex s4 = series(3);
    Complex s5 = series(4);
    Complex s6 = series(5);

    s1.setHighprecision();
    s2.setHighprecision();
    s3.setHighprecision();
    s4.setHighprecision();
    s5.setHighprecision();
    s6.setHighprecision();

    outputFile << "{ " << s1 << ", " << s2 << ", " << s3 << ", " << s4 <<", " << "\n" << s5 << ", " << s6 << " }";
    outputFile.close();
}

