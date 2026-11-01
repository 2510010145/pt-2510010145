#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main() {
    int jumlah_mhs = 0;
    
    // Membaca jumlah mahasiswa (minimal 1)
    do {
        cout << "Masukkan jumlah mahasiswa: ";
        cin >> jumlah_mhs;
    } while (jumlah_mhs < 1);

    // TODO 1: Atur cout supaya angka pecahan tampil dengan dua angka di belakang koma
    cout << fixed << setprecision(2);

    double total_nilai_kelas = 0;
    int jumlah_lulus = 0;

    // TODO 2: Deklarasikan lima penghitung huruf mutu (A, B, C, D, E) mulai dari 0
    int jumlah_a = 0, jumlah_b = 0, jumlah_c = 0, jumlah_d = 0, jumlah_e = 0;

    // TODO 3: Deklarasikan nilai tertinggi (mulai -1) dan nama tertinggi
    double nilai_tertinggi = -1;
    string nama_tertinggi = "";

    cout << "\n=== Input Data Mahasiswa ===\n";
    for (int i = 1; i <= jumlah_mhs; i++) {
        string nama;
        double t1, t2, t3, t4;
        
        cout << "\nMahasiswa ke-" << i << "\n";
        cout << "Nama        : ";
        cin.ignore();
        getline(cin, nama);
        cout << "Nilai 1,2,3,4: ";
        cin >> t1 >> t2 >> t3 >> t4;

        // Hitung nilai akhir (contoh bobot rata-rata atau sesuai versi sebelumnya)
        double nilai_akhir = (t1 + t2 + t3 + t4) / 4.0;

        // Penentuan huruf mutu & status lulus
        string huruf_mutu;
        bool lulus = false;

        if (nilai_akhir >= 80) {
            huruf_mutu = "A";
            lulus = true;
        } else if (nilai_akhir >= 70) {
            huruf_mutu = "B+";
            lulus = true;
        } else if (nilai_akhir >= 65) {
            huruf_mutu = "B";
            lulus = true;
        } else if (nilai_akhir >= 60) {
            huruf_mutu = "C+";
            lulus = true;
        } else if (nilai_akhir >= 55) {
            huruf_mutu = "C";
            lulus = true;
        } else if (nilai_akhir >= 40) {
            huruf_mutu = "D";
            lulus = false;
        } else {
            huruf_mutu = "E";
            lulus = false;
        }

        // TODO 4: Cetak satu baris berkolom rapi untuk setiap mahasiswa
        cout << "  " << left << setw(20) << nama 
             << right << setw(7) << nilai_akhir 
             << "  " << left << setw(3) << huruf_mutu 
             << (lulus ? "Lulus" : "Belum lulus") << "\n";

        // Akumulasi data kelas
        if (lulus) {
            jumlah_lulus++;
        }
        total_nilai_kelas += nilai_akhir;

        // TODO 5: switch untuk menambah penghitung huruf mutu berdasarkan huruf pertamanya
        switch (huruf_mutu[0]) {
            case 'A': jumlah_a++; break;
            case 'B': jumlah_b++; break;
            case 'C': jumlah_c++; break;
            case 'D': jumlah_d++; break;
            case 'E': jumlah_e++; break;
        }

        // TODO 6: Pola "ingat yang terbesar sejauh ini" untuk nilai tertinggi
        if (nilai_akhir > nilai_tertinggi) {
            nilai_tertinggi = nilai_akhir;
            nama_tertinggi = nama;
        }
    }

    // Hitung rata-rata kelas
    double rata_rata_kelas = (jumlah_mhs > 0) ? (total_nilai_kelas / jumlah_mhs) : 0;

    // TODO 7: Cetak Laporan Kelas
    cout << "\n=== Laporan Kelas ===\n";
    cout << "Jumlah mahasiswa : " << jumlah_mhs << "\n";
    cout << "Lulus            : " << jumlah_lulus << "\n";
    cout << "Belum lulus      : " << (jumlah_mhs - jumlah_lulus) << "\n";
    cout << "Rata-rata kelas  : " << rata_rata_kelas << "\n";
    cout << "Tertinggi        : " << nama_tertinggi << " (" << nilai_tertinggi << ")\n";

    // TODO 8 & 9: Perulangan bersarang untuk menampilkan sebaran huruf mutu dalam bentuk batang (#)
    cout << "Sebaran huruf mutu:\n";
    for (char huruf = 'A'; huruf <= 'E'; huruf++) {
        int banyak = 0;
        
        // Memasukkan nilai dari penghitung yang sesuai
        if (huruf == 'A') banyak = jumlah_a;
        else if (huruf == 'B') banyak = jumlah_b;
        else if (huruf == 'C') banyak = jumlah_c;
        else if (huruf == 'D') banyak = jumlah_d;
        else if (huruf == 'E') banyak = jumlah_e;

        cout << huruf << " ";
        
        // Perulangan dalam: mencetak karakter '#' sebanyak nilai 'banyak'
        for (int j = 1; j <= banyak; j++) {
            cout << "#";
        }
        cout << " " << banyak << "\n";
    }

    return 0;
}