#include <iostream>
#include <stdio.h>
#include <math.h>

using namespace std;

float povrsina() {
    float a, pov, b;
    char od;
    cin >> od;
    cin >> a;
    if (od == 'a') {
        pov = pow(a, 2) * 3.14;
    }
    else if (od == 'b') {
        cin >> b;
        pov = a * b;
    }
    else {
        pov = pow(a, 2);
    }
    return pov;
}

float zbroj() {
    int a, zb = 0;;
    cin >> a;
    while (a > 0)
    {
        zb += a % 10;
        a /= 10;
    }
    return zb;
}

float znamenke() {
    int a, b = 0;
    cin >> a;
    while (a > 0)
    {
        a /= 10;
        b++;
    }
    return b;
}

float rast() {
    int a, n, d = 10, b;
    cin >> a;
    bool rast = true;
    n = a;
    while (n > 0)
    {
        a = n % d;
        n /= 10;
        b = n % d;
        if (a < b) {
            rast = false;
            break;
        }
    }
    return rast;
}

int main1()
{
    cout << povrsina() << endl;
    cout << zbroj() << endl;
    cout << znamenke() << endl;
    cout << rast() << endl;
    return 0;
}