#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
	int a, b = 0, n, k = 0, d = 1, l, nb, zn = 0, d2, korak2, d3 = 1;
	float korak1;
	bool polindrom = false;
	cin >> a;
	n = a;
	do {
		n = n / 10;
		b++;
		d3 *= 10;
	} while (n > 0);
	if (b % 2 != 0) {
		for (int i = 0; i < (b / 2); i++) {
			d *= 10;
			k++;
		}
		nb = a % d;
		d2 = 1;
		for (int i = 0; i < k; i++) {
			korak1 = nb % d;
			korak2 = korak1 / d * 10;
			zn += korak2 *d2;
			d /= 10;
			d2 *= 10;
		}

		for (int i = 0; i < k; i++) {
			d3 /= 10;
		}
		l = a / d3;

		if (l == zn) 
		{
			polindrom = true;
		}
	}
	cout << polindrom;
}