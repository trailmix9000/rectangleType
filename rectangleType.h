#pragma once
#include <iostream>
using namespace std;

class rectangleType
{
	//overload the stream insertion and extration operators
	friend ostream& operator<< (ostream&, const rectangleType&);
	friend istream& operator>> (istream&, rectangleType&);

public:
	void setDimension(double l, double w);
	double getLength() const;
	double getWidth() const;
	double area() const;
	double perimeter()  const;
	void print() const;

	rectangleType operator+(const rectangleType&) const;
	//overload the +
	rectangleType operator*(const rectangleType&) const;
	//overload the *

	bool operator ==(const rectangleType&) const;
	//overload the operator ==
	bool operator !=(const rectangleType&) const;
	//overload the operator !=


	rectangleType();
	rectangleType(double l, double w);


private:
	double length;
	double width;

};

