#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
	int p[10][10];
	bool promjena = true;
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			p[i][j] = rand() % 200 - 100;
		}
	}
	while (1) {
		promjena = true;
		for (int i = 0; i < 9; i++)
		{
			if (p[i][0] > p[i + 1][0])
			{
				int pomoc = p[i + 1][0];
				p[i + 1][0] = p[i][0];
				p[i][0] = pomoc;
				promjena = false;
			}
		}
		if (promjena == true) 
		{
			break;
		}
	}


	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			cout << p[i][j] << " ";
		}
		cout << "\n";
	}
	return 0;
}