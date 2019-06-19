#ifndef vector3_H
#define vector3_H

#include <math.h>
#include <stdlib.h>
#include <iostream>
class vector3
{
public:
	float e[3];

	vector3() {}
	vector3(float e0, float e1, float e2) {
		e[0] = e0;
		e[1] = e1;
		e[2] = e2;
	};

	inline float x() const {
		return e[0];
	}
	inline float y() const {
		return e[1];
	}
	inline float z() const {
		return e[2];
	}

	inline float r() const {
		return e[0];
	}
	inline float g() const {
		return e[1];
	}
	inline float b() const {
		return e[2];
	}

	inline const vector3& operator +()const
	{
		return *this;
	}

	inline vector3 operator -()const
	{
		vector3  vec = vector3(-e[0], -e[1], -e[2]);
		return vec;
	}

	inline float operator[] (int i)const
	{
		return e[i];
	}

	inline float& operator[] (int i)
	{
		return e[i];
	}

	inline vector3& operator +=(const vector3 &v2);
	inline vector3& operator -=(const vector3 &v2);
	inline vector3& operator *=(const vector3 &v2);
	inline vector3& operator /=(const vector3 &v2);
	inline vector3& operator *=(const float t);
	inline vector3& operator /=(const float t);

	inline vector3 operator+(const vector3 &v1)
	{
		return vector3(v1.e[0] + this->e[0], v1.e[1] + this->e[1], v1.e[2] + this->e[2]);
	}
	inline vector3 operator-(const vector3 &v1)
	{
		return vector3(this->e[0] - v1.e[0], this->e[1] - v1.e[1], this->e[2] - v1.e[2]);
	}

	inline vector3 operator*(const vector3 &v1)
	{
		return vector3(this->e[0] * v1.e[0], this->e[1] * v1.e[1], this->e[2] * v1.e[2]);
	}

	inline vector3 operator/(const vector3 &v1)
	{
		return vector3(this->e[0] / v1.e[0], this->e[1] / v1.e[1], this->e[2] / v1.e[2]);
	}

	inline vector3 operator/(const float &t)
	{
		return vector3(this->e[0] / t, this->e[1] / t, this->e[2] / t);
	}

	inline float length() const { return sqrt(e[0] * e[0] + e[1] * e[1] + e[2] * e[2]); }
	inline float squared_length() const { return e[0] * e[0] + e[1] * e[1] + e[2] * e[2]; }
	inline vector3 unit_vector(vector3 v) {
		return v / float(v.length());
	}

	inline float dot(const vector3 &v1, const vector3 &v2)
	{
		return v1.e[0] * v2.e[0], v1.e[1] * v2.e[1], v1.e[2] * v2.e[2];
	}

	inline vector3 cross(const vector3 &v1, const vector3 &v2)
	{
		return vector3((v1.e[1] * v2.e[2] - v1.e[2] * v2.e[1]), -(v1.e[0] * v2.e[2] - v1.e[2] * v2.e[0]), (v1.e[0] * v2.e[1] - v1.e[1] * v2.e[0]));
	}
};
#endif // ! vector3_H
