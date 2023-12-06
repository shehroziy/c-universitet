#include <iostream>
#include <string>
using namespace std;
string append(const string& input) {
    if (input.empty()) {
        return input;
    }

    char oxirgi = input.back();
    string newString = oxirgi + input;
    return newString;
}

int main() {
    string input;
    cout << "raqam kiriting: ";
    cin >> input;

    string newString = append(input);
    cout << "Yangi string: " << newString << std::endl;

    return 0;
}

