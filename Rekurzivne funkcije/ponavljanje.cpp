#include <iostream>
using namespace std;

int pon(int *p, int *pr, int i) {
	if (*(pr+i) == 1)
		return  0;
	*(pr+i) = 1;
	i = *(p + i);
	
	int br = pon(p, pr, i);
	*(pr + i) = 0;
	return br + 1;
}

int main132()
{
	int p[10] = { 0,4,5,2,0,6,9,3,0,8 };
	int pr[10] = { 0 };
	int br_st = 0, poc;
	for (int i = 0; i < 10; i++) {
		int br_n = pon(&p[0], &pr[0], i);
		if (br_st < br_n) {
			br_st = br_n;
			poc = i;
		}
	}
	cout << br_st << endl;
	cout << poc << endl;


	return 0;
}