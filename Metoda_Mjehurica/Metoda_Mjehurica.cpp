#include <iostream>
#include <stdio.h>
using namespace std;

int main2()
{
    int p[10] = { 1,6,3,8,8,1,0,5,1243,5745 };
    int n = 0;
    while (n < 10)
    {
        for (int i = 0; i < 9; i++)
        {
            if (p[i] > p[i + 1])
            {
                int pomoc = p[i];
                p[i] = p[i + 1];
                p[i + 1] = pomoc;
            }
        }
        n++;
    }
    for (int i = 0; i < 10; i++)
    {
        cout << p[i] << " ";
    }
    return 0;
}
