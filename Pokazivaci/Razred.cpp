#include <stdio.h>
#include <iostream>
using namespace std;


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
int razmak(int uc, int pred)
{
	int razma;
	razma = uc*50+pred*10;
	return razma;
}

int upis(int* p, int uc, int pred, int oc)
{
	int razm = razmak(uc, pred);
	for (int i = 0; i < razm; i++) 
	{
		p++;
	}

	while (*p != 0)
		p++;

	*p = oc;
	return 0;
}

float ispis(int* p, int uc, int pred)
{
	float b = 0, zb = 0;
	int razm = razmak(uc, pred);

	for (int i = 0; i < razm; i++)
	{
		p++;
	}
	for (int i = 0; i < 10; i++)
	{
		if (*p != 0)
			b++;
		zb += *p;
		p++;

	}
	float pros = zb / b;
	return pros;
}

float ispis2(int* p, int uc)
{
	float b = 0, zb = 0;
	int razm = razmak(uc,0);
	for (int i = 0; i < razm; i++)
	{
		p++;
	}
	for (int i = 0; i < 5; i++)
	{
		int s = 10;
		b = 0;
		zb = 0;
		while (*p != 0)
		{
			zb += *p;
			p++;
			b++;
			s--;
			if (s == 0)
				break;
		}
		for (; s != 0; s--)
			p++;
		float pros = zb / b;
		cout << pros << endl;
	}
	return 0;
}

float ispis3(int* p)
{
	float b = 0, zb = 0, finalpros;
	for (int i = 0; i < 7; i++){
		finalpros = 0;
		for (int j = 0; j < 5; j++)
		{
			int s = 10;
			b = 0;
			zb = 0;
			while (*p != 0)
			{
				zb += *p;
				p++;
				b++;
				s--;
			}
			for (; s != 0; s--)
				p++;
			float pros = round(zb / b);
			finalpros += pros/5;
		}
		cout << finalpros << endl;

	}
	return 0;
}
int main()
{
	int napravi;
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
		}
		else if (napravi == 2) {
			int uc, pred, oc;
			cout << "ID ucenika: ";
			cin >> uc;
			cout << "ID predmeta: ";
			cin >> pred;
			uc--;
			pred--;
			cout << ispis(&raz[0][0][0], uc, pred) << endl;
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