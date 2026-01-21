#include <iostream>
using namespace std;

int faktorijel(int n, int i) {
	if (i == n)
		return i;
	return i* faktorijel(n, i+1);
}


int main()
{
	int n, i = 1;
	cin >> n;
	cout << faktorijel(n, i);
}