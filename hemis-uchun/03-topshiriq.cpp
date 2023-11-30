#include <iostream>

using namespace std;

int main() {
    int number;

    cout << "Butun raqamni kiriting: ";
    cin >> number;

    if (number > 0) {
        if (number % 2 == 0) {
            cout << "+ juft son" << endl;
        } else {
            cout << "- toq raqam" << endl;
        }
    } else if (number < 0) {
        cout << "Salbiy" << endl;
    } else {
        cout << "Nol" << endl;
    }

    return 0;
}

