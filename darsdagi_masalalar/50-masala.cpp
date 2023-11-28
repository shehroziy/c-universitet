#include <iostream>
#include <iomanip>
using namespace std;

void TimeToHMS(int T, int& H, int& M, int& S) {
    H = T / 3600;
    T %= 3600;
    M = T / 60;
    S = T % 60;
}

int main() {
    int T = 400;
    int H, M, S;

    TimeToHMS(T, H, M, S);

    cout << setfill('0') << setw(2) << H << ":"
              << setfill('0') << setw(2) << M << ":"
              << setfill('0') << setw(2) << S << endl;

    return 0;
}