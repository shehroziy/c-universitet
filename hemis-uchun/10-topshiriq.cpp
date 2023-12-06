#include <iostream>
#include <string>
using namespace std;
void isim(const string& str) {
    bool m = false;

    for (char c : str) {
        if (m) {
            cout << c;
        }

        if (c == 'm' || c == 'M') {
            m = true;
        }
    }

    cout << endl;
}

int main() {
    string input;
    cout << "Isim kiriting: ";
    getline(std::cin, input);

    isim(input);

    return 0;
}

