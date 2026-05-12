# 2503010126 – MUHAMAD_RANGGA_ADI_SAPUTRA

## Informasi Pribadi
- **NIM** : 2503010126
- **Nama** : MUHAMAD_RANGGA_ADI_SAPUTRA
- **Kelas** : E

## Informasi Ujian
- **Mata Kuliah** : Praktikum Algoritma dan Struktur Data
- **Semester** : Genap 2025/2026
- **Media Submit** : GitHub Pull Request
- **Bahasa** : C++
- **IDE** : Dev C++

---

## DAFTAR ISI
- [Soal 1](#soal-1)
- [Soal 2](#soal-2-A)
- [Soal 2](#soal-2-B)

## ANALISIS & PEMBAHASAN SOAL

### Soal 1
ANALISIS & PEMBAHASAN SOAL 1 (Array of Struct)
1. Analisis Masalah
Soal ini meminta kita untuk mengelola data entitas (Mahasiswa) yang memiliki beberapa atribut dengan tipe data berbeda (string untuk nama/NIM, integer untuk semester, dan float untuk IPK).
Struktur Data: Penggunaan struct adalah solusi paling tepat karena memungkinkan kita membungkus variabel-variabel yang terkait menjadi satu tipe data baru.
Penyimpanan: Karena jumlah data dibatasi maksimal 5, penggunaan Array statis sangat efisien secara memori dan mudah diakses melalui indeks.
Tantangan: Mengelola input buffer (menggunakan cin.ignore()) agar saat beralih dari input angka (cin) ke input teks (getline), program tidak melewati input nama.
2. Pembahasan Logika Program
Pertanyaan A (Input & Tabel): Program menggunakan loop for untuk menangkap input sesuai jumlah mahasiswa yang diinginkan user. Untuk menampilkan tabel yang rapi, digunakan manipulator setw() dari library <iomanip> guna mengatur lebar kolom secara konsisten.
Pertanyaan B (Statistik & Pencarian):
IPK Tertinggi: Menggunakan algoritma linear search. Kita mengasumsikan mahasiswa pertama adalah yang tertinggi, lalu membandingkannya dengan mahasiswa berikutnya. Jika ditemukan yang lebih tinggi, indeks penyimpan diperbarui.
Rata-rata: Akumulator totalIPK menjumlahkan semua IPK selama proses input, kemudian dibagi dengan jumlah n di akhir.
Filter Semester: Program melakukan iterasi pada seluruh array. Setiap elemen diperiksa apakah atribut .semester sama dengan input pencarian. Jika tidak ada yang cocok hingga akhir loop, pesan "Tidak ditemukan" akan muncul melalui bantuan variabel flag (boolean).
### Soal 2

ANALISIS & PEMBAHASAN SOAL 2 (Stack & Queue Manual)
1.	Analisis Masalah
Tantangan utama soal ini adalah mengimplementasikan struktur data Linear tanpa menggunakan library bawaan (<stack> atau <queue>). Kita harus mensimulasikan bagaimana data masuk dan keluar secara manual.
Stack: Mengikuti prinsip LIFO (Last In, First Out). Sangat cocok untuk tumpukan buku karena buku yang terakhir ditaruh adalah yang pertama diambil.
Queue: Mengikuti prinsip FIFO (First In, First Out). Sangat cocok untuk antrean karena orang yang datang pertama harus dilayani pertama.
2.	Pembahasan Logika Program
Pertanyaan A (Stack – Tumpukan Buku):
Menggunakan satu variabel penunjuk yaitu top.
Saat push, top bertambah (+1). Saat pop, top berkurang (-1).
Pengecekan isFull (ketika top == 4) dan isEmpty (ketika top == -1) sangat krusial untuk mencegah crash pada program jika array dipaksa diisi atau diambil saat kosong.
Pertanyaan B (Queue – Antrean Peminjaman):
Menggunakan dua variabel penunjuk: front (depan) dan rear (belakang).
Enqueue menambahkan data ke posisi rear, sementara dequeue mengambil data dari posisi front.
Logika simulasi: Saat anggota “Reza” keluar (dequeue), posisi front bergeser ke “Mia”, sehingga urutan antrean tetap terjaga secara kronologis.

---

## SUMBER BELAJAR

Sebutkan sumber belajar yang digunakan, contohnya:

- Modul Praktikum Algoritma dan Struktur Data
- Modul Struktur Data Dasar
- Video pembelajaran online (YouTube)
- Dokumentasi resmi bahasa C++
