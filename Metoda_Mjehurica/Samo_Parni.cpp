#include <iostream>
#include <stdio.h>
using namespace std;

int main3()
{
	int p[10] = { 10,9,8,7,6,5,4,3,2,1 };
	int n = 0;
	bool kraj = false;
	while (n < 10) 
	{
		for (int i = 0; i < 9; i++)
		{
			if (kraj == true)
			{
				break;
			}
			if (p[i] % 2 == 0)
			{
				for (int j = i+1; j < 9; j++)
				{
					if (p[j] % 2 == 0)
					{
						if (i == j)
						{
							break;
							kraj = true;
						}
						if (p[i] > p[j])
						{
							int pomoc = p[i];
							p[i] = p[j];
							p[j] = pomoc;
						}
						break;
					}

				}
			}
			
		}
		n++;
	}

	for (int i = 0; i < 10; i++)
	{
		cout << p[i] << " ";
	}
	return 0;
}
