#include <iostream>

// Funksiya N sonining palindrom bo'lishini tekshiradi
bool IsPalindrom(int N) {
    int originalNum = N;
    int reversedNum = 0;

    while (N > 0) {
        int digit = N % 10;
        reversedNum = reversedNum * 10 + digit;
        N /= 10;
    }

    return originalNum == reversedNum;
}

int main() {
    int palindromCount = 0;
    
    // 5 ta sondan nechtasi palindrom ekanligini aniqlovchi dastur
    for (int i = 10000; i < 100000; ++i) {
        if (IsPalindrom(i)) {
            std::cout << i << " palindrom son.\n";
            palindromCount++;
        }
    }

    std::cout << "Topilgan palindrom sonlar soni: " << palindromCount << std::endl;

    return 0;
}
