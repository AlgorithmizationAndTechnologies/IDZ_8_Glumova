#include <iostream>
#include <cassert>
#include "Vector.h"
using namespace std;

void Test(){
	StandVector sv1(4, 7);
	StandVector sv2(1, 10);

	StandVector sv3(5, 9);
	StandVector sv4(8, 4);

	StandVector sv5(10, 12);

	StandVector sum_res = _sum(sv1, sv2);
	assert(sum_res.x == 5 && sum_res.y == 17);

	StandVector sum_res2 = _sum(sv3, sv4);
	assert(sum_res2.x == 13 && sum_res2.y == 13);

	StandVector razn_res = _razn(sv1, sv2);
	assert(razn_res.x == 3 && sum_res.y == -3);

	StandVector razn_res2 = _razn(sv3, sv4);
	assert(razn_res2.x == -3 && sum_res2.y == 5);

	StandVector pr_num_res = _proizv_na_chislo(sv1, 2);
	assert(pr_num_res.x == 8 && pr_num_res.y == 14);

	StandVector pr_num_res2 = _proizv_na_chislo(sv3, 5);
	assert(pr_num_res2.x == 25 && pr_num_res2.y == 45);

	StandVector pr_num_res3 = _proizv_na_chislo(sv5, 3);
	assert(pr_num_res.x == 30 && pr_num_res.y == 36);

	assert(_long_vector(sv1) == 3 && _long_vector(sv2) == 9);

	StandVector sv3(8, 0);
	StandVector evect_res = _evector(sv3);
	assert(evect_res.x == 1 && evect_res.y == 0);

	float scal_proiz_res = _scale_proizv(sv1, sv2);
	assert(scal_proiz_res == 74);
}
