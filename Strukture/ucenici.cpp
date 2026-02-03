#include <iostream>
using namespace std;

struct ucenik
{
	string ime;
	string prezime;
	int godina;
};

void sort_g(int n, ucenik* r)
{
	int p;
	for (int i = 0; i < n; i++) 
	{
		cout << endl;
		p = i;
		for (int j = i; j < n; j++) 
		{
			if ((*(r + i)).godina > (*(r + j)).godina)
				p = j;
		}
		int pom = (*(r + p)).godina;
		(*(r + p)).godina = (*(r + i)).godina;
		(*(r + i)).godina = pom;
	}
}

void sort_p(int n, ucenik* r)
{
	int p;
	for (int i = 0; i < n; i++)
	{
		cout << endl;
		p = i;
		for (int j = i; j < n; j++)
		{
			if ((*(r + i)).prezime[0] > (*(r + j)).prezime[0])
				p = j;
		}
		string pom = (*(r + p)).prezime;
		(*(r + p)).prezime = (*(r + i)).prezime;
		(*(r + i)).prezime = pom;
	}
}


void ispis(int n, ucenik *r)
{
	sort_g(n, r);
	for (int i = 0; i < 3; i++)
	{
		cout << (*(r + i)).ime;
		cout << (*(r + i)).prezime;
		cout << (*(r + i)).godina;
		cout << endl;
	}
	sort_p(n, r);

}

int main()
{
	int n;
	ucenik raz[100];
	cin >> n;
	for (int i = 0; i < n; i++) 
	{
		cin >> raz[i].ime;
		cin >> raz[i].prezime;
		cin >> raz[i].godina;
		cout << endl;
	}
	ispis(n,raz);
}