#include <iostream>
using namespace std;

int umnozak(int* n) {
	if (*n == 666 || *n == 0) {
		return 1;
	}
	if (*n % 2 == 0) {
		return *n * umnozak(n + 1);
	}
	return umnozak(n + 1);
}


int main1()
{
	int n[100] = { 1,2,3,4,5,6,12,543,23923,2,8,25,3463,22,666 };
	cout << umnozak(n);
	return 0;
}