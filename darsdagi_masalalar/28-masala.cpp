#include <iostream>

using namespace std;

bool isPrime(int N) {
    if (N <= 1) {
        return false;
    }

    for (int i = 2; i * i <= N; i++) {
        if (N % i == 0) {
            return false;
        }
    }

    return true;
}

int main() {
    int k;
    cout << "Tekshirish uchun qiymatlar sonini kiriting: ";
    cin >> k;

    int count = 0;
    for (int i = 0; i < k; i++) {
        int num;
        cout << "raqam kiriting " << (i + 1) << ": ";
        cin >> num;

        if (isPrime(num)) {
            count++;
        }
    }

    cout << "Kiritilgan tub sonlar soni: " << count << endl;

    return 0;
}