#include <iostream>

using namespace std;

int main() {
    int x, y, x1, y1, x2, y2;
    cout << "Nuqta koordinatalarini kiriting x, y ";
    cin >> x >> y;
    cout << "To'rtburchakning chap burchagini koordinatalarini kiriting x1, y1 ";
    cin >> x1 >> y1;
    cout << "To'rtburchakning pastki burchagining koordinatalarini kiriting x2, y2 ";
    cin >> x2 >> y2;

    bool ichida = (x >= x1) && (x <= x2) && (y >= y1) && (y <= y2);

    cout << "Berilgan nuqta to'rtburchak ichida joylashgan " << ichida << endl;

    return 0;
}