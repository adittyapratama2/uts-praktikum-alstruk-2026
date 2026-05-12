# STRUKTUR FILE README.md

```text
# 2503010028  - Edwin_Arsy_Al_Fikri

## Informasi Pribadi
- **NIM** : 2503010028 
- **Nama** : Edwin_Arsy_Al_Fikri
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

1. Struct Mahasiswa

Program menggunakan:

struct Mahasiswa

Struct digunakan untuk menggabungkan beberapa tipe data menjadi satu kesatuan data mahasiswa, yaitu:

NIM
Nama
Semester
IPK

Dengan struct, data mahasiswa menjadi lebih terorganisir.

2. Array of Struct
Program menggunakan array:
Mahasiswa mhs[5];
Array tersebut digunakan untuk menyimpan maksimal 5 data mahasiswa.
Setiap indeks array menyimpan satu data mahasiswa.

3. Input Data Mahasiswa
Program meminta pengguna memasukkan:
jumlah mahasiswa
NIM
nama
semester
IPK
Input dilakukan menggunakan perulangan for, sehingga data dapat dimasukkan berulang sesuai jumlah mahasiswa.
4. Menampilkan Data Mahasiswa
Data mahasiswa ditampilkan dalam bentuk tabel menggunakan:
setw()
agar tampilan lebih rapi dan mudah dibaca.

5. Mencari IPK Tertinggi
Program melakukan pencarian mahasiswa dengan IPK tertinggi menggunakan proses perbandingan pada setiap data mahasiswa.
Jika ditemukan IPK lebih besar:
mhs[i].ipk > mhs[tertinggi].ipk
maka indeks mahasiswa dengan IPK tertinggi akan diperbarui.

6. Menghitung Rata-rata IPK
Program menjumlahkan seluruh IPK mahasiswa menggunakan perulangan:
total += mhs[i].ipk;
kemudian dibagi dengan jumlah mahasiswa untuk memperoleh rata-rata IPK.

7. Pencarian Berdasarkan Semester
Program meminta input semester tertentu, lalu mencari mahasiswa yang berada pada semester tersebut.
Jika data ditemukan, maka nama dan NIM mahasiswa akan ditampilkan.
Jika tidak ditemukan, program menampilkan pesan:
Tidak ada mahasiswa pada semester tersebut.

### Soal 2

A. Stack
1. Konsep Stack
Stack menggunakan metode:
LIFO (Last In First Out)
Artinya data terakhir masuk akan keluar pertama.

2. Variabel Top
Program menggunakan variabel:
int top = -1;
Variabel top digunakan untuk menunjukkan posisi elemen paling atas pada stack.

3. Fungsi Push
Fungsi:
push()
digunakan untuk menambahkan data ke stack.
Sebelum menambah data, program memeriksa apakah stack penuh menggunakan:

isFull()
4. Fungsi Pop
Fungsi:
pop()
digunakan untuk menghapus data paling atas dari stack.
Jika stack kosong, program menampilkan pesan bahwa data tidak dapat dihapus.

5. Fungsi Peek
Fungsi:
peek()
digunakan untuk melihat data paling atas tanpa menghapusnya.

6. Menampilkan Isi Stack
Isi stack ditampilkan dari elemen paling atas ke bawah menggunakan perulangan menurun.

B. Queue
1. Konsep Queue
Queue menggunakan metode:
FIFO (First In First Out)
Artinya data pertama masuk akan keluar pertama.

2. Variabel Front dan Rear
Program menggunakan:
front → posisi data paling depan
rear → posisi data paling belakang
Kedua variabel digunakan untuk mengatur antrian.

3. Fungsi Enqueue
Fungsi:
enqueue()
digunakan untuk menambahkan data ke belakang queue.
Program juga memeriksa apakah queue penuh sebelum menambahkan data.

4. Fungsi Dequeue
Fungsi:
dequeue()
digunakan untuk menghapus data paling depan dari queue.

5. Fungsi Peek
Fungsi:
peek()
digunakan untuk melihat data paling depan tanpa menghapus data.

6. Menampilkan Isi Queue
Program menampilkan isi queue dari front sampai rear menggunakan perulangan for.

## SUMBER BELAJAR

Sebutkan sumber belajar yang digunakan, contohnya:

- Modul Praktikum Algoritma dan Struktur Data
- Modul Pointer
- Modul Struktur Data Dasar
- Buku Algoritma dan Pemrograman Modern
- Video pembelajaran online (YouTube, Coursera, dll.)
- Dokumentasi resmi bahasa C++
```
