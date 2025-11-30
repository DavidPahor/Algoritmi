#include <stdio.h>
#include <iostream>
using namespace std;
int razmak(int uc, int pred)
{
	int razma;
	razma = uc * 50 + pred * 10;
	return razma;
}

void upis(int* p, int uc, int pred, int oc)
{
	int razm = razmak(uc, pred), i = 0;
	while (*(p+razm+i) != 0)
		i++;
	if (i < 10)
		*(p + razm + i) = oc;
	else
		cout << "Error - Maksimalan broj ocjena" << endl;
}

void ispis(int* p, int uc, int pred)
{
	float b = 0, zb = 0;
	int razm = razmak(uc, pred);

	for (int i = 0; i < 10; i++)
	{
		if (*(p + razm + i) != 0)
			b++;
		zb += *(p + razm + i);
	}
		if (b == 0)
			cout << "Ucenik nema upisanih ocjena" << endl;
		else {
			float pros = zb / b;
			cout << pros << endl;
		}
}

void ispis2(int* p, int uc)
{
	int b = 0, zb = 0, i = 0;
	int razm = razmak(uc, 0);
	float pros;
	for (int j = 0; j < 5; j++) {
		zb = 0, b = 0, pros = 0;
		for (i = 0; i < 10; i++)
		{
			if (*(p + razm + i) != 0)
				b++;
			zb += *(p + razm + i);
		}
		razm += 10;
		if (b == 0)
			cout << "Ucenik nema upisanih ocjena" << endl;
		else {
			pros = zb / b;
			cout << pros << endl;
		}
	}
}

void ispis3(int* p)
{
	int b = 0, zb = 0, razm = 0, prospred = 0;
	for (int z = 0; z < 7; z++) {
		float uk = 0;
		prospred = 0;
		for (int j = 0; j < 5; j++) {
			zb = 0, b = 0;
			for (int i = 0; i < 10; i++)
			{
				if (*(p + razm + i) != 0)
					b++;
				zb += *(p + razm + i);
			}
			float pros = zb * 1.0 / b;
			razm += 10;
			prospred += round(pros); 
		}
		uk = prospred * 1.0 /5;
	}
}
//int raz[7][5][10] = { 0 };

//void ispisve()
//{
//	for (int z = 0; z < 7; z++) {
//		for (int j = 0; j < 5; j++) {
//			for (int i = 0; i < 10; i++)
//			{
//				cout << raz[z][j][i] << " ";
//			}
//			cout << endl;
//
//		}
//		cout << endl;
//		cout << endl;
//	}
//}
int main()
{
	int raz[7][5][10] = {
	{   // učenik 0
		{1,5,2,4,0,0,0,0,0,0},
		{3,3,5,0,0,0,0,0,0,0},
		{4,2,1,5,5,0,0,0,0,0},
		{2,4,0,0,0,0,0,0,0,0},
		{5,1,1,1,0,0,0,0,0,0}
	},
	{   // učenik 1
		{5,4,4,0,0,0,0,0,0,0},
		{2,1,3,2,0,0,0,0,0,0},
		{3,5,5,5,0,0,0,0,0,0},
		{1,1,0,0,0,0,0,0,0,0},
		{4,3,3,0,0,0,0,0,0,0}
	},
	{   // učenik 2
		{2,2,2,5,0,0,0,0,0,0},
		{3,4,1,1,1,0,0,0,0,0},
		{5,5,3,0,0,0,0,0,0,0},
		{4,4,4,0,0,0,0,0,0,0},
		{1,2,3,4,5,0,0,0,0,0}
	},
	{   // učenik 3
		{1,1,1,1,0,0,0,0,0,0},
		{5,2,2,2,0,0,0,0,0,0},
		{3,3,5,1,0,0,0,0,0,0},
		{4,4,0,0,0,0,0,0,0,0},
		{2,5,5,5,0,0,0,0,0,0}
	},
	{   // učenik 4
		{3,3,4,0,0,0,0,0,0,0},
		{1,2,5,4,3,0,0,0,0,0},
		{4,4,4,1,0,0,0,0,0,0},
		{2,3,3,0,0,0,0,0,0,0},
		{5,1,1,0,0,0,0,0,0,0}
	},
	{   // učenik 5
		{2,5,5,5,0,0,0,0,0,0},
		{4,1,1,1,0,0,0,0,0,0},
		{3,3,2,0,0,0,0,0,0,0},
		{5,5,4,0,0,0,0,0,0,0},
		{1,3,2,0,0,0,0,0,0,0}
	},
	{   // učenik 6
		{5,3,3,3,0,0,0,0,0,0},
		{2,4,4,4,0,0,0,0,0,0},
		{1,5,2,2,0,0,0,0,0,0},
		{3,1,1,1,0,0,0,0,0,0},
		{4,4,2,0,0,0,0,0,0,0}
	}
	};
	int napravi;
	cout << "Izbornik:" << endl;
	cout << "1) Upis ocjene" << endl;
	cout << "2) Ispis prosjek ocjena ucenika za odredeni predmet" << endl;
	cout << "3) Ispis prosjek predmeta za odredenog ucenika" << endl;
	cout << "4) Ispis opceg uspjeha svih ucenika" << endl;
	while (1)
	{

		cin >> napravi;
		if (napravi == 1) {
			int uc, pred, oc;
			cout << "ID ucenika: ";
			cin >> uc;
			cout << "ID predmeta: ";
			cin >> pred;
			cout << "Ocjena: ";
			cin >> oc;
			uc--;
			pred--;
			upis(&raz[0][0][0], uc, pred, oc);
			//ispisve();
		}
		else if (napravi == 2) {
			int uc, pred, oc;
			cout << "ID ucenika: ";
			cin >> uc;
			cout << "ID predmeta: ";
			cin >> pred;
			uc--;
			pred--;
			ispis(&raz[0][0][0], uc, pred);
		}
		else if (napravi == 3) {
			int uc, pred, oc;
			cout << "ID ucenika: ";
			cin >> uc;
			uc--;
			ispis2(&raz[0][0][0], uc);
		}
		else if (napravi == 4) {
			ispis3(&raz[0][0][0]);
		}
	}
}