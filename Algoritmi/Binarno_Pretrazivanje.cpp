#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
	int x = 25 + 1;
	int p[10] = { 1,3,6,8,9,10,15,20,25,26 };
	int d = 0;
	int g = 9;
	bool pronaden = false;
	while (1)
	{
		int s = (d + g) / 2;
		if (p[s] == x)
		{
			pronaden = true;
			break;
		}

		if (d > g)
		{
			break;
		}
		if (p[s] > x)
		{
			g = s - 1;
		}
		if (p[s] < x)
		{
			d = s + 1;
		}
	}
	cout << pronaden;
}