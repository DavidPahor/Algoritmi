#include <stdio.h>
#include <iostream>
using namespace std;

void parni_van(int* p)
{
	int b = 0, k = 0, t = 0;
	bool sort = true;
	for (int i = 0; *(p + i) != '\0'; i++)
	{
		if (*(p + i) % 2 == 0)
		{
			*(p + i) = 0;
		}
		else
			b++;
	}
	while(k+1<b)
	{

		while (*(p + k) != 0)
			k++;
		t = k;
		while (*(p + t) == 0) {
			t++;
		}

		int pomocna = *(p + t);
		*(p + t) = *(p + k);
		*(p + k) = pomocna;


	}

}

int main11()
{
	int polje[7] = {2,4,8,15,3,12,0};
	parni_van(polje);
	for (int i = 0; polje[i]!=0; i++)
	{
		cout << polje[i];
	}
	return 0;
}