#include <iostream>
using namespace std;

int main4()
{
    string bezRazmaka = "nestojedanaslijepisuncandan";
    bool sort = true;
    while (1) {
        bool sort = true;
        for (int i = 0; bezRazmaka[i + 1] != '\0'; i++) {
            if (bezRazmaka[i] > bezRazmaka[i + 1])
            {
                int pomoc = bezRazmaka[i];
                bezRazmaka[i] = bezRazmaka[i + 1];
                bezRazmaka[i + 1] = pomoc;
                sort = false;
            }
        }
        if (sort) {
            break;
        }
    }
    cout << bezRazmaka;
}
