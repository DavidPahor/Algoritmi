#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;

void veci()
{
	int a, b;
	cin >> a >> b;
	if (a > b)
		cout << a << endl;
	else
		cout << b << endl;
	return;
}

void kvadrat()
{
	int a;
	cin >> a;
	cout << pow(a, 2) << endl;
	return;
}

void velicina()
{
	int p[3];
	int a;
	for (int i = 0; i < 3; i++) {
		cin >> a;
		p[i] = a;
	}

	for (int i = 0; i < 2; i++) {
		if (p[i] > p[i + 1])
		{
			int pomoc = p[i];
			p[i] = p[i + 1];
			p[i + 1] = pomoc;
		}
	}

	for (int i = 0; i < 3; i++) {
		cout << p[i] << endl;
	}
	return;
}

void string_()
{
	string s1 = "abcd";
	string s2 = "dcba";
	int b = 0, b1 = 0;
	bool isti = true;

	for (int i = 0; s1[i] != '\0'; i++)
	{
		b = i;
	}

	for (int i = 0; s1[i] != '\0'; i++)
	{
		b1 = i;
	}
	if (b1 == b)
	{
		for (int i = 0; i < b1; i++)
		{
			if (s1[i] != s2[b]) {
				isti = false;
				break;
			}
			b--;
		}
	}
	cout << isti << endl;
	return;
}

void palindrom()
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
			zn += korak2 * d2;
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
	return;
}

int main1()
{
	veci();
	kvadrat();
	velicina();
	string_();
	palindrom();
	return 0;
}