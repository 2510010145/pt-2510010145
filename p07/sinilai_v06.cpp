#include <iostream>
#include <iomanip>
#include <string>
#include <cctype>

using namespace std;

int main() {
    int jumlah_mhs = 0;
    
    // Atur cout supaya angka pecahan tampil dengan dua angka di belakang koma
    cout << fixed << setprecision(2);

    // TODO 1: Membaca jumlah mahasiswa dengan aman
    do {
        cout << "Jumlah mahasiswa (paling sedikit 1): ";
        cin >> jumlah_mhs;
        while (cin.fail() || jumlah_mhs < 1) {
            cin.clear();
            cin.ignore(1000, '\n');
            cout << "Input tidak valid. Jumlah mahasiswa (paling sedikit 1): ";
            cin >> jumlah_mhs;
        }
    } while (jumlah_mhs < 1);

    cin.ignore(1000, '\n'); // Membuang sisa baris setelah angka agar getline nama aman

    double total_nilai_kelas = 0;
    int jumlah_lulus = 0;

    int jumlah_a = 0, jumlah_b = 0, jumlah_c = 0, jumlah_d = 0, jumlah_e = 0;
    double nilai_tertinggi = -1;
    string nama_tertinggi = "";

    cout << "\n=== Input Data Mahasiswa ===\n";
    for (int i = 1; i <= jumlah_mhs; i++) {
        string nama;
        double kehadiran = 0, mingguan = 0, uts = 0, uas = 0;
        
        cout << "\n--- Mahasiswa ke-" << i << " dari " << jumlah_mhs << " ---\n";
        
        // TODO 2: Validasi Nama (Tidak boleh kosong/spasi saja, tidak boleh ada angka)
        bool nama_sah = false;
        do {
            cout << "Nama        : ";
            getline(cin, nama);
            
            int panjang = nama.length();
            bool ada_huruf = false;
            bool ada_angka = false;

            for (int k = 0; k < panjang; k++) {
                if (nama[k] != ' ') {
                    ada_huruf = true;
                }
                if (isdigit(nama[k])) {
                    ada_angka = true;
                }
            }

            if (!ada_huruf) {
                cout << "Nama tidak boleh kosong.\n";
            } else if (ada_angka) {
                cout << "Nama tidak boleh mengandung angka.\n";
            } else {
                nama_sah = true;
            }
        } while (!nama_sah);

        // TODO 3: Merapikan Nama (Huruf Besar Di Awal Kata)
        int panjang_nama = nama.length();
        bool awal_kata = true;
        for (int k = 0; k < panjang_nama; k++) {
            if (nama[k] == ' ') {
                awal_kata = true;
            } else if (awal_kata) {
                nama[k] = toupper(nama[k]);
                awal_kata = false;
            } else {
                nama[k] = tolower(nama[k]);
            }
        }

        // TODO 4: Membaca kehadiran dengan aman
        cout << "Kehadiran   : ";
        cin >> kehadiran;
        while (cin.fail() || kehadiran < 0 || kehadiran > 100) {
            cin.clear();
            cin.ignore(1000, '\n');
            cout << "Harus angka 0 sampai 100. Kehadiran : ";
            cin >> kehadiran;
        }

        // TODO 5: Membaca mingguan, uts, uas dengan aman
        cout << "Mingguan    : ";
        cin >> mingguan;
        while (cin.fail() || mingguan < 0 || mingguan > 100) {
            cin.clear();
            cin.ignore(1000, '\n');
            cout << "Harus angka 0 sampai 100. Mingguan : ";
            cin >> mingguan;
        }

        cout << "UTS         : ";
        cin >> uts;
        while (cin.fail() || uts < 0 || uts > 100) {
            cin.clear();
            cin.ignore(1000, '\n');
            cout << "Harus angka 0 sampai 100. UTS : ";
            cin >> uts;
        }

        cout << "UAS         : ";
        cin >> uas;
        while (cin.fail() || uas < 0 || uas > 100) {
            cin.clear();
            cin.ignore(1000, '\n');
            cout << "Harus angka 0 sampai 100. UAS : ";
            cin >> uas;
        }
        cin.ignore(1000, '\n'); // Buang Enter tersisa setelah angka terakhir

        // Hitung nilai akhir (rata-rata 4 komponen)
        double nilai_akhir = (kehadiran + mingguan + uts + uas) / 4.0; 

        // Penentuan huruf mutu & status lulus
        string huruf_mutu;
        bool lulus = false;

        if (nilai_akhir >= 80) { huruf_mutu = "A"; lulus = true; }
        else if (nilai_akhir >= 70) { huruf_mutu = "B+"; lulus = true; }
        else if (nilai_akhir >= 65) { huruf_mutu = "B"; lulus = true; }
        else if (nilai_akhir >= 60) { huruf_mutu = "C+"; lulus = true; }
        else if (nilai_akhir >= 55) { huruf_mutu = "C"; lulus = true; }
        else if (nilai_akhir >= 40) { huruf_mutu = "D"; lulus = false; }
        else { huruf_mutu = "E"; lulus = false; }

        // Cetak satu baris untuk mahasiswa
        cout << "  " << left << setw(20) << nama 
             << right << setw(7) << nilai_akhir 
             << "  " << left << setw(3) << huruf_mutu 
             << (lulus ? "Lulus" : "Belum lulus") << "\n";

        // Akumulasi data
        if (lulus) { jumlah_lulus++; }
        total_nilai_kelas += nilai_akhir;

        switch (huruf_mutu[0]) {
            case 'A': jumlah_a++; break;
            case 'B': jumlah_b++; break;
            case 'C': jumlah_c++; break;
            case 'D': jumlah_d++; break;
            case 'E': jumlah_e++; break;
        }

        if (nilai_akhir > nilai_tertinggi) {
            nilai_tertinggi = nilai_akhir;
            nama_tertinggi = nama;
        }
    }

    // Laporan Kelas
    double rata_rata_kelas = (jumlah_mhs > 0) ? (total_nilai_kelas / jumlah_mhs) : 0;

    cout << "\n=== Laporan Kelas ===\n";
    cout << "Jumlah mahasiswa : " << jumlah_mhs << "\n";
    cout << "Lulus            : " << jumlah_lulus << "\n";
    cout << "Belum lulus      : " << (jumlah_mhs - jumlah_lulus) << "\n";
    cout << "Rata-rata kelas  : " << rata_rata_kelas << "\n";
    cout << "Tertinggi        : " << nama_tertinggi << " (" << nilai_tertinggi << ")\n";

    return 0;
}