# 2503010056 - ARPANUL_HAKIM

## Informasi Pribadi
- **NIM** : 2503010056
- **Nama** : ARPANUL_HAKIM
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
**Analisis Masalah:**
Program ini menggunakan tipe data `Struct` untuk menggabungkan beberapa informasi mahasiswa (NIM, Nama, Semester, dan IPK) ke dalam satu wadah. Data tersebut kemudian disimpan dalam bentuk Array of Struct dengan kapasitas maksimal 5 mahasiswa.

**Pembahasan Logika Kode:**
- **Input & Output:** Program menggunakan *looping* untuk menerima input data mahasiswa satu per satu. Untuk menampilkan hasil akhir berupa tabel, digunakan bantuan library `<iomanip>` agar format antar kolom terlihat sejajar dan rapi.
- **Pencarian & Statistik:** Untuk mencari IPK tertinggi dan menghitung rata-rata, program mengulang pembacaan isi array sambil membandingkan dan menjumlahkan nilainya. Sedangkan untuk fitur pencarian berdasarkan semester, program menggunakan metode pencarian linier yang mencocokkan input pengguna dengan data di setiap baris secara berurutan.

### Soal 2
**Analisis Masalah:**
Program ini menyimulasikan sistem perpustakaan menggunakan struktur data Stack dan Queue. Sesuai syarat soal, program dibuat secara manual murni menggunakan Array statis berkapasitas 5 elemen tanpa mengandalkan library bawaan C++ (STL).

**Pembahasan Logika Kode:**
- **Stack (Tumpukan Buku):** Menerapkan prinsip LIFO (*Last In First Out*). Operasi menambah buku (`push`) dan mengambil buku (`pop`) hanya dilakukan dari satu sisi atas yang dikontrol oleh sebuah variabel penunjuk bernama `top`.
- **Queue (Antrian Peminjaman):** Menerapkan prinsip FIFO (*First In First Out*). Operasi antrian dikendalikan oleh dua variabel penunjuk, yaitu `front` untuk memantau orang di barisan paling depan yang akan dipanggil (`dequeue`), dan `rear` untuk memantau orang yang baru masuk ke antrian belakang (`enqueue`).

---

## SUMBER BELAJAR
- Modul Praktikum Algoritma dan Struktur Data
- Teman
- Modul Struktur Data Dasar
- Video pembelajaran online (YouTube)