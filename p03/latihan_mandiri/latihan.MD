# Latihan Mandiri P03 - Ekspresi dan Operator

Dokumentasi dan laporan hasil pengujian tugas Latihan Mandiri Pertemuan 3.

---

## 1. Konversi Total Detik (`latihan1_detik.cpp`)

### Deskripsi Program
Program untuk mengonversi nilai total detik menjadi format waktu terstruktur (jam, menit, dan detik).

### Hasil Pengujian di Terminal
* **Input yang dimasukkan:** `9005`
* **Output program:** `9005 detik = 2 jam, 30 menit, 5 detik.`

### Catatan Konsep
* Operator `/` digunakan untuk mendapatkan nilai bulat jam dan sisa jam pembagian.
* Operator `%` (modulo) digunakan untuk mengambil sisa detik yang tidak habis dibagi.

---

## 2. Operasi Hasil Bagi dan Sisa Bagi (`latihan2_bagi.cpp`)

### Deskripsi Program
Program untuk menampilkan hasil bagi serta sisa pembagian dari dua bilangan bulat.

### Hasil Pengujian di Terminal
* **Input yang dimasukkan:**
  * Bilangan pertama: `17`
  * Bilangan pembagi: `5`
* **Output program:** `17 dibagi 5 adalah 3 sisa 2`

### Catatan Konsep
* Ekspresi `17 / 5` menghasilkan bilangan bulat `3`.
* Ekspresi `17 % 5` menghasilkan sisa modulo sebesar `2`.

---

## 3. Modifikasi SiNilai v0.2 dengan Selisih (`latihan3_selisih.cpp`)

### Deskripsi Program
Program perhitungan nilai akhir akademik mahasiswa yang diperbarui untuk menampilkan selisih antara nilai akhir berbobot dan rerata polos.

### Hasil Pengujian di Terminal
* **Input Data Mahasiswa:**
  * Nama: `Siti Aminah`
  * NPM: `2024010101`
  * Kehadiran: `100`
  * Mingguan: `85`
  * UTS: `80`
  * UAS: `90`
* **Output Program:**
  * Nilai akhir: `86.25`
  * Rerata polos: `88.75`
  * Selisih: `-2.5`

### Catatan Konsep
* Nilai akhir dihitung berdasarkan persentase bobot komponen (Kehadiran 10%, Mingguan 45%, UTS 25%, UAS 20%).
* Selisih diperoleh dari hasil pengurangan `nilai_akhir` dengan `rerata_polos`.

---

## 4. Studi Komparasi Ekspresi Python (`latihan4_perbandingan.py`)

### Deskripsi Program
Skrip pengujian perilaku operator pembagian di Python.

### Hasil Pengujian di Terminal
* **`7 / 2`** $\rightarrow$ `3.5` (Menghasilkan nilai pecahan / *float*).
* **`7 // 2`** $\rightarrow$ `3` (Pembagian bulat ke bawah / *floor division*).
* **`-7 / 2`** $\rightarrow$ `-3.5` (Pecahan negatif presisi).
* **`-7 // 2`** $\rightarrow$ `-4` (Pembulatan ke bawah pada bilangan negatif).