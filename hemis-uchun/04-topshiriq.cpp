#include <iostream>
#include <string>

using namespace std;

string aylanmaSoz(int number) {
    string soz;

    if (number < 0 || number > 99) {
        soz = "bunday yoshga siz juda keksaygan bobo yoki onasiz";
    } else if (number < 20) {
        string birlar[] = {"nol", "bir", "ikki", "uch", "to'rt", "besh", "olti", "yetti", "sakkiz", "to'qqiz", "o'n",
                         "o'n bir", "o'n ikki", "o'n uch", "o'n to'rt", "o'n besh", "o'n olti", "o'n yetti", "o'n sakkiz", "o'n to'qqiz"};
        soz = birlar[number];
    } else {
        string onlab[] = {"", "", "yigirma", "o'ttiz", "qirq", "ellik", "oltmish", "yetmish", "sakson", "to'qson"};
        string birlar[] = {"", "-bir", "-ikki", "-uch", "-to'rt", "-besh", "-olti", "-yetti", "-sakkiz", "-to'qqiz"};
        soz = onlab[number / 10] + birlar[number % 10];
    }

    return soz;
}

int main() {
    int yosh;

    cout << "yosh kiriting: ";
    cin >> yosh;

    string yoshdagiSozlar = aylanmaSoz(yosh);

    cout << yoshdagiSozlar << endl;

    return 0;
}

