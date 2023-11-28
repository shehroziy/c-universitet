#include <iostream>

using namespace std;

int IsLeapYear(int year) {
    if (year % 400 == 0) {
        return true;
    } else if (year % 100 == 0) {
        return false;
    } else if (year % 4 == 0) {
        return true;
    } else {
        return false;
    }
}

int MonthDays(int M, int Y) {
    if (M == 1 || M == 3 || M == 5 || M == 7 || M == 8 || M == 10 || M == 12) {
        return 31;
    } else if (M == 4 || M == 6 || M == 9 || M == 11) {
        return 30;
    } else {
        if (IsLeapYear(Y)) {
            return 29;
        } else {
            return 28;
        }
    }
}

int main() {
    int M1, M2, M3;
    int Y;

    cout << "Yilni kiriting: ";
    cin >> Y;

    cout << "Birinchi oyni kiriting: ";
    cin >> M1;

    cout << "Ikkinchi oyni kiriting: ";
    cin >> M2;

    cout << "Uchinchi oyni kiriting: ";
    cin >> M3;

    int totalDays = MonthDays(M1, Y) + MonthDays(M2, Y) + MonthDays(M3, Y);
    cout << "Berilgan oylardagi kunlarning umumiy soni: " << totalDays << endl;

    return 0;
}