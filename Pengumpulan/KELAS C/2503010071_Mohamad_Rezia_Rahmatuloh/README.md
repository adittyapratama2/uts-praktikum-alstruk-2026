# 2503010001 - WAHYU_ADIWIBOWO

## Informasi Pribadi
- **NIM** : 2503010071
- **Nama** : Mohamad_Rezia_Rahmatuloh
- **Kelas** : C

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

Pada program ini pendataan buku menggunakan konsep struct dan array. Struct digunakan untuk menyimpan beberapa data dengan tipe berbeda dalam satu variabel, seperti judul buku, nama pengarang, tahun terbit, dan harga buku. Pada program ini struct bernama Buku memiliki atribut:

string judul;
string pengarang;
int TATE;
float harga;

Kemudian digunakan array of struct:

Buku mhs[5];

yang berfungsi untuk menyimpan maksimal 5 data buku.

Program meminta pengguna memasukkan jumlah buku terlebih dahulu, lalu melakukan penginputan data menggunakan perulangan for. Data yang diinput meliputi judul buku, pengarang, tahun terbit, dan harga buku.

Untuk menampilkan data agar lebih rapi digunakan manipulasi output setw() dari library iomanip sehingga hasil output berbentuk tabel.

Selain menampilkan seluruh data buku, program juga melakukan beberapa analisis data, yaitu:

Mencari buku dengan harga tertinggi menggunakan proses perbandingan pada perulangan.
Menghitung rata-rata harga seluruh buku dengan menjumlahkan semua harga kemudian dibagi jumlah data.
Mencari buku berdasarkan tahun terbit yang dimasukkan pengguna. Program akan menampilkan semua buku dengan tahun yang sesuai. Jika tidak ditemukan maka program menampilkan pesan bahwa data tidak ada.

Pada konsep ini diterapkan:

Struct
Array
Perulangan
Percabangan
Input dan output
Pencarian data sederhana

Program ini berguna untuk memahami cara menyimpan dan mengelola banyak data menggunakan array of struct dalam bahasa C++.

### Soal 2

Pada konsep ini dibuat simulasi sistem antrian kasir supermarket menggunakan konsep Stack dan Queue secara manual tanpa menggunakan STL.

Stack

Stack merupakan struktur data dengan konsep LIFO (Last In First Out) yaitu data terakhir yang masuk akan keluar terlebih dahulu. Pada program, stack digunakan untuk menyimpan riwayat transaksi.

Implementasi stack menggunakan:

Array statis
Variabel top
int stackData[MAX_SIZE];
int top = -1;

Program ini memiliki beberapa fungsi:

push() untuk menambah transaksi
pop() untuk menghapus transaksi teratas
peekStack() untuk melihat transaksi paling atas
isEmptyStack() untuk mengecek stack kosong
isFullStack() untuk mengecek stack penuh

Program juga menampilkan isi stack setelah setiap proses sehingga pengguna dapat melihat perubahan data secara langsung.

Queue

Queue merupakan struktur data dengan konsep FIFO (First In First Out) yaitu data yang pertama masuk akan keluar terlebih dahulu. Pada program, queue digunakan untuk simulasi antrian pelanggan supermarket.

queue biasanya menggunakan:

Array statis
Variabel front
Variabel rear
string queueData[MAX_SIZE];
int frontIdx = -1;
int rearIdx = -1;

Fungsi yang digunakan:

enqueue() untuk menambah pelanggan
dequeue() untuk menghapus pelanggan terdepan
peekQueue() untuk melihat pelanggan paling depan
isEmptyQueue() untuk mengecek queue kosong
isFullQueue() untuk mengecek queue penuh

Program menampilkan kondisi antrian setiap terjadi perubahan sehingga proses enqueue dan dequeue dapat dipahami dengan jelas.

konsep ini menerapkan:

Stack
Queue
Array
Function
Percabangan
Perulangan

Program membantu memahami perbedaan cara kerja Stack dan Queue serta implementasinya secara manual menggunakan array dalam bahasa C++.


## SUMBER BELAJAR

Sebutkan sumber belajar yang digunakan, contohnya:

- Modul Praktikum Algoritma dan Struktur Data
- Modul Pointer
- Modul Rekursif
- Modul Struktur Data Dasar
- Buku Algoritma dan Pemrograman Modern
- Video pembelajaran online (YouTube, Coursera, dll.)
- Stack Overflow
- Dokumentasi resmi bahasa C++