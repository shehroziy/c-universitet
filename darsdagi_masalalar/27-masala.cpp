#include <iostream>
#include <cmath>

using namespace std;

bool sPowerN(int K, int N) {
    int power = 1;
    while (power <= K) {
        if (power == K) {
            return true;
        }
        power *= N;
    }
    return false;
}

int main() {
    int N, count = 0;
    cout << "N kiriting: ";
    cin >> N;

    for (int i = 1; i <= 5; i++) {
        int K;
        cout << "Raqamni kiriting " << i << ": ";
        cin >> K;

        if (sPowerN(K, N)) {
            count++;
        }
    }

    cout << "Raqam darajasi " << N << ": " << count << endl;

    return 0;
}