#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    string s = "";
    int n = 0;

    while (n<3)
    {
        for (int i = 0; s[i+1] !='\0'; i++)
        {
            if (s[i] > s[i + 1]) {
                int pomoc = s[i + 1];
                s[i + 1] = s[i];
                s[i] = pomoc;
            }
        }
        n++;
    }
    cout << s[97] << s[98] << s[99];
    return 0;
}