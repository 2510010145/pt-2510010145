# P06 Perulangan Lanjutan: Bersarang, break, continue, Debugger, iomanip

Folder kode Pertemuan 6 Pemrograman Terstruktur. Setiap program berpasangan dengan flowchart di modul; pada perulangan bersarang ada dua panah yang kembali, dan pada break/continue ada panah yang "memotong jalan".

## Isi

| Berkas | Kegunaan |
|---|---|
| `sinilai_v05.cpp` | Program utama SiNilai v0.5 untuk tugas P06 |
| `contoh_masukan.txt` | Data masukan untuk menguji program sesuai modul |
| `README.md` | Informasi tugas dan deklarasi penggunaan AI |
| `latihan_mandiri/` | Program dan catatan Latihan Mandiri P06 |

## Kasus uji SiNilai v0.5 (`./sinilai_v05 < contoh_masukan.txt`)

| Mahasiswa | Komponen | Nilai akhir (2 desimal) | Huruf | Status |
|---|---|---|---|---|
| Siti Aminah | 100, 85.5, 78, 80 | 83.97 | A | Lulus |
| Budi Santoso | 80, 70, 65, 60 | 67.75 | C+ | Lulus |
| Rina Wati | 60, 50, 40, 55 | 49.50 | D | Belum lulus |
| Dewi Lestari | 90, 90, 90, 90 | 90.00 | A | Lulus |
| Eko Prasetyo | 75, 72, 70, 68 | 71.00 | B | Lulus |
| Fajar Nugroho | 30, 20, 35, 25 | 25.75 | E | Belum lulus |

Laporan kelas: 6 mahasiswa, 4 lulus, 2 belum lulus, rata-rata 64.66, tertinggi Dewi Lestari (90.00).
Sebaran huruf: A 2, B 1, C 1, D 1, E 1 (B+ dihitung sebagai B, C+ sebagai C).

Catatan: 83.975 tampil sebagai 83.97, bukan 83.98, karena di dalam komputer 83.975 tersimpan sebagai 83.97499...; pembulatan mengikuti angka yang tersimpan.

## Debugger

`launch.json` memakai `C:/msys64/ucrt64/bin/gdb.exe` dan program `<nama>.exe` hasil tasks.json. Di Linux hapus akhiran `.exe` dan ganti `miDebuggerPath` menjadi `/usr/bin/gdb`; di macOS ganti `MIMode` menjadi `lldb` dan hapus `miDebuggerPath`. Panduan lengkap: `03_Modul/Panduan_Debugger_VS_Code.docx`.

## Yang dikumpulkan mahasiswa

Folder `p06` di repository `pt-NPM` berisi `sinilai_v05.cpp`. Lihat Modul Pertemuan 6 bagian E.

## Deklarasi AI

### Alat AI yang digunakan

Gemini Advanced (Google AI).

### Untuk apa AI digunakan

AI digunakan sebagai asisten kolaborasi belajar untuk:
- memahami konsep perulangan bersarang (*nested loop*), kendali `break` dan `continue`, serta pemformatan keluaran menggunakan `<iomanip>`;
- memberikan arahan dan contoh penyelesaian bagian TODO pada program SiNilai v0.5;
- membantu memandu logika pembuatan penghitung huruf mutu, pencarian nilai tertinggi, dan diagram batang sebaran nilai;
- membantu menelusuri penanganan *input buffer* (`cin.ignore`) serta memverifikasi hasil *build* dan pengujian program.

### Prompt yang digunakan

Prompt yang diajukan berupa diskusi interaktif seputar sintaks C++, cara mengatasi kendala *input buffer*, penyelesaian TODO modul P06, serta penyesuaian struktur dokumentasi kode.

### Cara memeriksa hasil AI

Saya menyusun dan mengompilasi program menggunakan `g++` dengan bendera `-std=c++20 -Wall -Wextra -Wpedantic -g` untuk memastikan tidak ada kesalahan maupun peringatan (*warning*). Selanjutnya, saya menjalankan program dengan masukan `contoh_masukan.txt` dan memvalidasi kesesuaian keluarannya dengan tabel kasus uji serta laporan kelas pada modul.

Hasil verifikasi menunjukkan jumlah mahasiswa sebanyak 6 orang, 4 lulus, 2 belum lulus, rata-rata kelas 64.66, mahasiswa dengan nilai tertinggi Dewi Lestari (90.00), serta sebaran huruf mutu yang akurat (A: 2, B: 1, C: 1, D: 1, E: 1).

