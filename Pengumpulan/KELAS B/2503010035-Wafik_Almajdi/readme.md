# 2503010035 - WAFIK ALMADJI

## Informasi Pribadi
- **NIM** : 2503010035
- **Nama** : WAFIK ALMADJI
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

---

# ANALISIS & PEMBAHASAN SOAL

## Soal 1

### Analisis
Pada soal 1 dibuat program struktur data **Stack** menggunakan bahasa C++.  
Stack merupakan struktur data yang menggunakan konsep **LIFO (Last In First Out)**, artinya data yang terakhir masuk akan menjadi data pertama yang keluar.

Program menggunakan:
- Array dengan kapasitas maksimal 5 data
- Variabel `top` untuk menunjukkan posisi data paling atas
- Class `Stack` untuk mengelola operasi stack

Operasi yang digunakan:
1. `push()` → menambah data ke stack
2. `pop()` → menghapus data teratas
3. `peek()` → melihat data teratas
4. `display()` → menampilkan isi stack
5. `isEmpty()` → mengecek stack kosong
6. `isFull()` → mengecek stack penuh

### Pembahasan
Program melakukan simulasi transaksi dengan data:
- T001
- T002
- T003
- T004

Kemudian:
- Menampilkan transaksi teratas menggunakan `peek()`
- Menghapus 2 transaksi menggunakan `pop()`
- Menampilkan isi stack terakhir menggunakan `display()`

Hasil akhir stack:
```cpp
T002
T001
```

Karena stack menggunakan konsep LIFO, maka data terakhir yang masuk akan keluar terlebih dahulu.

---

## Soal 2

### Analisis
Pada soal 2 dibuat program struktur data **Queue** menggunakan bahasa C++.  
Queue merupakan struktur data yang menggunakan konsep **FIFO (First In First Out)**, artinya data yang pertama masuk akan menjadi data pertama yang keluar.

Program menggunakan:
- Array dengan kapasitas maksimal 5 data
- Variabel `front` untuk posisi depan
- Variabel `rear` untuk posisi belakang
- Class `Queue` untuk mengatur operasi queue

Operasi yang digunakan:
1. `enqueue()` → menambah data ke queue
2. `dequeue()` → menghapus data terdepan
3. `peek()` → melihat data terdepan
4. `display()` → menampilkan isi queue
5. `isEmpty()` → mengecek queue kosong
6. `isFull()` → mengecek queue penuh

### Pembahasan
Program melakukan simulasi antrian pelanggan dengan data:
- Ilham
- Kurniawan
- Deddy

Kemudian:
- Menampilkan pelanggan terdepan menggunakan `peek()`
- Menghapus 1 pelanggan menggunakan `dequeue()`
- Menambahkan pelanggan baru yaitu `Paparoach`
- Menampilkan isi queue terakhir menggunakan `display()`

Hasil akhir queue:
```cpp
Kurniawan
Deddy
Paparoach
```

Karena queue menggunakan konsep FIFO, maka pelanggan yang pertama masuk akan keluar terlebih dahulu.

---

# KESIMPULAN

Program berhasil menerapkan dua struktur data dasar yaitu:
1. Stack dengan metode LIFO
2. Queue dengan metode FIFO

Kedua program menggunakan array dan class pada bahasa C++ sehingga memudahkan pengelolaan data dan operasi struktur data.

---

## SUMBER BELAJAR

- Modul Praktikum Algoritma dan Struktur Data
- Modul Struktur Data Dasar
- Buku Algoritma dan Pemrograman C++
- Dokumentasi resmi C++
- Video pembelajaran YouTube
- Stack Overflow
