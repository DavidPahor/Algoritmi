#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    int p[20] = {};
    int k, t, n;

    for (int i = 0; i < 20; i++)
        p[i] = rand() % 100;

    for (k = 0; k < 20; k++) {

        n = k;
        t = k;

        for (t; t < 20; t++) {

            if (p[t] < p[n])
                n = t;


            int pomoc;
            pomoc = p[k];
            p[k] = p[n];
            p[n] = pomoc;
        }

        cout << p[k] << " ";
    }
}