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
  } else {  // M == 2
    if (IsLeapYear(Y)) {
      return 29;
    } else {
      return 28;
    }
  }
}

void PrevDate(int D, int& M, int& Y) {
  if (D > 1) {
    D--;
  } else {
    if (M == 1) {
      Y--;
      M = 12;
      D = MonthDays(M, Y);
    } else {
      M--;
      D = MonthDays(M, Y);
    }
  }
}

int main() {
  int D1, D2, D3;
  int M1, M2, M3;
  int Y1, Y2, Y3;

  cout << "Birinchi sanani kiriting (D M Y): ";
  cin >> D1 >> M1 >> Y1;

  PrevDate(D1, M1, Y1);

  cout << "Birinchi sana uchun oldingi sana: " << D1 << " " << M1 << " " << Y1 << endl;

  cout << "Ikkinchi sanani kiriting (D M Y): ";
  cin >> D2 >> M2 >> Y2;

  PrevDate(D2, M2, Y2);

  cout << "Ikkinchi sana uchun oldingi sana: " << D2 << " " << M2 << " " << Y2 << endl;

  cout << "Uchinchi sanani kiriting (D M Y): ";
  cin >> D3 >> M3 >> Y3;

  PrevDate(D3, M3, Y3);

  cout << "Uchinchi sana uchun oldingi sana: " << D3 << " " << M3 << " " << Y3 << endl;

  return 0;
}