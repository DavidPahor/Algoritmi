#include <iostream>
using namespace std;

int faktorijel(int n, int i) {
	if (i == n)
		return i;
	return i* faktorijel(n, i+1);
}


int main3()
{
	int n, i = 1;
	cin >> n;
	cout << faktorijel(n, i);
	return 0;
}