#include <iostream>
using namespace std;

int niz(char* p) {
    if (*p == 0) {
        return 0;
    }

    if (*p == 32) {
        return 1 + niz(p + 1);
    }

    return niz(p + 1);
}



int main()
{
    string p = "Dobar dan svima";
    cout << niz(&p[0]);
    return 0;
}