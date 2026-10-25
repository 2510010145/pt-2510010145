# P05 Perulangan: for, while, do-while

Folder kode Pertemuan 5 Pemrograman Terstruktur. Setiap program punya flowchart pasangannya di modul (Gambar 1 sampai 5); perhatikan panah yang kembali ke atas, itulah perulangan.

## Isi

| Berkas | Kegunaan |
|---|---|
| `for_hitung.cpp` | for dengan jumlah putaran yang diketahui; coba ubah `<=` menjadi `<` |
| `for_jumlah.cpp` | Pola akumulator: total dan rata-rata dari n nilai; coba masukkan 0 |
| `while_sentinel.cpp` | while dengan angka negatif sebagai tanda berhenti; jumlah putaran tidak diketahui |
| `do_while_menu.cpp` | do-while untuk menu yang diulang sampai pengguna memilih keluar; switch dari Pertemuan 4 |
| `sinilai_v04.cpp` | Starter SiNilai v0.4: badan v0.3 sudah ada, lengkapi do-while, for, akumulator, dan rekap |
| `contoh_masukan.txt` | Tiga mahasiswa untuk menguji v0.4 |
| `.vscode/`, `.gitignore` | Sama dengan pertemuan sebelumnya |

## Kasus uji SiNilai v0.4 (`./sinilai_v04 < contoh_masukan.txt`)

| Mahasiswa | Komponen | Nilai akhir | Huruf | Status |
|---|---|---|---|---|
| Siti Aminah | 100, 85.5, 78, 80 | 83.975 | A | Lulus |
| Budi Santoso | 80, 70, 65, 60 | 67.75 | C+ | Lulus |
| Rina Wati | 60, 50, 40, 55 | 49.5 | D | Belum lulus |

Rekap kelas: 3 mahasiswa, 2 lulus, 1 belum lulus, rata-rata kelas 67.075.
Jumlah mahasiswa 0 atau negatif harus ditanya ulang (do-while).

## Kalau program berputar tanpa henti

Tekan `Ctrl+C` di terminal. Penyebab yang paling sering: lupa langkah (`i++`), syarat yang tidak pernah salah, atau mengetik huruf saat program meminta angka (`cin` gagal dan nilai variabelnya menjadi 0; obatnya dibahas di Pertemuan 7).

## Yang dikumpulkan mahasiswa

Folder `p05` di repository `pt-NPM` berisi `sinilai_v04.cpp`. Lihat Modul Pertemuan 5 bagian E.

## Deklarasi AI

### Alat AI yang digunakan
Gemini.

### Untuk apa AI digunakan
- Sebagai teman diskusi untuk menyusun struktur kode `sinilai_v04.cpp` sendiri agar terhindar dari plagiasi.
- Membantu menempatkan perulangan `do-while`, `for`, dan akumulator sesuai spesifikasi.
- Membantu mengidentifikasi dan menyelesaikan *error* direktori `No such file or directory` saat menjalankan file masukan di Git Bash.

### Prompt yang digunakan
Saya memberikan draf kode dari beberapa sumber dan bertanya bagaimana cara menggabungkannya menjadi kode mandiri. Saya juga memasukkan pesan *error* dari terminal Git Bash untuk menanyakan penyebab program tidak mengenali file `contoh_masukan.txt`.

### Cara memeriksa hasil AI
Saya melakukan proses kompilasi secara mandiri di VS Code menggunakan perintah `g++ -std=c++20 -Wall -Wextra -Wpedantic -g sinilai_v04.cpp -o sinilai_v04`. Setelah itu, program diuji menggunakan perintah `./sinilai_v04 < contoh_masukan.txt` dan hasilnya saya cocokkan langsung dengan tabel pada modul P05, yang membuktikan cetakan akhir rekap kelas sejajar dan rata-ratanya valid di angka 67.075[cite: 12].