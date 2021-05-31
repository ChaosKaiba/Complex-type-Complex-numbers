#ifndef COMPLEXNUMBER_H_INCLUDED
#define COMPLEXNUMBER_H_INCLUDED

#include <iostream>

using namespace std;

class complexType
{
    //Overload the stream insertion and extraction operators
 	friend ostream& operator<<(ostream&, const complexType&);

 	friend istream& operator>>(istream&, complexType&);

public:

 	void setComplex(const double& real, const double& imag);

 	void getComplex(double& real, double& imag) const;

 	complexType(double real = 0, double imag = 0);

 	complexType operator+ (const complexType& otherComplex) const;


    complexType operator* (const complexType& otherComplex) const;

 	bool operator == (const complexType& otherComplex) const;

private:

 	double realPart;
 	double imaginaryPart;
};

ostream& operator<<(ostream& osObject, const complexType& complex)
{
 	osObject << "(";
 	osObject << complex.realPart;
 	osObject << ", ";
 	osObject << complex.imaginaryPart;
 	osObject << ")";
 	return osObject;
}

istream& operator>>(istream& isObject, complexType& complex)
{
 	char ch;
 	isObject >> ch; //Step a
 	isObject >> complex.realPart; //Step b
 	isObject >> ch; //Step c
 	isObject >> complex.imaginaryPart; //Step d
 	isObject >> ch; //Step e
 	return isObject; //return the istream object
}

bool complexType::operator == (const complexType& otherComplex) const
{
    return (realPart == otherComplex.realPart && imaginaryPart == otherComplex.imaginaryPart);
}



//Constructor
complexType::complexType(double real, double imag)
{
 	realPart = real;
 	imaginaryPart = imag;
}

//Function to set the complex number after the object
//has been declared.
void complexType::setComplex(const double& real, const double& imag)
{
 	realPart = real;
 	imaginaryPart = imag;
}
void complexType::getComplex(double& real, double& imag) const
{
 	real = realPart;
 	imag = imaginaryPart;
}

//overload the operator +
complexType complexType::operator+ (const complexType& otherComplex) const
{
 	complexType temp;
 	temp.realPart = realPart + otherComplex.realPart;
temp.imaginaryPart = imaginaryPart + otherComplex.imaginaryPart;
 	return temp;
}

//overload the operator *
complexType complexType::operator* (const complexType& otherComplex) const
{
 	complexType temp;
 	temp.realPart = (realPart * otherComplex.realPart) - (imaginaryPart * otherComplex.imaginaryPart);
 	temp.imaginaryPart = (realPart * otherComplex.imaginaryPart) + (imaginaryPart * otherComplex.realPart);
 	return temp;
}

#endif // COMPLEXNUMBER_H_INCLUDED
