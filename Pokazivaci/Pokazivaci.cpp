#include <stdio.h>
#include <iostream>
using namespace std;

int zbroj(int* p, int n)
{
	int zb = 0;
	for (int i = 0; i < n; i++)
	{
		zb += *p;
		p++;
	}
	return zb;
}

int main1()
{
	int polje[10] = { 1,2,3,4,5,6,7,8,9,0 };
	cout << zbroj(&polje[0], 10);
	return 0;
}