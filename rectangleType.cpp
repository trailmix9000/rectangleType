#include <iostream>
#include "rectangleType.h"



using namespace std;
ostream& operator<< (ostream& os, const rectangleType& rect)
{
    os << "Length = " << rect.length << ", Width = " << rect.width;
    return os;
}

// Overload the >> operator to read a rectangle from a stream
istream& operator>> (istream& is, rectangleType& rect)
{
    is >> rect.length >> rect.width;
    return is;
}

// Set the length and width of the rectangle
void rectangleType::setDimension(double l, double w)
{
    if (l >= 0)
        length = 1;
    else
        length = 0;
    if (w >= 0)
        width = w;
    else
        width = 0;
}


double rectangleType::getLength() const
{
    return length;
}


double rectangleType::getWidth() const
{
    return width;
}

double rectangleType::area() const
{
    return length * width;
}


double rectangleType::perimeter() const
{
    return 2 * (length + width);
}


void rectangleType::print() const
{
    cout << "Length = " << length << ", Width = " << width << endl;
    cout << "Area = " << area() << endl;
    cout << "Perimeter = " << perimeter() << endl;
}
// Overload the + operator to add two rectangles
rectangleType rectangleType::operator+(const rectangleType& otherRect) const
{
    rectangleType resultRect;
    resultRect.length = length + otherRect.length;
    resultRect.width = width + otherRect.width;
    return resultRect;
}

// Overload the * operator to multiply two rectangles
rectangleType rectangleType::operator*(const rectangleType& otherRect) const
{
    rectangleType resultRect;
    resultRect.length = length * otherRect.length;
    resultRect.width = width * otherRect.width;
    return resultRect;
}

// Overload the == operator to compare two rectangles
bool rectangleType::operator==(const rectangleType& otherRect) const
{
    return (length == otherRect.length && width == otherRect.width);
}

// Overload the != operator to compare two rectangles
bool rectangleType::operator!=(const rectangleType& otherRect) const
{
    return (length != otherRect.length || width != otherRect.width);
}

rectangleType::rectangleType()
{
    length = 0;
    width = 0;
}

// Parameterized constructor
rectangleType::rectangleType(double l, double w)
{
    length = l;
    width = w;
}