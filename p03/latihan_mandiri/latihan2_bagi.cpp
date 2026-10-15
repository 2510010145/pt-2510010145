// Latihan 2: Menghitung hasil bagi dan sisa bagi dua bilangan bulat
#include <iostream>

using namespace std;

int main() {
    int a, b;
    cout << "Masukkan bilangan pertama (yang dibagi): ";
    cin >> a;
    cout << "Masukkan bilangan kedua (pembagi): ";
    cin >> b;

    int hasil_bagi = a / b;
    int sisa = a % b;

    cout << a << " dibagi " << b << " adalah " 
         << hasil_bagi << " sisa " << sisa << "\n";

    return 0;
}