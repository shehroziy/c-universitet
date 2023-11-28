#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

double DegToRad(double D) {
    if (D <= 0 || D >= 360) {
        return 0;
    }

    double radians = D * (M_PI / 180.0);
    return round(radians * 1000) / 1000;
}

int main() {
    double angle;
    cout << "Burchakni daraja bilan kiritings: ";
    cin >> angle;

    double radian = DegToRad(angle);

    cout << fixed << setprecision(3);
    cout << "Radian qiymati " << angle << " daraja: " << radian << endl;

    return 0;
}