# 2503010030 - WAHYU HIDAYAT

## Informasi Pribadi
- **NIM** : 2503010030
- **Nama** : WAHYU HIDAYAT
- **Kelas** : B

## Informasi Ujian
- **Mata Kuliah** : Praktikum Algoritma dan Struktur Data
- **Semester** : Genap 2025/2026
- **Media Submit** : GitHub Pull Request
- **Bahasa** : C++
- **IDE** : Dev C++

---

## DAFTAR ISI
- [Soal 1](#soal-1)
- [Soal 2](#soal-2)

## ANALISIS & PEMBAHASAN SOAL

### Soal 1

Pada soal 1, program dibuat untuk mengimplementasikan struktur data **Stack** secara manual tanpa menggunakan library STL. Stack adalah struktur data yang menggunakan konsep **LIFO (Last In First Out)**, yaitu data yang terakhir masuk akan menjadi data pertama yang keluar.

Program menggunakan array statis dengan kapasitas maksimal 5 elemen dan variabel `top` untuk menunjukkan posisi data paling atas pada stack. Fungsi-fungsi yang digunakan dalam program antara lain:
- `push()` untuk menambahkan data transaksi.
- `pop()` untuk menghapus data paling atas.
- `peek()` untuk melihat data teratas.
- `isEmpty()` untuk mengecek apakah stack kosong.
- `isFull()` untuk mengecek apakah stack penuh.

Pada simulasi program, data transaksi `T001`, `T002`, `T003`, dan `T004` dimasukkan ke dalam stack menggunakan fungsi `push`. Setelah itu program menampilkan transaksi paling atas menggunakan `peek`. Kemudian dilakukan proses `pop` sebanyak dua kali sehingga dua transaksi terakhir keluar dari stack. Isi stack setelah proses tersebut kemudian ditampilkan kembali.

Dari hasil program dapat disimpulkan bahwa stack berjalan sesuai konsep LIFO karena data terakhir yang masuk akan keluar lebih dahulu. Program juga dapat mendeteksi kondisi stack penuh dan kosong sehingga program menjadi lebih aman dan informatif.

---

### Soal 2

Pada soal 2, program dibuat untuk mengimplementasikan struktur data **Queue** secara manual tanpa menggunakan library STL. Queue merupakan struktur data yang menggunakan konsep **FIFO (First In First Out)**, yaitu data yang pertama masuk akan menjadi data pertama yang keluar.

Program menggunakan array statis dengan kapasitas maksimal 5 elemen serta variabel `front` dan `rear` untuk menunjukkan posisi depan dan belakang queue. Fungsi-fungsi yang digunakan dalam program antara lain:
- `enqueue()` untuk menambahkan pelanggan ke dalam antrian.
- `dequeue()` untuk menghapus pelanggan dari depan antrian.
- `peek()` untuk melihat pelanggan paling depan.
- `isEmpty()` untuk mengecek apakah queue kosong.
- `isFull()` untuk mengecek apakah queue penuh.

Pada simulasi program, pelanggan `Budi`, `Sari`, dan `Eko` dimasukkan ke dalam antrian menggunakan fungsi `enqueue`. Program kemudian menampilkan pelanggan paling depan menggunakan `peek`. Setelah itu dilakukan proses `dequeue` untuk menghapus satu pelanggan dari depan antrian, lalu ditambahkan pelanggan baru yaitu `Dewi`. Isi queue setelah proses tersebut kemudian ditampilkan kembali.

Hasil program menunjukkan bahwa queue berjalan sesuai konsep FIFO karena pelanggan yang pertama masuk akan keluar lebih dahulu. Program juga mampu mendeteksi kondisi queue penuh maupun kosong serta memberikan pesan informasi kepada pengguna.

---

## SUMBER BELAJAR

- Modul Praktikum Algoritma dan Struktur Data
- Modul Pointer
- Modul Rekursif
- Modul Struktur Data Dasar
- Buku Algoritma dan Pemrograman Modern
- Video pembelajaran online (YouTube, Coursera, dll.)
- Stack Overflow
- Dokumentasi resmi bahasa C++
