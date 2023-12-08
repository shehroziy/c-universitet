#include <bits/stdc++.h>
using namespace std;
main()
{
    long long n, ymlrd, omlrd, mlrd, mln, m, y, b, o, ymln, omln, ym, om;
    cin >> n;
 
    ymlrd = n / 100000000000;
    omlrd = n / 10000000000 % 10;
    mlrd = n / 1000000000 % 10;
    ymln = n / 100000000 % 10;
    omln = n / 10000000 % 10;
    mln = n / 1000000 % 10;
    ym = n / 100000 % 10;
    om = n / 10000 % 10;
    m = n / 1000 % 10;
    y = n / 100 % 10;
    o = n / 10 % 10;
    b = n % 10;
 
    switch (ymlrd)
 
    {
    case 1:
        cout << "bir yuz ";
        break;
    case 2:
        cout << "ikki yuz ";
        break;
    case 3:
        cout << "uch yuz ";
        break;
    case 4:
        cout << "to'rt yuz ";
        break;
    case 5:
        cout << "besh yuz ";
        break;
    case 6:
        cout << "olti yuz ";
        break;
    case 7:
        cout << "yetti yuz ";
        break;
    case 8:
        cout << "sakkiz yuz ";
        break;
    case 9:
        cout << "to'qqiz yuz ";
        break;
    }
 
    switch (omlrd)
 
    {
    case 1:
        cout << "o'n ";
        break;
    case 2:
        cout << "yigirma ";
        break;
    case 3:
        cout << "o'ttiz ";
        break;
    case 4:
        cout << "qirq ";
        break;
    case 5:
        cout << "ellik ";
        break;
    case 6:
        cout << "oltmish ";
        break;
    case 7:
        cout << "yetmish ";
        break;
    case 8:
        cout << "sakson ";
        break;
    case 9:
        cout << "to'qson ";
        break;
    }
    switch (mlrd)
 
    {
    case 1:
        cout << "bir milliard ";
        break;
    case 2:
        cout << "ikki milliard ";
        break;
    case 3:
        cout << "uch milliard ";
        break;
    case 4:
        cout << "to'rt milliard ";
        break;
    case 5:
        cout << "besh milliard ";
        break;
    case 6:
        cout << "olti milliard ";
        break;
    case 7:
        cout << "yetti milliard ";
        break;
    case 8:
        cout << "sakkiz milliard ";
        break;
    case 9:
        cout << "to'qqiz milliard ";
        break;
    case 0:
        if (n > 999999999)
            cout << "milliard ";
        break;
    }
 
    switch (ymln)
    {
    case 1:
        cout << "bir yuz ";
        break;
    case 2:
        cout << "ikki yuz ";
        break;
    case 3:
        cout << "uch yuz ";
        break;
    case 4:
        cout << "to'rt yuz ";
        break;
    case 5:
        cout << "besh yuz ";
        break;
    case 6:
        cout << "olti yuz ";
        break;
    case 7:
        cout << "yetti yuz ";
        break;
    case 8:
        cout << "sakkiz yuz ";
        break;
    case 9:
        cout << "to'qqiz yuz ";
        break;
    }
 
    switch (omln)
    {
    case 1:
        cout << "o'n ";
        break;
    case 2:
        cout << "yigirma ";
        break;
    case 3:
        cout << "o'ttiz ";
        break;
    case 4:
        cout << "qirq ";
        break;
    case 5:
        cout << "ellik ";
        break;
    case 6:
        cout << "oltmish ";
        break;
    case 7:
        cout << "yetmish ";
        break;
    case 8:
        cout << "sakson ";
        break;
    case 9:
        cout << "to'qson ";
        break;
    }
    switch (mln)
    {
    case 1:
        cout << "bir million ";
        break;
    case 2:
        cout << "ikki million ";
        break;
    case 3:
        cout << "uch million ";
        break;
    case 4:
        cout << "to'rt million ";
        break;
    case 5:
        cout << "besh million ";
        break;
    case 6:
        cout << "olti million ";
        break;
    case 7:
        cout << "yetti million ";
        break;
    case 8:
        cout << "sakkiz million ";
        break;
    case 9:
        cout << "to'qqiz million ";
        break;
    case 0:
        if (n > 999999)
            cout << "million ";
        break;
    }
 
    switch (ym)
    {
    case 1:
        cout << "bir yuz ";
        break;
    case 2:
        cout << "ikki yuz ";
        break;
    case 3:
        cout << "uch yuz ";
        break;
    case 4:
        cout << "to'rt yuz ";
        break;
    case 5:
        cout << "besh yuz ";
        break;
    case 6:
        cout << "olti yuz ";
        break;
    case 7:
        cout << "yetti yuz ";
        break;
    case 8:
        cout << "sakkiz yuz ";
        break;
    case 9:
        cout << "to'qqiz yuz ";
        break;
    }
 
    switch (om)
    {
    case 1:
        cout << "o'n ";
        break;
    case 2:
        cout << "yigirma ";
        break;
    case 3:
        cout << "o'ttiz ";
        break;
    case 4:
        cout << "qirq ";
        break;
    case 5:
        cout << "ellik ";
        break;
    case 6:
        cout << "oltmish ";
        break;
    case 7:
        cout << "yetmish ";
        break;
    case 8:
        cout << "sakson ";
        break;
    case 9:
        cout << "to'qson ";
        break;
    }
 
    switch (m)
    {
    case 1:
        cout << "bir ming ";
        break;
    case 2:
        cout << "ikki ming ";
        break;
    case 3:
        cout << "uch ming ";
        break;
    case 4:
        cout << "to'rt ming ";
        break;
    case 5:
        cout << "besh ming ";
        break;
    case 6:
        cout << "olti ming ";
        break;
    case 7:
        cout << "yetti ming ";
        break;
    case 8:
        cout << "sakkiz ming ";
        break;
    case 9:
        cout << "to'qqiz ming ";
        break;
    case 0:
        if (n > 999)
            cout << "ming ";
        break;
    }
 
    switch (y)
    {
    case 1:
        cout << "bir yuz ";
        break;
    case 2:
        cout << "ikki yuz ";
        break;
    case 3:
        cout << "uch yuz ";
        break;
    case 4:
        cout << "to'rt yuz ";
        break;
    case 5:
        cout << "besh yuz ";
        break;
    case 6:
        cout << "olti yuz ";
        break;
    case 7:
        cout << "yetti yuz ";
        break;
    case 8:
        cout << "sakkiz yuz ";
        break;
    case 9:
        cout << "to'qqiz yuz ";
        break;
    }
 
    switch (o)
    {
    case 1:
        cout << "o'n ";
        break;
    case 2:
        cout << "yigirma ";
        break;
    case 3:
        cout << "o'ttiz ";
        break;
    case 4:
        cout << "qirq ";
        break;
    case 5:
        cout << "ellik ";
        break;
    case 6:
        cout << "oltmish ";
        break;
    case 7:
        cout << "yetmish ";
        break;
    case 8:
        cout << "sakson ";
        break;
    case 9:
        cout << "to'qson ";
        break;
    }
 
    switch (b)
    {
    case 1:
        cout << "bir  ";
        break;
    case 2:
        cout << "ikki ";
        break;
    case 3:
        cout << "uch  ";
        break;
    case 4:
        cout << "to'rt ";
        break;
    case 5:
        cout << "besh ";
        break;
    case 6:
        cout << "olti ";
        break;
    case 7:
        cout << "yetti ";
        break;
    case 8:
        cout << "sakkiz ";
        break;
    case 9:
        cout << "to'qqiz ";
        break;
    case 0:
        cout << " ";
        break;
    }
}
