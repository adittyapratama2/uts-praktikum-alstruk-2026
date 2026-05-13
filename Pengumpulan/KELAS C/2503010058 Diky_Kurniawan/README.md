# 2503010058 - DIKY_KURNIAWAN

## Informasi Pribadi

- **NIM** : 2503010058
- **Nama** : DIKY_KURNIAWAN
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

---

## ANALISIS & PEMBAHASAN SOAL

---

## Soal 1

### Deskripsi Soal

Membuat program untuk mengelola data mahasiswa menggunakan struct, kemudian:

1. Menampilkan seluruh data dalam bentuk tabel
2. Menentukan mahasiswa dengan IPK tertinggi
3. Menghitung rata-rata IPK
4. Mencari mahasiswa berdasarkan semester tertentu

---

### Analisis

Pada soal ini digunakan pendekatan penyimpanan data dengan **struktur (struct)** yang berisi beberapa atribut mahasiswa, yaitu NIM, nama, semester, dan IPK. Data tersebut kemudian disimpan dalam sebuah **array**, sehingga program dapat menangani lebih dari satu mahasiswa.

Proses pertama adalah menerima input jumlah mahasiswa, kemudian dilakukan pengisian data satu per satu. Setelah semua data tersimpan, program menampilkan data dalam bentuk tabel agar lebih mudah dibaca.

Untuk mencari mahasiswa dengan IPK tertinggi, program melakukan **perbandingan nilai IPK secara berulang** dari setiap data mahasiswa. Nilai terbesar akan disimpan sebagai acuan hasil akhir.

Perhitungan rata-rata IPK dilakukan dengan cara menjumlahkan seluruh IPK mahasiswa, kemudian dibagi dengan jumlah data yang ada.

Selain itu, program juga menyediakan fitur pencarian berdasarkan semester. Program akan membandingkan input semester yang dicari dengan data yang ada, lalu menampilkan mahasiswa yang sesuai. Jika tidak ditemukan, maka akan diberikan pesan bahwa data tidak ada.

Secara keseluruhan, program ini memanfaatkan konsep dasar:

- Penyimpanan data terstruktur
- Perulangan untuk pemrosesan data
- Percabangan untuk pengambilan keputusan

---

### Algoritma

1. Input jumlah mahasiswa
2. Input data mahasiswa (NIM, nama, semester, IPK)
3. Tampilkan seluruh data
4. Tentukan IPK tertinggi
5. Hitung rata-rata IPK
6. Input semester yang dicari
7. Tampilkan hasil pencarian

---

### Kompleksitas

- **Time Complexity**: O(n)
- **Space Complexity**: O(n)

---

### Evaluasi

- Tidak ada validasi input jumlah mahasiswa
- Kapasitas data masih terbatas
- Tampilan IPK bisa dibuat lebih rapi

---

## Soal 2

### Deskripsi Soal

Membuat implementasi dua struktur data dasar, yaitu Stack dan Queue, menggunakan array.

---

### Analisis

Pada soal ini dibahas dua struktur data penting, yaitu **Stack** dan **Queue**, yang memiliki cara kerja berbeda dalam pengolahan data.

**Stack** bekerja dengan prinsip _Last In First Out (LIFO)_, artinya data yang terakhir dimasukkan akan menjadi data pertama yang dikeluarkan. Struktur ini biasanya dianalogikan seperti tumpukan buku, di mana buku yang terakhir diletakkan berada di posisi paling atas dan diambil terlebih dahulu.

Dalam prosesnya, setiap penambahan data akan ditempatkan di posisi paling atas, sedangkan penghapusan data juga dilakukan dari posisi tersebut. Program juga dapat melihat elemen paling atas tanpa menghapusnya.

Sedangkan **Queue** menggunakan prinsip _First In First Out (FIFO)_, di mana data yang pertama masuk akan menjadi data pertama yang keluar. Konsep ini mirip dengan antrian, seperti antrian di kasir atau layanan publik.

Pada queue, data ditambahkan dari bagian belakang dan dihapus dari bagian depan. Program juga dapat menampilkan elemen terdepan tanpa menghapusnya.

Program ini menunjukkan bagaimana kedua struktur data tersebut bekerja melalui simulasi penambahan dan penghapusan data, sehingga perbedaan antara LIFO dan FIFO dapat terlihat dengan jelas.

---

### Algoritma

**Stack:**

1. Inisialisasi stack
2. Tambahkan beberapa data
3. Tampilkan data teratas
4. Hapus beberapa data
5. Tampilkan isi stack

**Queue:**

1. Inisialisasi queue
2. Tambahkan beberapa data
3. Tampilkan data terdepan
4. Hapus satu data
5. Tambahkan data baru
6. Tampilkan isi queue

---

### Kompleksitas

- Operasi dasar (tambah, hapus, lihat): **O(1)**
- Space Complexity: **O(n)**

---

### Evaluasi

- Queue masih menggunakan metode sederhana (belum circular)
- Data masih ditentukan langsung dalam program
- Kapasitas penyimpanan terbatas

---

## SUMBER BELAJAR

- website petani kode
- youtube jagat koding
- website w3schol
- youtube kelas terbuka
- chat gpt
- dari teman
