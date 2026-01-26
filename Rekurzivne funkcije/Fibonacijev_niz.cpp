#include <iostream>
using namespace std;

int fab(int n, int i, int a, int b) {
	if (i >= n)
		return b;
	a += b;
	return fab(n, i + 1, b, a);
}


int main7()
{
	int n, i = 0, a = 1, b = 0;
	cin >> n;
	cout << fab(n-1, i, a, b);
	return 0;
}
