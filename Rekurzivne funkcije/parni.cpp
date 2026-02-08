#include <iostream>
using namespace std;

int parni(int n) 
{
	if ((n%10) % 2 != 0) {
		return 0;
	}
	else if (n/10<=0) {
		return 1;
	}
	return parni(n / 10);
}


int main()
{
	int n;
	cin >> n;
	cout << parni(n);
	return 0;
}