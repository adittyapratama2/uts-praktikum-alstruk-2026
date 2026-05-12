# 2503010139 - Nazmiatul_Fitri

## Informasi Pribadi
- *NIM* : 2503010139
- *Nama* : Nazmiatul_Fitri
- *Kelas* : A

## Informasi Ujian
- *Mata Kuliah* : Praktikum Algoritma dan Struktur Data
- *Semester* : Genap 2025/2026
- *Media Submit* : GitHub Pull Request
- *Bahasa* : C++
- *IDE* : Dev C++

---

## DAFTAR ISI
- [Soal 1](#soal-1a & b)
- [Soal 2](#soal-2a & b)

## ANALISIS & PEMBAHASAN SOAL

### Soal 1a
Analisis Soal
Soal meminta pembuatan program C++ untuk menyimpan data buku menggunakan konsep Array of Struct. Data yang disimpan meliputi judul buku, pengarang, tahun terbit, dan harga. Program juga harus dapat menerima input beberapa buku dan menampilkan seluruh data yang telah dimasukkan.

Pembahasan
Program menggunakan struct untuk mengelompokkan beberapa data buku menjadi satu kesatuan. Setelah itu digunakan array of struct agar program dapat menyimpan lebih dari satu data buku, dengan kapasitas maksimal 5 buku.
Pengguna diminta memasukkan jumlah buku terlebih dahulu, kemudian data setiap buku diinput satu per satu menggunakan perulangan. Setelah semua data selesai dimasukkan, program menampilkan seluruh data buku dalam bentuk tabel agar lebih rapi dan mudah dibaca.
Program ini menerapkan konsep dasar C++ seperti:
struct
array
perulangan
input dan output data

### Soal 1b
Analisis Soal
Pada soal ini, program sebelumnya dikembangkan dengan menambahkan beberapa fitur pengolahan data buku. Program tidak hanya menyimpan dan menampilkan data, tetapi juga melakukan pencarian dan perhitungan sederhana terhadap data yang ada.

Pembahasan
Program menggunakan Array of Struct untuk menyimpan data beberapa buku. Setelah data diinput, program menjalankan beberapa proses tambahan, yaitu:
Mencari Buku dengan Harga Tertinggi
Program membandingkan harga setiap buku untuk menentukan buku dengan harga paling tinggi, kemudian menampilkan informasi lengkap buku tersebut.
Menghitung Rata-rata Harga Buku
Semua harga buku dijumlahkan lalu dibagi dengan jumlah buku sehingga diperoleh rata-rata harga seluruh buku.
Mencari Buku Berdasarkan Tahun Terbit
Pengguna diminta memasukkan tahun tertentu. Program kemudian memeriksa seluruh data buku dan menampilkan buku yang memiliki tahun terbit sesuai input pengguna. Jika tidak ada data yang cocok, program menampilkan pesan bahwa buku tidak ditemukan.

Program ini menerapkan konsep:
struct
array of struct
perulangan
percabangan
pencarian data
perhitungan rata-rata

### Soal 2a
Analisis Soal
Pada soal ini, program diminta untuk mengimplementasikan struktur data Stack secara manual tanpa menggunakan library STL. Stack digunakan untuk menyimpan riwayat nomor transaksi dengan prinsip LIFO (Last In First Out), yaitu data yang terakhir masuk akan menjadi data pertama yang keluar.
Program menggunakan array statis dengan kapasitas maksimal 5 elemen dan variabel top untuk menandai posisi data paling atas pada stack.

Pembahasan
Program memiliki beberapa fungsi utama, yaitu:
push()
Digunakan untuk menambahkan transaksi ke dalam stack. Sebelum menambah data, program memeriksa apakah stack penuh menggunakan fungsi isFull().
pop()
Digunakan untuk menghapus transaksi paling atas dari stack. Sebelum menghapus data, program memeriksa apakah stack kosong menggunakan fungsi isEmpty().
peek()
Digunakan untuk melihat transaksi yang berada di posisi teratas tanpa menghapusnya.
isEmpty()
Berfungsi untuk mengecek apakah stack kosong.
isFull()
Berfungsi untuk mengecek apakah stack sudah penuh.

Pada simulasi program:
Empat transaksi dimasukkan ke stack yaitu T001, T002, T003, dan T004.
Program kemudian menampilkan transaksi teratas menggunakan peek().
Setelah itu dilakukan pop() sebanyak dua kali sehingga dua transaksi teratas dihapus.
Terakhir, program menampilkan isi stack yang tersisa.
Program juga memberikan pesan informasi setiap operasi, seperti saat data berhasil ditambahkan, dihapus, atau ketika stack penuh maupun kosong.

### Soal 2b
Analisis Soal

Pada soal ini, program diminta untuk mengimplementasikan struktur data Queue secara manual tanpa menggunakan library STL. Queue digunakan untuk mensimulasikan antrian pelanggan kasir dengan prinsip FIFO (First In First Out), yaitu data yang pertama masuk akan menjadi data pertama yang keluar.
Program menggunakan array statis dengan kapasitas maksimal 5 elemen serta variabel front dan rear untuk mengatur posisi awal dan akhir antrian.

Pembahasan
Program memiliki beberapa fungsi utama, yaitu:
enqueue()
Digunakan untuk menambahkan pelanggan ke dalam antrian. Sebelum data ditambahkan, program memeriksa apakah queue penuh menggunakan fungsi isFull().
dequeue()
Digunakan untuk menghapus pelanggan yang berada di posisi paling depan antrian. Sebelum menghapus data, program memeriksa apakah queue kosong menggunakan fungsi isEmpty().
peek()
Digunakan untuk melihat pelanggan yang berada di posisi terdepan tanpa menghapus data dari queue.
isEmpty()
Berfungsi untuk mengecek apakah antrian kosong.
isFull()
Berfungsi untuk mengecek apakah antrian sudah penuh.

Pada simulasi program:
Tiga pelanggan dimasukkan ke antrian yaitu Budi, Sari, dan Eko.
Program menampilkan pelanggan terdepan menggunakan peek().
Setelah itu satu pelanggan dikeluarkan dari antrian menggunakan dequeue().
Kemudian pelanggan baru bernama Dewi ditambahkan ke antrian.
Isi queue ditampilkan setiap selesai operasi sehingga perubahan antrian dapat terlihat dengan jelas.

## SUMBER BELAJAR

Sebutkan sumber belajar yang digunakan, contohnya:

- Modul Praktikum Algoritma dan Struktur Data
- Modul Struktur Data Dasar
- Pembelajaran online (YouTube, Internet, dll.)
- Dokumentasi resmi bahasa C++