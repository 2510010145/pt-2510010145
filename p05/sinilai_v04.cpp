#include <iostream>
#include <string>

using namespace std;

int main() {
    const double BOBOT_KEHADIRAN = 0.10, BOBOT_MINGGUAN = 0.45, BOBOT_UTS = 0.25, BOBOT_UAS = 0.20;
    int jumlah_mahasiswa = 0;
    
    cout << "=== SiNilai v0.4 ===\n";

    // TODO 1: Validasi input jumlah mahasiswa
    do {
        cout << "Jumlah mahasiswa (paling sedikit 1): ";
        cin >> jumlah_mahasiswa;
    } while (jumlah_mahasiswa < 1);

    // TODO 2: Deklarasi akumulator
    double total_nilai = 0;
    int jumlah_lulus = 0;

    // TODO 3: Perulangan for
    for (int i = 1; i <= jumlah_mahasiswa; i++) {
        string nama, npm, huruf_mutu, keterangan;
        double kehadiran, mingguan, uts, uas;

        cout << "\n--- Mahasiswa ke-" << i << " dari " << jumlah_mahasiswa << " ---\n";
        cout << "Nama      : ";
        getline(cin >> ws, nama);
        cout << "NPM       : ";
        cin >> npm;
        cout << "Kehadiran : ";
        cin >> kehadiran;
        cout << "Mingguan  : ";
        cin >> mingguan;
        cout << "UTS       : ";
        cin >> uts;
        cout << "UAS       : ";
        cin >> uas;

        double nilai_akhir = (kehadiran * BOBOT_KEHADIRAN) + (mingguan * BOBOT_MINGGUAN) + (uts * BOBOT_UTS) + (uas * BOBOT_UAS);
        bool lulus = nilai_akhir >= 60;

        if (nilai_akhir >= 80) huruf_mutu = "A";
        else if (nilai_akhir >= 75) huruf_mutu = "B+";
        else if (nilai_akhir >= 70) huruf_mutu = "B";
        else if (nilai_akhir >= 65) huruf_mutu = "C+";
        else if (nilai_akhir >= 60) huruf_mutu = "C";
        else if (nilai_akhir >= 40) huruf_mutu = "D";
        else huruf_mutu = "E";

        switch (huruf_mutu[0]) {
            case 'A': keterangan = "Sangat baik"; break;
            case 'B': keterangan = "Baik"; break;
            case 'C': keterangan = "Cukup"; break;
            case 'D': keterangan = "Kurang"; break;
            default: keterangan = "Sangat kurang";
        }

        cout << "\n--- Kartu Nilai Mahasiswa ---\n";
        cout << "Nama        : " << nama << "\n";
        cout << "NPM         : " << npm << "\n";
        cout << "Nilai akhir : " << nilai_akhir << "\n";
        cout << "Huruf mutu  : " << huruf_mutu << "\n";
        cout << "Keterangan  : " << keterangan << "\n";
        cout << "Status      : " << (lulus ? "Lulus\n" : "Belum lulus\n");

        // TODO 4: Update akumulator
        total_nilai += nilai_akhir;
        if (lulus) jumlah_lulus++;
    }

    // TODO 5: Rekap kelas sejajar
    cout << "\n=== Rekap Kelas ===\n";
    cout << "Jumlah mahasiswa : " << jumlah_mahasiswa << "\n";
    cout << "Lulus            : " << jumlah_lulus << "\n";
    cout << "Belum lulus      : " << jumlah_mahasiswa - jumlah_lulus << "\n";
    cout << "Rata-rata kelas  : " << total_nilai / jumlah_mahasiswa << "\n";

    return 0;
}