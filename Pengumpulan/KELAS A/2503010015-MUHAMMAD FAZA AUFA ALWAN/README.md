# UTS Praktikum Algoritma dan Struktur Data 2026

# STRUKTUR FILE README.md

```text
# 25030100015 - MUHAMMAD_FAZA_AUFA_ALWAN

## Informasi Pribadi
- **NIM** : 25030100015
- **Nama** : MUHAMMAD_FAZA_AUFA_ALWAN
- **Kelas** : A

## Informasi Ujian
- **Mata Kuliah** : Praktikum Algoritma dan Struktur Data
- **Semester** : Genap 2025/2026
- **Media Submit** : GitHub Pull Request
- **Bahasa** : C++
- **IDE** : Dev C++

---

## DAFTAR ISI
- [Soal 1 Deklarasi Struct Dan Input Data](#soal-1 Pencarian dan Statistik)
- [Soal 2 Stack:Riwayat Transaksi](#soal-2 Queueu: Antrian Pelanggan)

## ANALISIS & PEMBAHASAN SOAL

### Soal 1

...(uraikan analisis dan pembahasan soal 1)...
Analisis dan Pembahasan
1. Struktur Data (Struct)
Penggunaan struct sangat efektif dalam kasus ini karena memungkinkan kita untuk mengelompokkan berbagai tipe data yang berbeda (string, int, float) menjadi satu kesatuan unit bernama Buku. Tanpa struct, kita harus membuat empat array terpisah, yang akan sangat sulit dikelola saat melakukan pengurutan atau penghapusan data.

2. Mekanisme Input dan Buffer
Pada kode di atas, digunakan cin.ignore() sebelum getline. Ini adalah langkah krusial. Saat kita memasukkan angka (jumlah buku) menggunakan cin, karakter newline (\n) tetap tertinggal di buffer. Jika tidak dibersihkan, getline untuk judul buku akan mengambil karakter newline tersebut dan menganggap input selesai, sehingga pengguna tidak sempat mengetik judul buku pertama.

3. Manipulasi Output (Tabel)
Untuk membuat tabel yang rapi, kita menggunakan library <iomanip> dengan fungsi:

setw(n): Menentukan lebar kolom.

left: Meratakan teks ke kiri.

fixed dan setprecision(2): Memastikan harga ditampilkan dengan dua angka di belakang koma (format mata uang standar).

4. Algoritma Pencarian & Statistik
Pencarian Harga Tertinggi: Menggunakan teknik linear search sederhana. Kita mengasumsikan buku pertama adalah yang termahal, lalu membandingkannya satu per satu dengan buku lainnya. Kita menyimpan indeksnya (bukan nilainya) agar bisa mengakses seluruh informasi buku tersebut nantinya.

Pencarian Berdasarkan Tahun: Menggunakan loop yang memeriksa setiap elemen. Variabel boolean ditemukan digunakan sebagai penanda (flag). Jika hingga akhir loop flag tetap false, maka pesan "Tidak ada buku..." akan ditampilkan.

5. Kelebihan dan Keterbatasan
Kelebihan: Struktur data terorganisir, akses data cepat karena menggunakan array (O(1) untuk akses indeks), dan hemat memori untuk data skala kecil.

Keterbatasan: Kapasitas array bersifat statis (maksimal 5). Jika toko buku berkembang, program ini perlu dimodifikasi menggunakan std::vector atau Dynamic Array agar kapasitasnya bisa bertambah secara otomatis sesuai kebutuhan.

### Soal 2

...(uraikan analisis dan pembahasan soal 2)...
Analisis dan Pembahasan (Soal B)
Berdasarkan implementasi Queue di atas, berikut adalah analisis teknisnya:

Mekanisme Array Statis:
Program menggunakan array dengan ukuran tetap (MAX 5). Variabel front bertugas menunjuk ke elemen pertama yang akan keluar, sedangkan rear menunjuk ke elemen terakhir yang baru masuk.

Kondisi Awal & IsEmpty:
Awalnya, front dan rear diatur ke -1. Fungsi isEmpty() memeriksa apakah front masih -1 atau jika front telah melewati rear (terjadi setelah semua elemen di-dequeue).

Operasi Enqueue (Penambahan):
Saat "Budi", "Sari", dan "Eko" masuk, rear bergerak dari -1 ke 0, 1, dan 2. Karena ini antrian linear sederhana, jika rear sudah mencapai index 4, antrian dianggap penuh (isFull), meskipun ada ruang kosong di depan akibat proses dequeue.

Operasi Dequeue (Pengurangan):
Saat "Budi" keluar, front bergeser dari 0 ke 1. Elemen "Budi" secara fisik tetap ada di memori array, namun secara logika sudah tidak dianggap dalam antrian karena index front sudah melewatinya.

Keterbatasan:
Antrian linear manual ini memiliki kelemahan di mana index yang sudah ditinggalkan front tidak bisa digunakan kembali sebelum seluruh antrian di-reset. Untuk penggunaan yang lebih efisien di dunia nyata, biasanya disarankan menggunakan Circular Queue (Antrian Melingkar).

---

## SUMBER BELAJAR

Sebutkan sumber belajar yang digunakan, contohnya:

- Modul Praktikum Algoritma dan Struktur Data
- Video pembelajaran online (YouTube, Coursera, dll.)
- Stack Overflow
```