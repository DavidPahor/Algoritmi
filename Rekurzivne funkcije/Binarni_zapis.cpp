#include <iostream>
using namespace std;

int bin(int n) {
	if (n == 1){
		cout << 1;
		return 0;
	}
	bin(n / 2);
	cout << n % 2;
	return 0;
}


int main3()
{
	int n;
	cin >> n;
	bin(n);
	return 0;
}