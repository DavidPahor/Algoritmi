#include <iostream>
using namespace std;

bool ispis(int n, int* p) {
    if (n == 0) {
        return false;
    }
    if (*p % 666 == 0) {
        return true;
    }
    return ispis(n - 1, p + 1);
}



int main()
{
    int p[10] = { 2,4,6,666,5,2 };
    int n = 5;
    cout << ispis(n, p);
    return 0;
}