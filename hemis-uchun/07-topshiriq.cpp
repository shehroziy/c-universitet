#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "raqam kiriting: "; cin >> n;

    int bir = 0, ikki = 1, k;
    cout << bir << " " << ikki << " ";

    k = bir + ikki;
    while (k <= n) {
        cout << k << " ";
        bir = ikki;
        ikki = k;
        k = bir + ikki;
    }

    return 0;
}

