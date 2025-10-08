#include <iostream>
#include <stdio.h>
using namespace std;

int main2()
{
    int p[300];
    int a = 199;
    int d = 99;
    int g = 199;
    bool pronadi = false;
    while (1) 
    {
        int s = (d + g) / 2;
        if (p[s] == a) 
        {
            pronadi = true;
            break;
        }
        if (d>g)
        {
            break;
        }
        if (p[s] > a) 
        {
            g = s - 1;
        }

        if (p[s] < a)
        {
            d = s + 1;
        }
    }
    cout << pronadi;
    return 0;
}