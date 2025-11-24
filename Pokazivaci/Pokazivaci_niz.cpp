#include <iostream>
using namespace std;

int niz(char* p)
{
	int n1 = 0, n2 = 0;
	for (; *(p) != '\0'; p++)
	{
		if (*p == *(p + 1))
		{
			n1++;
		}
		else
		{
			n1++;
			if (n2 < n1)
				n2 = n1;
			n1 = 0;
		}
	}
	return n2;
}

int main2()
{
	string s = "abaaaababababdbfbcvdsbojbgjfsbsf";
	cout << niz(&s[0]);
	return 0;
}