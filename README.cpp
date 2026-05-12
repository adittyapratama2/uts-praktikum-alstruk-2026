# 2503010004 - FABIAN_TAUFIQURRAHMAN

## Informasi Pribadi
- **NIM** : 2503010004
- **Nama** : FABIAN_TAUFIQURRAHMAN
- **Kelas** : A

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

1. Penggunaan Struct

Struct digunakan untuk mengelompokkan beberapa data yang saling berhubungan dalam satu kesatuan. Pada soal ini, struct berisi:

* NIM
* Nama
* Semester
* IPK

Penggunaan struct mempermudah pengelolaan data mahasiswa karena semua informasi mahasiswa disimpan dalam satu variabel.

?

2. Penggunaan Array of Struct

Array digunakan untuk menyimpan banyak data mahasiswa sekaligus. Setiap elemen array mewakili satu mahasiswa.

Karena kapasitas maksimal adalah 5 data, maka program hanya dapat menyimpan paling banyak 5 mahasiswa. Penggunaan array mempermudah proses:

* Input data
* Menampilkan data
* Pencarian data
* Perhitungan statistik

?

3. Proses Input Data

Program meminta pengguna memasukkan jumlah mahasiswa terlebih dahulu. Setelah itu, pengguna menginput data mahasiswa satu per satu sesuai jumlah yang dimasukkan.

Data yang diinput meliputi:

* NIM mahasiswa
* Nama mahasiswa
* Semester
* IPK

Proses input dilakukan berulang sampai seluruh data mahasiswa selesai dimasukkan.

?

4. Proses Menampilkan Data

Setelah data selesai diinput, program menampilkan seluruh data mahasiswa dalam bentuk tabel agar lebih rapi dan mudah dibaca.

Informasi yang ditampilkan meliputi:

* Nomor data
* NIM
* Nama
* Semester
* IPK

Tampilan tabel mempermudah pengguna melihat keseluruhan data mahasiswa.

?

Analisis Pertanyaan B — Pencarian & Statistik

1. Pencarian Mahasiswa dengan IPK Tertinggi

Program melakukan pencarian untuk menemukan mahasiswa yang memiliki IPK paling tinggi.

Proses dilakukan dengan membandingkan IPK setiap mahasiswa satu per satu. Jika ditemukan IPK yang lebih besar dari sebelumnya, maka data mahasiswa tersebut disimpan sebagai IPK tertinggi.

Hasil akhirnya menampilkan:

* Nama mahasiswa
* NIM
* Semester
* Nilai IPK tertinggi

Fitur ini berguna untuk mengetahui mahasiswa dengan prestasi akademik terbaik.

?

2. Menghitung Rata-Rata IPK

Program menghitung rata-rata IPK seluruh mahasiswa dengan cara menjumlahkan semua IPK lalu membaginya dengan jumlah mahasiswa.

Perhitungan rata-rata digunakan untuk mengetahui tingkat performa akademik keseluruhan mahasiswa yang telah diinput.

Hasil rata-rata ditampilkan dalam bentuk angka desimal.

?

3. Pencarian Berdasarkan Semester

Program meminta pengguna memasukkan nomor semester tertentu. Setelah itu, program mencari semua mahasiswa yang berada pada semester tersebut.

Jika ditemukan:

* Data mahasiswa ditampilkan.

Jika tidak ditemukan:

* Program menampilkan pesan bahwa tidak ada mahasiswa pada semester tersebut.

Fitur ini berguna untuk memfilter data mahasiswa berdasarkan tingkat semester.

?

Kesimpulan Soal 1

Soal 1 bertujuan melatih pemahaman mengenai:

* Struct
* Array
* Input dan output data
* Perulangan
* Pencarian data
* Perhitungan statistik sederhana

Program ini merupakan contoh sederhana sistem pengelolaan data mahasiswa menggunakan bahasa C++.

?

Analisis Soal 2 — Stack & Queue

Tujuan Program

Program dibuat untuk memahami implementasi struktur data Stack dan Queue secara manual menggunakan array tanpa bantuan library STL.

Program menggambarkan sistem manajemen perpustakaan sederhana.

?

Analisis Pertanyaan A — Stack: Tumpukan Buku Kembali

1. Konsep Stack

Stack adalah struktur data yang menggunakan prinsip:
Last In First Out (LIFO)

Artinya:

* Data yang terakhir masuk akan keluar pertama.

Pada kasus ini, stack digunakan untuk menyimpan buku yang dikembalikan ke perpustakaan.

?

2. Cara Kerja Stack

Ketika buku dikembalikan:

* Buku dimasukkan ke posisi paling atas.

Ketika buku diambil:

* Buku paling atas diambil terlebih dahulu.

Program menggunakan variabel penanda posisi atas (top) untuk mengetahui letak data terakhir.

?

3. Operasi pada Stack

Push

Digunakan untuk menambahkan buku ke dalam stack.

Pop

Digunakan untuk mengambil atau menghapus buku paling atas.

Peek

Digunakan untuk melihat buku paling atas tanpa menghapusnya.

IsEmpty

Digunakan untuk mengecek apakah stack kosong.

IsFull

Digunakan untuk mengecek apakah stack sudah penuh.

?

4. Simulasi pada Soal

Program mensimulasikan:

* Menambahkan 4 buku ke stack
* Menampilkan buku paling atas
* Menghapus 2 buku
* Menampilkan isi stack setelah operasi selesai

Simulasi ini menunjukkan bahwa buku terakhir yang masuk akan keluar lebih dahulu sesuai prinsip LIFO.

?

Analisis Pertanyaan B — Queue: Antrian Peminjaman

1. Konsep Queue

Queue adalah struktur data yang menggunakan prinsip:
First In First Out (FIFO)

Artinya:

* Data yang pertama masuk akan keluar pertama.

Pada kasus ini, queue digunakan untuk mengatur antrian anggota perpustakaan yang ingin meminjam buku.

?

2. Cara Kerja Queue

Ketika anggota baru datang:

* Data dimasukkan ke bagian belakang antrian.

Ketika pelayanan selesai:

* Data paling depan keluar terlebih dahulu.

Program menggunakan:

* Front ? penanda antrian depan
* Rear ? penanda antrian belakang

?

3. Operasi pada Queue

Enqueue

Digunakan untuk menambahkan anggota ke antrian belakang.

Dequeue

Digunakan untuk menghapus anggota paling depan.

Peek

Digunakan untuk melihat anggota paling depan tanpa menghapus.

IsEmpty

Digunakan untuk mengecek apakah antrian kosong.

IsFull

Digunakan untuk mengecek apakah antrian penuh.

?

4. Simulasi pada Soal

Program mensimulasikan:

* Menambahkan 3 anggota ke antrian
* Menampilkan anggota paling depan
* Menghapus 1 anggota
* Menambahkan anggota baru
* Menampilkan isi queue setelah operasi

Simulasi menunjukkan bahwa anggota yang datang lebih dulu akan dilayani lebih dulu sesuai prinsip FIFO.

?

Kesimpulan Soal 2

Soal 2 bertujuan melatih pemahaman tentang:

* Struktur data Stack
* Struktur data Queue
* Penggunaan array sebagai media penyimpanan
* Operasi dasar Stack dan Queue
* Konsep LIFO dan FIFO

Materi ini penting karena Stack dan Queue merupakan dasar dari banyak sistem komputer seperti:

* Sistem antrian
* Undo/Redo
* Browser history
* Proses scheduling
* Manajemen data sistem komputer.

### Soal 2

Konsep yang Digunakan

Stack menggunakan prinsip:

LIFO (Last In First Out)
Data terakhir masuk akan keluar pertama.

Contoh:
Jika buku masuk:

Fisika Dasar
Kalkulus
Algoritma
Jaringan

Maka yang berada di paling atas adalah:

Jaringan

Jika dilakukan pop(), maka:

Jaringan keluar dulu.
Analisis Kebutuhan Program Stack
1. Struktur Data

Karena tidak boleh menggunakan STL, maka digunakan:

Array string statis ukuran 5
Variabel top

Contoh konsep:

string stack[5];
int top = -1;
Fungsi top

Menunjukkan indeks data paling atas.

top = -1 ? stack kosong
top = 0 ? ada 1 data
top = 4 ? stack penuh
Fungsi yang Wajib Dibuat
1. isEmpty()
Tujuan

Mengecek apakah stack kosong.

Logika
top == -1
2. isFull()
Tujuan

Mengecek apakah stack penuh.

Logika
top == MAX-1

Karena kapasitas 5:

top == 4
3. push(string judul)
Tujuan

Menambahkan buku ke stack.

Langkah:
Cek apakah stack penuh.
Jika tidak:
top++
simpan data ke array.
Ilustrasi

Sebelum push:

top = 1
[Kalkulus]
[Fisika]

Push "Algoritma":

top = 2
[Algoritma]
[Kalkulus]
[Fisika]
4. pop()
Tujuan

Menghapus buku paling atas.

Langkah:
Cek kosong atau tidak.
Ambil data paling atas.
top--
5. peek()
Tujuan

Menampilkan elemen paling atas tanpa menghapus.

Logika
stack[top]
Simulasi yang Diminta Soal
Data Push

Masukkan:

Fisika Dasar
Kalkulus
Algoritma
Jaringan

Isi stack:

TOP
Jaringan
Algoritma
Kalkulus
Fisika Dasar
Peek

Output:

Buku teratas: Jaringan
Pop 2 Kali
Pop pertama

Keluar:

Jaringan
Pop kedua

Keluar:

Algoritma

Sisa stack:

TOP
Kalkulus
Fisika Dasar
Hal Penting yang Dinilai Dosen
Kemungkinan Penilaian
Aspek	Penilaian
Penggunaan array statis	?
Tidak memakai STL	?
Implementasi fungsi lengkap	?
Penggunaan top benar	?
Pesan stack penuh/kosong	?
Output simulasi sesuai	?
Pertanyaan B – Queue: Antrean Peminjaman (25 poin)
Konsep yang Digunakan

Queue menggunakan prinsip:

FIFO (First In First Out)
Data pertama masuk akan keluar pertama.

Contoh:
Masuk:

Reza
Mia
Hendra

Yang keluar dulu:

Reza
Analisis Kebutuhan Queue
Struktur Data

Menggunakan:

array statis ukuran 5
variabel:
front
rear

Contoh:

string queue[5];
int front = -1;
int rear = -1;
Fungsi Variabel
front

Menunjukkan antrean paling depan.

rear

Menunjukkan antrean paling belakang.

Fungsi yang Harus Dibuat
1. isEmpty()
Kondisi kosong
front == -1 || front > rear
2. isFull()
Kondisi penuh
rear == MAX-1
3. enqueue(string nama)
Tujuan

Menambah anggota ke belakang antrean.

Langkah:
Cek penuh.
Jika kosong:
front = 0
rear++
Simpan data.
4. dequeue()
Tujuan

Menghapus antrean paling depan.

Langkah:
Cek kosong.
Ambil data queue[front]
front++
5. peek()
Tujuan

Menampilkan antrean paling depan.

Logika
queue[front]
Simulasi Soal Queue
Enqueue

Masuk:

Reza
Mia
Hendra

Isi queue:

FRONT ? Reza | Mia | Hendra ? REAR
Peek

Output:

Antrean depan: Reza
Dequeue

Reza keluar.

Sisa:

FRONT ? Mia | Hendra ? REAR
Enqueue Putri

Hasil:

FRONT ? Mia | Hendra | Putri ? REAR
Perbedaan Penting Stack dan Queue
Stack	Queue
LIFO	FIFO
push/pop	enqueue/dequeue
top	front & rear
Data terakhir keluar dulu	Data pertama keluar dulu
Algoritma Singkat
Stack
Mulai
Inisialisasi top = -1

Push data
Peek data atas
Pop 2 kali
Tampilkan isi stack
Selesai
Queue
Mulai
Inisialisasi front dan rear = -1

Enqueue 3 data
Peek data depan
Dequeue 1 data
Enqueue Putri
Tampilkan queue
Selesai
Kesimpulan

Soal ini menguji:

Pemahaman struktur data dasar.
Implementasi manual menggunakan array.
Pengelolaan indeks (top, front, rear).
Kondisi penuh dan kosong.
Simulasi operasi stack dan queue.

Inti utama:

Stack ? LIFO
Queue ? FIFO


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
