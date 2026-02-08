#include <iostream>
using namespace std;

void ispis(int n) {
	if (n == 0) {
		return;
	}
	ispis(n - 1);
	cout << n << endl;
}


int main()
{
	int n;
	cin >> n;
	ispis(n);
	return 0;
}