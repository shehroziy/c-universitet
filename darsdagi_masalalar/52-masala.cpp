#include <iostream>

using namespace std;

bool IsLeapYear(int year) {
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

int main() {
  int year;

  cout << "Yilni kiriting: ";
  cin >> year;

  if (IsLeapYear(year)) {
    cout << year << " kabisa yilidir." << endl;
  } else {
    cout << year << "kabisa yili emas." << endl;
  }

  return 0;
}