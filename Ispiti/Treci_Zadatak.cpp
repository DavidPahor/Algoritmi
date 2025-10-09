#include <iostream>
#include <stdio.h>
using namespace std;

int main3()
{
    int p[100];
    int k, n, t;
    int zb = 0;
    cin >> n;
    for (int k = 0; k < 3; k++)
    {
        t = k;
        n = k;
        for (int t = 0; t < 99; t++)
        {
            if (p[n] > p[t]) {
                n = t;
            }
        }
        int pomoc = p[k];
        p[k] = p[n];
        p[n] = pomoc;
    }
    for (int i = 0; i < n; i++)
    {
        zb += p[99 - i];
    }
    cout << zb;
}