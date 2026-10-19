#include <iostream>
using namespace std;

int main() {
    double nilai;

    cout << "=== Konversi Nilai (Switch) ===" << endl;
    cout << "Masukkan nilai akhir (0-100): ";
    cin >> nilai;

    if (nilai < 0 || nilai > 100) {
        cout << "Nilai tidak valid! Harus antara 0 - 100." << endl;
        return 1;
    }

    switch (static_cast<int>(nilai) / 10) {
        case 10:
        case 9:
        case 8:
            cout << "Huruf Mutu: A" << endl;
            break;
        case 7:
            if (nilai >= 75) {
                cout << "Huruf Mutu: B+" << endl;
            } else {
                cout << "Huruf Mutu: B" << endl;
            }
            break;
        case 6:
            if (nilai >= 65) {
                cout << "Huruf Mutu: C+" << endl;
            } else {
                cout << "Huruf Mutu: C" << endl;
            }
            break;
        case 5:
        case 4:
            cout << "Huruf Mutu: D" << endl;
            break;
        default:
            cout << "Huruf Mutu: E" << endl;
            break;
    }

    return 0;
}