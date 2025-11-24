#include <iostream>
using namespace std;

int najmanji(int* p, int n)
{
    int naj = *p;
    for (int i = 0; i < n; i++)
    {
        if (*p < naj)
            naj = *p;
        p++;
    }
    return naj;
}

int main3()
{
    int polje[10] = { 1,2,3,4,5,6,7,8,9,10 };
    cout << najmanji(polje, 10);
    return 0;
}
