#pragma once

class Vector
{
public:
	Vector() = default;
	Vector(float x_in, float y_in);
	Vector operator+(const Vector& rhs) const;
	Vector& operator+=(const Vector& rhs);
private:
	float x;
	float y;
};