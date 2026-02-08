#include <iostream>
using namespace std;

int ispis(int* p, int naj) {
    if (*p == 666) {
        return naj;
    }
    if (*p < naj) {
        naj = *p;
    }

    return ispis(p + 1, naj);
}



int main()
{
    int p[100] = { 2,3,666,1 };
    int naj = p[0];
    cout << ispis(p, naj);
    return 0;
}