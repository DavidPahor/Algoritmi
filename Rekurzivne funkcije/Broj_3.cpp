#include <iostream>
using namespace std;

bool broj(int n)
{
    if (n / 10 <= 0)
    {
        if (n == 3)
            return 1;
        else
            return 0;
    }
    return broj(n / 10);
}

int main() {
    int br;
    cin >> br;
    cout << broj(br);
    return 0;
}