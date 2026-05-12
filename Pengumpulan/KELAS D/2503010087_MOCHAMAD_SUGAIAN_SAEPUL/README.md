\# 2503010087 - MOCHAMAD\_SUGIANA\_SAEPUL



\## Informasi Pribadi

\- \*\*NIM\*\* : 2503010087

\- \*\*Nama\*\* : MOCHAMAD\_SUGIANA\_SAEPUL

\- \*\*Kelas\*\* : D



\## Informasi Ujian

\- \*\*Mata Kuliah\*\* : Praktikum Algoritma dan Struktur Data

\- \*\*Semester\*\* : Genap 2025/2026

\- \*\*Media Submit\*\* : GitHub Pull Request

\- \*\*Bahasa\*\* : C++

\- \*\*IDE\*\* : Dev C++



\---



\## DAFTAR ISI

\- \[Soal 1](#soal-1)

\- \[Soal 2](#soal-2A)

\- \[Soal 2](#soal-2B)



\## ANALISIS \& PEMBAHASAN SOAL



\### Soal 1

Pada soal 1, program dibuat menggunakan konsep Array of Struct untuk menyimpan data buku. Struct digunakan karena mampu mengelompokkan beberapa tipe data berbeda ke dalam satu kesatuan, seperti judul, pengarang, tahun terbit, dan harga. Dengan demikian, data buku menjadi lebih terorganisir dan mudah dikelola.



Program menggunakan array dengan kapasitas maksimal 5 data untuk menyimpan beberapa struct Buku. Pengguna diminta memasukkan jumlah buku, kemudian data setiap buku diinput menggunakan perulangan for. Fungsi getline() digunakan untuk membaca input string yang mengandung spasi, seperti judul buku dan nama pengarang.



Setelah proses input selesai, program menampilkan seluruh data dalam bentuk tabel menggunakan iomanip seperti setw() dan setprecision() agar tampilan lebih rapi. Selain itu, program juga melakukan pencarian buku dengan harga tertinggi menggunakan proses perbandingan dalam perulangan. Nilai rata-rata harga buku dihitung dengan menjumlahkan seluruh harga kemudian dibagi jumlah data.



Pada bagian akhir, program meminta pengguna memasukkan tahun tertentu untuk mencari buku berdasarkan tahun terbit. Jika data ditemukan maka informasi buku akan ditampilkan, sedangkan jika tidak ditemukan akan muncul pesan bahwa tidak ada buku pada tahun tersebut.



\### Soal 2



Pada soal 2, program mengimplementasikan struktur data Stack dan Queue secara manual tanpa menggunakan library STL.



Pada bagian Stack, program digunakan untuk menyimpan riwayat transaksi kasir. Stack bekerja dengan konsep LIFO (Last In First Out), yaitu data terakhir yang masuk akan menjadi data pertama yang keluar. Stack dibuat menggunakan array statis dengan kapasitas maksimal 5 elemen dan variabel top sebagai penanda posisi data teratas.



Beberapa fungsi dibuat untuk mengelola stack, yaitu:



push() untuk menambah data transaksi,

pop() untuk menghapus data teratas,

peek() untuk melihat data paling atas,

isFull() untuk mengecek kondisi penuh,

isEmpty() untuk mengecek kondisi kosong.



Program kemudian mensimulasikan penambahan beberapa transaksi, menampilkan transaksi teratas, lalu menghapus data transaksi sesuai ketentuan soal.



Pada bagian Queue, program digunakan untuk mensimulasikan antrian pelanggan kasir. Queue bekerja dengan konsep FIFO (First In First Out), yaitu data yang pertama masuk akan menjadi data pertama keluar. Queue dibuat menggunakan array statis dengan variabel front dan rear.



Fungsi yang digunakan meliputi:



enqueue() untuk menambah pelanggan ke antrian,

dequeue() untuk menghapus pelanggan dari antrian,

peek() untuk melihat pelanggan terdepan,

isFull() dan isEmpty() untuk pengecekan kondisi queue.



Program mensimulasikan beberapa pelanggan masuk ke antrian, menampilkan pelanggan terdepan, menghapus satu pelanggan, kemudian menambahkan pelanggan baru. Setelah setiap operasi, isi queue ditampilkan agar perubahan data dapat terlihat dengan jelas.



\---



\## SUMBER BELAJAR



Sebutkan sumber belajar yang digunakan, contohnya:



\- Modul Praktikum Algoritma dan Struktur Data

\- Modul Pointer

\- Modul Rekursif

\- Modul Struktur Data Dasar

\- Video pembelajaran online (YouTube, Coursera, dll.)

\- Stack Overflow

