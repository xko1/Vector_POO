#include "Vector.h"

Vector::Vector(float x_in, float y_in)
{
	x = x_in;
	y = y_in;
}

Vector Vector::operator+(const Vector& rhs) const
{
	return Vector(x + rhs.x, y + rhs.y);
}

Vector& Vector::operator+=(const Vector& rhs)
{
	return *this = *this + rhs;
}