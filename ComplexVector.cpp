#include "ComplexVector.h"
#include "Complex.h"


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


void ComplexVector::put(Complex term)
{
	vector.push_back(term);
}

ComplexVector ComplexVector::operator+(ComplexVector& another)
{
	ComplexVector sum = ComplexVector();
	for (int i = 0; i < vector.size(); i++)
	{
		Complex temp = vector[i];
		Complex temp2 = another.vector[i];
		Complex result = temp + temp2;
		
		sum.put(result);
	}
	return sum;
}

ComplexVector ComplexVector::operator-(ComplexVector& another)
{
	ComplexVector difference = ComplexVector();
	for (int i = 0; i < vector.size(); i++)
	{
		Complex temp = vector[i];
		Complex temp2 = another.vector[i];
		Complex result = temp - temp2;

		difference.put(result);
	}
	return difference;
}

ComplexVector ComplexVector::operator*(ComplexVector& another)
{
	ComplexVector product = ComplexVector();
	for (int i = 0; i < vector.size(); i++)
	{
		Complex temp = vector[i];
		Complex temp2 = another.vector[i];
		Complex result = temp * temp2;

		product.put(result);
	}
	return product;
}

ComplexVector ComplexVector::operator/(ComplexVector& another)
{
	ComplexVector quotient = ComplexVector();
	for (int i = 0; i < vector.size(); i++)
	{
		Complex temp = vector[i];
		Complex temp2 = another.vector[i];
		Complex result = temp / temp2;

		quotient.put(result);
	}
	return quotient;
}



ostream& operator<<(ostream& out, const ComplexVector& value)
{
	
	out << "{ " << value.vector[0] << ", " << value.vector[1] << ", " << value.vector[2] << ", " << value.vector[3] << " }" << endl;
	return out;
}





