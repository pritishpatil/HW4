#include "ComplexVector.h"


ComplexVector::ComplexVector()
{
	vector.resize(0);
}

ComplexVector::ComplexVector(Complex newValue1, Complex newValue2, Complex newValue3, Complex newValue4)
{
	vector.push_back(newValue1);
	vector.push_back(newValue2);
	vector.push_back(newValue3);
	vector.push_back(newValue4);
}

//void ComplexVector::printInfo()
//{
//	cout << "{ ";
//	vector[0].printInfo();
//	cout << ", ";
//	vector[1].printInfo();
//	cout << ", ";
//	vector[2].printInfo();
//	cout << ", ";
//	vector[3].printInfo();
//	cout << " }" << endl;
//}

//void complexvector::printaddition(complexvector newv1, complexvector newv2)
//{
//	cout << newv1 + newv2 << endl;
//}
//




