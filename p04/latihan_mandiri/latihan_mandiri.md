# Laporan Latihan Mandiri P04 - Percabangan dan Operator Logika

**Nama:** Muhammad Nazmi Noor Abdhie  
**NPM:** *2510010145*  
**Kelas:** 3B TI Reguler Pagi Banjarbaru  
**Mata Kuliah:** Pemrograman Terstruktur  

---

## Latihan 1: Flowchart Tujuh Tingkat Huruf Mutu
* **Instruksi:** Gambar flowchart lengkap TODO 1 (tujuh tingkat huruf mutu) di kertas, foto, dan simpan bersama kodemu. Bandingkan dengan Gambar 4: apa yang berulang?
* **Analisis & Jawaban:** 
  Pola struktur percabangan (`if-else` bertingkat) yang berulang adalah pengecekan kondisi batas nilai menggunakan simbol belah ketupat (`nilai >= batas`) yang diikuti oleh proses penentuan huruf mutu jika kondisi bernilai Ya, dan dilanjutkan ke pengecekan batas nilai berikutnya jika bernilai Tidak.

![Flowchart Latihan 1](latihan1_flowchart.jpg)

---

## Latihan 2: Menentukan Bilangan Terbesar dari 3 Masukan
* **Instruksi:** Tulis program yang membaca tiga bilangan dan mencetak yang terbesar. Gambar flowchart-nya dulu; ada lebih dari satu cara.

### Kode Program (`latihan2_terbesar.cpp`)
```cpp
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