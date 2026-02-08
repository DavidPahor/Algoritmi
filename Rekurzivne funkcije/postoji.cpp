#include <iostream>
using namespace std;

int ispis(int n, int* p, int k) {
	if (*p == k) {
		return n;
	}
	return ispis(n + 1, p + 1, k);
}



int main()
{
	int p[10] = { 2,4,6,666,5,2 };
	int n = 0, k = 4;
	cout << ispis(n, p, k);
	return 0;
}