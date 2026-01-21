#include <iostream>
using namespace std;

int naj(int* p, int n, int i) {
	if (n == i) {
		return *p;
	}

	if (*p > naj((p + 1), n, i + 1))
		return *p;
}


int main2()
{
	int p[100] = { 1,2,3,4,5,6,12,543,23923,2,8,25,3463,22,666 }, n, i = 0;
	cin >> n;
	cout << naj(p, n - 1, i);
	return 0;
}