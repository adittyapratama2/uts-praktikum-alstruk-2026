# 2503010066 - karima robbani berliana

## Informasi Pribadi
- **NIM** : 2503010066
- **Nama** : karima robbani berliana
- **Kelas** : c

## Informasi Ujian
- **Mata Kuliah** : Praktikum Algoritma dan Struktur Data
- **Semester** : Genap 2025/2026
- **Media Submit** : GitHub Pull Request
- **Bahasa** : C++
- **IDE** : Dev C++

## DAFTAR ISI
- [Soal 1](#soal-1)
- [Soal 2](#soal-2)

---

## ANALISIS & PEMBAHASAN SOAL

### Soal 1
Analisis
Pada soal ini program diminta untuk membuat sistem sederhana pengelolaan data mahasiswa menggunakan Array of Struct dalam bahasa C++.
Program harus:
Membuat struct Mahasiswa
Menyimpan data:
NIM
Nama
Semester
IPK
Menggunakan array maksimal 5 data
Meminta input jumlah mahasiswa
Menampilkan seluruh data dalam bentuk tabel
Konsep utama yang digunakan:
Struct → untuk mengelompokkan beberapa tipe data berbeda menjadi satu kesatuan.
Array of Struct → untuk menyimpan banyak data mahasiswa.
Perulangan → digunakan saat input dan output data.
Pembahasan
Struct digunakan karena data mahasiswa memiliki beberapa atribut berbeda tipe data.
Pembahasan
Struct digunakan karena data mahasiswa memiliki beberapa atribut berbeda tipe data.
Contoh:
C++
struct Mahasiswa{
    string nim;
    string nama;
    int semester;
    float ipk;
};
Array digunakan agar dapat menyimpan banyak mahasiswa:
C++
Mahasiswa mhs[5];
Perulangan for dipakai untuk:
Input data mahasiswa
Menampilkan data mahasiswa
Program akan meminta jumlah mahasiswa terlebih dahulu:
C++
cin >> n;
Kemudian setiap data diinput satu per satu.
Output ditampilkan dalam bentuk tabel agar lebih rapi dan mudah dibaca.
## soal 2 
Stack: Tumpukan Buku Kembali
Analisis
Soal meminta pembuatan program Stack manual tanpa STL menggunakan array statis.
Konsep yang digunakan:
Stack
LIFO (Last In First Out)
Array
Variabel top
Fungsi yang harus dibuat:
push()
pop()
peek()
isEmpty()
isFull()
Kapasitas stack maksimal 5 elemen.
Pembahasan
Konsep Stack
Stack bekerja dengan prinsip:
Data terakhir masuk akan keluar pertama.
Contoh:
Plain text
Push A
Push B
Push C
Maka saat pop():
Plain text
C keluar lebih dulu
Variabel Top
C++
int top = -1;
Artinya:
-1 → stack kosong
bertambah saat push
berkurang saat pop
Fungsi Push
Digunakan untuk menambah data.
Langkah:
Cek apakah stack penuh
Jika belum:
top++
simpan data
Contoh:
C++
stack[top] = data;
Fungsi Pop
Digunakan menghapus data paling atas.
Langkah:
Cek stack kosong
Ambil data teratas
top--
Fungsi Peek
Menampilkan elemen paling atas tanpa menghapusnya.
Contoh:
C++
cout << stack[top];
Simulasi
Data:
Fisika Dasar
Kalkulus
Algoritma
Jaringan
Urutan stack:
Plain text
Jaringan
Algoritma
Kalkulus
Fisika Dasar
Saat pop 2 kali:
Plain text
Keluar:
Jaringan
Algoritma
Sisa stack:
Plain text
Kalkulus
Fisika Dasar
Queue: Antrian Peminjaman
Analisis
Program diminta membuat Queue manual menggunakan array statis.
Konsep utama:
Queue
FIFO (First In First Out)
Array
Variabel front dan rear
Fungsi:
enqueue()
dequeue()
peek()
isEmpty()
isFull()
Pembahasan
Konsep Queue
Queue bekerja seperti antrean:
Yang masuk pertama keluar pertama.
Contoh:
Plain text
Reza
Mia
Hendra
Saat dequeue:
Plain text
Reza keluar lebih dulu
Variabel Front dan Rear
C++
front = 0;
rear = -1;
front → data paling depan
rear → data paling belakang
Fungsi Enqueue
Menambah data ke belakang antrean.
Langkah:
Cek queue penuh
rear++
Simpan data
Fungsi Dequeue
Menghapus data paling depan.
Langkah:
Cek queue kosong
Ambil data depan
front++
Fungsi Peek
Melihat data paling depan tanpa menghapus.
Contoh:
C++
cout << queue[front];
Simulasi Queue
Input:
Plain text
Reza
Mia
Hendra
Kondisi queue:
Plain text
Reza -> Mia -> Hendra
Dequeue:
Plain text
Reza keluar
Tambah Putri:
Plain text
Mia -> Hendra -> Putri
## SUMBER BELAJAR

Sebutkan sumber belajar yang digunakan

- Modul Algoritma dan Struktur Data
- Video YouTube 
- latihan uts 
- Dokumentasi resmi bahasa C++