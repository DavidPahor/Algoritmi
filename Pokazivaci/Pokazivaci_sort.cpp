#include <stdio.h>
#include <iostream>
using namespace std;

void sort(int* p, int n)
{	
	bool slozeno;
	while (1) {
		slozeno = true;
		for (int i = 0; i < n - 1; i++) {

			if (*(p+i) > *(p+1+i))
			{
				int pomoc = *(p+i);
				*(p+i) = *(p + 1+i);
				*(p + 1+i) = pomoc;

				slozeno = false;
			}

		}
		if (slozeno)
			break;
	}
}

int main()
{
	int polje[10] = { 10,9,8,7,6,5,4,3,2,1 };
	sort(&polje[0], 10);
	return 0;
}