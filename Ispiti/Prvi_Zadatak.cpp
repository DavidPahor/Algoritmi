#include <iostream>
#include <stdio.h>
using namespace std;

int main1()
{
    int p[100];
    for (int i = 0; i < 100; i++) 
    {
        p[i] = rand()%100;
    }
    int a, s, z;
    cin >> a >> s >> z;
    bool pronadi = false;
    for (int i = s; i < z; i++) 
    {
        if (p[i] == a) 
        {
            pronadi = true;
            break;
        }
    }
    cout << pronadi;
    return 0;
}