#include <iostream>

using namespace std;

void IncTime(int &H, int &M, int &S, int T) {
  S += T;
  while (S >= 60) {
    S -= 60;
    M++;
  }
  while (M >= 60) {
    M -= 60;
    H++;
  }
}

int main() {
  int H = 1;
  int M = 2;
  int S = 3;
  int T = 10000;

  IncTime(H, M, S, T);

  cout << H << ":" << M << ":" << S << endl;

  return 0;
}