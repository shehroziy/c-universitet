#include <iostream>
using namespace std;

void musbatButun (int a, int b) 
{
    if (a > b) {
        int c = a;
        a = b;
        b = c;
    }

    cout << "Butun va musbat sonlar ";
    for (int i = a; i <= b; ++i) 
    {
        if (i > 0) 
        {
            cout << i << " ";
        }
    }
}

int main() 
{
    int a, b;
    cout << "2 ta son kiriting: "; cin >> a >> b;

    musbatButun(a, b);

    return 0;
}