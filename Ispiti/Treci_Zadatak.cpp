#include <iostream>
#include <stdio.h>
using namespace std;

int main3()
{
    int p[100];
    int n;
    int zb = 0;
    cin >> n;
    bool sort = true;

    while (1)
    {
        sort = true;
        for (int i = 0; i < 99; i++) 
        {
            if (p[i] > p[i + 1]) {
                int pomoc = p[i + 1];
                p[i + 1] = p[i];
                p[i] = pomoc;
                sort = false;
            }
        }
        if (sort == true)
            break;
    }
    for (int i = 0; i < n; i++)
    {
        zb += p[99-i];
    }
    cout << zb;
    return 0;
}