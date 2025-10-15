#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
	int a, b = 0, n, k = 0, d = 1, z, nb, zn = 0,d2;
	cin >> a;
	n = a;
	do {
		n = n / 10;
		b++;
	} while (n > 0);
	if (b % 2 != 0) {
		for (int i = 0; i < (b / 2); i++) {
			d *= 10;
			k++;
		}
		nb = a % d;
		d = 10;
		d2 = 1;
		cout << nb << endl;
		for (int i = 0; i < k; i++) {
			zn += (((nb % d) / (float)d * 10)*d2);
			cout << d << endl;
			cout << zn << endl;
			d *= 10;
			d2 *= 10;
		}
	}
	cout << zn;
}