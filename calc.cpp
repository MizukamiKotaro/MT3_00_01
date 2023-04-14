#include"calc.h"
#include<math.h>

Vector3 Add(const Vector3& v1, const Vector3& v2) {
	Vector3 result = {};

	result.x = v1.x + v2.x;
	result.y = v1.y + v2.y;
	result.z = v1.z + v2.z;

	return result;
}

Vector3 Subtract(const Vector3& v1, const Vector3& v2) {
	Vector3 result = {};

	result.x = v1.x - v2.x;
	result.y = v1.y - v2.y;
	result.z = v1.z - v2.z;

	return result;
}

Vector3 Multiply(float scalar, const Vector3& v) {
	Vector3 result = {};

	result.x = v.x * scalar;
	result.y = v.y * scalar;
	result.z = v.z * scalar;

	return result;
}

float Dot(const Vector3& v1, const Vector3& v2) {
	float result = v1.x * v2.x + v1.y * v2.y + v1.z * v2.z;
	return result;
}

float Length(const Vector3& v) {
	float result = 0;
	result = sqrtf(powf(v.x, 2) + powf(v.y, 2) + powf(v.z, 2));
	return result;
}

Vector3 Normalize(const Vector3& v) {
	Vector3 result = {};

	float length = Length(v);

	result = Multiply(powf(length, -1), v);

	return result;
}