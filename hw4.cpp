
#include <iostream>
#include "Complex.h"
#include "ComplexVector.h"
using namespace std;




int main()
{

    Complex value1(2, 4);
    Complex value2(3,5);
    Complex value3(-1,-3);
    Complex value4(8,10);

    Complex value5(-10,3.5);
    Complex value6(4,7.3);
    Complex value7(2,-8);
    Complex value8(10,-142);

    /*cout << value1 + value2 << endl;
    cout << value1 - value2 << endl;
    cout << value1 * value2 << endl;
    cout << value1 / value2 << endl;*/

    ComplexVector v1(value1, value2, value3, value4);
    ComplexVector v2(value5, value6, value7, value8);

    cout << "v1 = " << v1 << endl;
    cout << "v2 = " << v2 << endl;
    
    cout << "v1 + v2 = " << v1 + v2 << endl;
    cout << "v1 - v2 = " << v1 - v2 << endl;
    cout << "v1 * v2 = " << v1 * v2 << endl;
    cout << "v1 / v2 = " << v1 / v2 << endl;
    

}

