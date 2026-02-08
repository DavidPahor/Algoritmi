#include <iostream>
using namespace std;

void ispis(int n) {
	if (n < 0) {
		return;
	}
	cout << n << endl;
	ispis(n - 1);

}


int main()
{
	int n;
	cin >> n;
	ispis(n);
	return 0;
}