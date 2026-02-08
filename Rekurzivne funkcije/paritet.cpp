#include <iostream>
using namespace std;

int paritet(bool* p, int n) {
    if (n == 0) {
        return 0;
    }

    if (*p == 1)
        return 1 + paritet(p + 1, n - 1);
    else
        return  paritet(p + 1, n - 1);
}




int main()
{
    bool p[100] = { 1,0,1,1,0,1,0 };
    int n = 3;
    if (paritet(p, n - 1) % 2 == 0)
        cout << 0;
    else
        cout << 1;

    return 0;
}