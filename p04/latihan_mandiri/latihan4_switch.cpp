#include <iostream>
using namespace std;

int main() {
    char pilihan;

    cout << "=== MENU UTAMA ===" << endl;
    cout << "1. Hitung Luas" << endl;
    cout << "2. Hitung Keliling" << endl;
    cout << "k. Keluar" << endl;
    cout << "Pilih menu (1/2/k): ";
    cin >> pilihan;

    switch (pilihan) {
        case '1':
            cout << "Anda memilih menu Hitung Luas." << endl;
            break;
        case '2':
            cout << "Anda memilih menu Hitung Keliling." << endl;
            break;
        case 'k':
        case 'K':
            cout << "Keluar dari program. Terima kasih!" << endl;
            break;
        default:
            cout << "Pilihan tidak valid!" << endl;
            break;
    }

    return 0;
}