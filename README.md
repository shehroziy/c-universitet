# UMFT DASTURIY INJINERLAR UCHUN C++ dasturlash tilidan masalalar javobi


'''

#include <iostream>
#include <cmath>

using namespace std;

int DigitN(int K, int N) {
    int numDigits = floor(log10(K)) + 1;

    if (N > numDigits) {
        return -1;
    }

    int digit = 0;
    for (int i = 0; i < N; i++) {
        digit = K % 10;
        K /= 10;
    }

    return digit;
}

int main() {
    int K, N;

    cout << "Enter the number K: ";
    cin >> K;

    cout << "Enter the digit position N: ";
    cin >> N;

    int digit = DigitN(K, N);

    cout << "The " << N << "-th digit of K is: " << digit << endl;

    return 0;
}


'''