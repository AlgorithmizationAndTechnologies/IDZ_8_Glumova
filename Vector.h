#pragma once
struct StandVector {
	float x;
	float y;
	StandVector(float x, float y);
	string FormateVector();
};
float _long_vector(StandVector sv1);
StandVector _sum(StandVector sv1, StandVector sv2);
StandVector _proizv_na_chislo(StandVector sv1, float t);
StandVector _razn(StandVector sv1, StandVector sv2);
StandVector _evector(StandVector sv1);
float _scale_proizv(StandVector sv1, StandVector sv2);
void _help();
