#include <stdio.h>
#include <iostream>
using namespace std;

void promjeni(char* p1, int n, string ubaci)
{
	string prvi;
	string drugi;
	for (int i = 0; i < n; i++)
	{
		prvi += *(p1 + i);
	}
	for (int i = n; *(p1 + i) != '\0'; i++)
	{
		drugi += *(p1 + i);
	}
	string promjeni = prvi + ubaci + drugi;
}

int main()
{
	string p1 = "Dobardan";
	string p2 = "Test";
	promjeni(&p1[0], 3, p2);
	return 0;
}