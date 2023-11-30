#include <iostream>
using namespace std;

int main() {
    int num1, num2, num3, num4;

    cout << "To'rtta raqamni kiriting: ";
    cin >> num1 >> num2 >> num3 >> num4;

    if (num1 < num2 && num1 < num3 && num1 < num4) {
        cout << "Tartib raqami " << num1 << " hisob raqami 1" << endl;
    }
    else if (num2 < num1 && num2 < num3 && num2 < num4) {
        cout << "Tartib raqami " << num2 << " hisob raqami 1" << endl;
    }
    else if (num3 < num1 && num3 < num2 && num3 < num4) {
        cout << "Tartib raqami " << num3 << " hisob raqami 1" << endl;
    }
    else if (num4 < num1 && num4 < num2 && num4 < num3) {
        cout << "Tartib raqami " << num4 << " hisob raqami 1" << endl;
    }
    else if (num1 > num2 && num1 > num3 && num1 > num4) {
        cout << "Tartib raqami " << num1 << " hisob raqami 4" << endl;
    }
    else if (num2 > num1 && num2 > num3 && num2 > num4) {
        cout << "Tartib raqami " << num2 << " hisob raqami 4" << endl;
    }
    else if (num3 > num1 && num3 > num2 && num3 > num4) {
        cout << "Tartib raqami " << num3 << " hisob raqami 4" << endl;
    }
    else if (num4 > num1 && num4 > num2 && num4 > num3) {
        cout << "Tartib raqami " << num4 << " hisob raqami 4" << endl;
    }
    else {
        cout << "Qolgan uchta raqamning tartib raqami 2 yoki 3 ga teng" << endl;
    }

    return 0;
}
