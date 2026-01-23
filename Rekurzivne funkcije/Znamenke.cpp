#include <iostream>
using namespace std;

int zb(int n) {
	if (0 >= n)
		return 0;
	return (n % 10) + zb(n / 10);
}


int main5()
{
	int n;
	cin >> n;
	cout << zb(n);
	return 0;
}