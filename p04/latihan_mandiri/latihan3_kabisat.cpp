#include <iostream>
using namespace std;

int main() {
    int tahun;

    cout << "=== Pengecekan Tahun Kabisat ===" << endl;
    cout << "Masukkan tahun: ";
    cin >> tahun;

    if ((tahun % 4 == 0 && tahun % 100 != 0) || (tahun % 400 == 0)) {
        cout << tahun << " adalah Tahun Kabisat." << endl;
    } else {
        cout << tahun << " BUKAN Tahun Kabisat." << endl;
    }

    return 0;
}