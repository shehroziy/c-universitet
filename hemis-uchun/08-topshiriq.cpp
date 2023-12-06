#include <iostream>
using namespace std;
int fibonachi(int n) {
    int a = 0, b = 1, c = 0;
    while (true) {
        c = a + b;
        if (c % n == 0) {
            return c;
        }
        a = b;
        b = c;
    }
}

int main() {
    int number;
    cout << "raqam kiriting: "; cin >> number;

    int fibonachi2 = fibonachi(number);
    cout << "karrali bo'lgan birinchi Fibonachchi raqami " << number << fibonachi2 << endl;

    return 0;
}

