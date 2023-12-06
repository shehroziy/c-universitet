#include <iostream>
using namespace std;
int main() {
    int a, b;
    cout << "raqam kiriting "; cin >> a;
    cout << "ikkinchi raqam "; cin >> b;

    for (int i = a; i <= b; i++) {
        for (int j = 1; j <= i; j++) {
            cout << i;
        }
    }

    return 0;
}

