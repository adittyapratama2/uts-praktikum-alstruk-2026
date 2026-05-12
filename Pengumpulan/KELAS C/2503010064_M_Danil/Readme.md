# UTS Praktikum Algoritma dan Struktur Data 2026

## Identitas
- **Nama  :** Danil
- **NIM   :** 2503010064
- **Kelas :** C

## Deskripsi
Repository ini berisi jawaban UTS Praktikum Algoritma dan Struktur Data 2026.

## Soal
| File | Keterangan |
|------|------------|
| soal1.cpp | Pertanyaan A – Data Mahasiswa |
| soal2.cpp | Pertanyaan B – Stack & Queue |

## Cara Compile
```bash
g++ soal1.cpp -o soal1
./soal1

g++ soal2.cpp -o soal2
./soal2
```

---

## ANALISIS & PEMBAHASAN SOAL

### Soal 1 – Data Mahasiswa

Program ini menggunakan **struct** untuk menyimpan data mahasiswa yang terdiri dari NIM, nama, semester, dan IPK. Data disimpan dalam array statis dengan kapasitas 5 elemen dan diinput secara dinamis sesuai jumlah yang dimasukkan pengguna.

**Fitur yang diimplementasikan:**
- Input data mahasiswa secara dinamis
- Menampilkan seluruh data mahasiswa dalam format tabel yang rapi menggunakan `setw()` dari library `<iomanip>`
- Menghitung rata-rata IPK seluruh mahasiswa
- Menampilkan data mahasiswa dengan IPK tertinggi
- Mencari data mahasiswa berdasarkan nomor semester

**Alur program:**
1. User memasukkan jumlah data (1-5)
2. User menginput NIM, nama, semester, dan IPK tiap mahasiswa
3. Program menampilkan tabel data mahasiswa
4. Program menghitung dan menampilkan rata-rata IPK
5. Program mencari dan menampilkan mahasiswa dengan IPK tertinggi
6. User memasukkan nomor semester, program menampilkan mahasiswa yang sesuai

---

### Soal 2 – Stack & Queue

Program ini mengimplementasikan dua struktur data sekaligus dalam satu file yaitu **Stack** dan **Queue** secara manual tanpa menggunakan library STL.

**A. Stack – Tumpukan Buku Kembali**

Stack menggunakan prinsip **LIFO (Last In First Out)**, data yang terakhir masuk akan pertama kali keluar. Pada soal ini stack digunakan untuk menyimpan judul buku yang dikembalikan ke perpustakaan.

Fungsi yang diimplementasikan:
- `init()` — menginisialisasi stack dengan `top = -1`
- `isFull()` — mengecek apakah stack sudah penuh
- `isEmpty()` — mengecek apakah stack kosong
- `push()` — menambahkan buku ke atas stack
- `pop()` — mengeluarkan buku paling atas dari stack
- `peek()` — menampilkan buku paling atas tanpa menghapus
- `tampil()` — menampilkan seluruh isi stack dari atas ke bawah

Skenario yang disimulasikan:
1. Push 4 buku: "Fisika Dasar", "Kalkulus", "Algoritma", "Jaringan"
2. Peek → menampilkan "Jaringan" (buku teratas)
3. Pop 2 buku → "Jaringan" dan "Algoritma" keluar
4. Tampil sisa stack → tersisa "Fisika Dasar" dan "Kalkulus"

**B. Queue – Antrian Peminjaman**

Queue menggunakan prinsip **FIFO (First In First Out)**, data yang pertama masuk akan pertama kali keluar. Pada soal ini queue digunakan untuk mengelola antrian anggota perpustakaan yang ingin meminjam buku.

Fungsi yang diimplementasikan:
- `initQueue()` — menginisialisasi queue dengan `front = -1` dan `rear = -1`
- `isFullQueue()` — mengecek apakah queue sudah penuh
- `isEmptyQueue()` — mengecek apakah queue kosong
- `enqueue()` — menambahkan anggota ke belakang antrian
- `dequeue()` — mengeluarkan anggota paling depan dari antrian
- `peekQueue()` — menampilkan anggota terdepan tanpa menghapus
- `tampilQueue()` — menampilkan seluruh isi queue dari depan ke belakang

Skenario yang disimulasikan:
1. Enqueue 3 anggota: "Reza", "Mia", "Hendra"
2. Tampil isi queue → Reza, Mia, Hendra
3. Peek → menampilkan "Reza" (anggota terdepan)
4. Dequeue 1 anggota → "Reza" keluar dari antrian
5. Enqueue anggota baru → "Putri" masuk ke belakang antrian
6. Tampil isi queue → Mia, Hendra, Putri

## SUMBER BELAJAR
- Dari file yang sudah diterangkan sama bapak ada array,struct,stack,queue dan tinggal di ATM saja
- Video pembelajaran online (Youtube : Jagat Coding) ada queue,stack,struct
- Dari sumber Web (Petani.kode) tentang array dan juga konstanta pada C++


