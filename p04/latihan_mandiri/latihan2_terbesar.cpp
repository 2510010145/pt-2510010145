#include <iostream>
using namespace std;

int main() {
    int a, b, c;

    cout << "=== Menentukan Bilangan Terbesar ===" << endl;
    cout << "Masukkan bilangan pertama : ";
    cin >> a;
    cout << "Masukkan bilangan kedua   : ";
    cin >> b;
    cout << "Masukkan bilangan ketiga  : ";
    cin >> c;

    if (a >= b && a >= c) {
        cout << "Bilangan terbesar adalah: " << a << endl;
    } else if (b >= a && b >= c) {
        cout << "Bilangan terbesar adalah: " << b << endl;
    } else {
        cout << "Bilangan terbesar adalah: " << c << endl;
    }

    return 0;
}