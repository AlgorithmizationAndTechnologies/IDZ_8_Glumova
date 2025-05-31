#include <iostream>
#include <cassert>
#include "Vector.h"
using namespace std;

void Test(){
	StandVector sv1(4, 7);
	StandVector sv2(1, 10);

	StandVector sum_res = _sum(sv1, sv2);
	assert(sum_res.x == 5 && sum_res.y == 17);

	StandVector razn_res = _razn(sv1, sv2);
	assert(razn_res.x == 3 && sum_res.y == -3);

	StandVector pr_num_res = _proizv_na_chislo(sv1, 2);
	assert(pr_num_res.x == 8 && pr_num_res.y == 14);

	assert(_long_vector(sv1) == 3 && _long_vector(sv2) == 9);

	StandVector sv3(8, 0);
	StandVector evect_res = _evector(sv3);
	assert(evect_res.x == 1 && evect_res.y == 0);

	float scal_proiz_res = _scale_proizv(sv1, sv2);
	assert(scal_proiz_res == 74);
}