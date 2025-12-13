#include <stdio.h>
#include <iostream>
using namespace std;

void restart(char* p)
{
	*(p) = 't';
	*(p + 1) = 's';
	*(p + 2) = 'l';
	*(p + 3) = 'd';
	*(p + 4) = 'k';
	*(p + 5) = 'l';
	*(p + 6) = 's';
	*(p + 7) = 't';
	for (int i = 8; i < 16; i++)
		*(p + i) = 'p';

	for (int i = 16; i < 49; i++)
		*(p + i) = 'x';

	for (int i = 48; i < 56; i++)
		*(p + i) = 'P';
	*(p + 56) = 'T';
	*(p + 56 + 1) = 'S';
	*(p + 56 + 2) = 'L';
	*(p + 56 + 3) = 'D';
	*(p + 56 + 4) = 'K';
	*(p + 56 + 5) = 'L';
	*(p + 56 + 6) = 'S';
	*(p + 56 + 7) = 'T';
}

void ispisi(char* p)
{
	cout << "  a b c d e f g h" << endl;
	for (int j = 0; j < 8; j++) {
		cout << 8 - j<<' ';
		for (int i = 0; i < 8; i++) {
			cout << *(p + 8 * j + i) << ' ';
		}
		cout << 8 - j << endl;
	}
	cout << "  a b c d e f g h" << endl;
}

void promjena(char* p, char* a, char* b)
{
	int prvi, drugi, pomocna,figura_j, figura_d;
	prvi = *(a)-'a';
	drugi = 8 - (*(a + 1) - 48);
	figura_j = prvi + 8 * drugi;

	prvi = *(b)-'a';
	drugi = 8 - (*(b + 1) - 48);
	figura_d = prvi + 8 * drugi;

	pomocna = *(p + figura_j);
	*(p + figura_j) = *(p + figura_d);
	*(p + figura_d) = pomocna;

}

int main()
{
	char polje[8][8];
	restart(&polje[0][0]);
	ispisi(&polje[0][0]);
	string a;
	cin >> a;
	string b;
	cin >> b;
	promjena(&polje[0][0], &a[0], &b[0]);
	ispisi(&polje[0][0]);

}
