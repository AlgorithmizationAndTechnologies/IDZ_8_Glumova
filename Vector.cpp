#include <iostream>
#include "Vector.h"
#include <string>
using namespace std;

StandVector::StandVector(float x, float y) :x(x), y(y) {}
string StandVector::FormateVector() {
	return '(' + to_string(this->x) + ',' + to_string(this->y) + ')';
}

float _long_vector(StandVector sv) {
	return sqrt(sv.x * sv.x + sv.y * sv.y);
}
StandVector _sum(StandVector sv1, StandVector sv2) {
	StandVector sv3(sv1.x + sv2.x, sv1.y + sv2.y);
	return sv3;
}
StandVector _proizv_na_chislo(StandVector sv1, float t) {
	StandVector sv2(sv1.x * t, sv1.y * t);
	return sv2;
}
StandVector _razn(StandVector sv1, StandVector sv2) {
	StandVector sv3(sv1.x - sv2.x, sv1.y - sv2.y);
	return sv3;
}
StandVector _evector(StandVector sv1) {
	if (_long_vector(sv1) == 0) {
		return StandVector(0, 0);
	}
	StandVector sv2(sv1.x / _long_vector(sv1), sv1.y / _long_vector(sv1));
	return sv2;
}
float _scale_proizv(StandVector sv1, StandVector sv2) {
	return sv1.x * sv2.x + sv1.y * sv2.y;
}
void _help() {
	std::cout <<
		"1. Find sum of two vectors: (a, b) + (c, d) = (a+c, b+d)\n" <<
		"2. Find difference of two vectors: (a, b) - (c, d) = (a-c, b-d)\n" <<
		"3. Find multiply vector by number: t * (a, b) = (t*a, t*b)\n" <<
		"4. Find scalar product: (a, b) * (c, d) = a*c + b*d\n" <<
		"5. Find vector length: |(a, b)| = sqrt(a^2 + b^2)\n" <<
		"6. Find unit vector parallel to the given: v = (a, b), (a/|v|, b/|v|)\n";
}
