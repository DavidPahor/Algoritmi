#include <iostream>
#include <stdio.h>
using namespace std;
int main4()
{
	string bezRazmaka = "nestojedanaslijepisuncandan";
	bool sortirano = false;
	while (1)
	{
		sortirano = true;
		for (int i = 0; bezRazmaka[i + 1 + 1] != '\0'; i++)
		{
			if (bezRazmaka[i] > bezRazmaka[i + 1])
			{
				int pomoc = bezRazmaka[i];
				bezRazmaka[i] = bezRazmaka[i + 1];
				bezRazmaka[i + 1] = pomoc;
				sortirano = false;
			}
		}
		if (sortirano = true)
		{
			break;
		}
	}

	for (int i = 0; bezRazmaka[i] != '\0'; i++)
	{
		cout << bezRazmaka[i];
	}
	return 0;
}