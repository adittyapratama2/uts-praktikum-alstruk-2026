# 2503010001 - WAHYU_ADIWIBOWO

## Informasi Pribadi
- **NIM** : 2503010069
- **Nama** : MAULANA_SUBAKTI
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

Analisis Program Daftar Buku (C++)
Struktur Data
Program menggunakan struct Bukuuntuk menyimpan 4 atribut per buku: juduldan pengarang(string), tahunTerbit(int), dan harga(float). Array daftarBuku[5]menampung hingga 5 objek struct tersebut.

Program Alur
1. Masukkan jumlah buku — pengguna memasukkan nilai n(1–5), lalu loop whilememvalidasi ulang jika di luar jarak.
2. Input data buku — forloop sebanyak niterasi mengisi setiap elemen array. cin.ignore()dipanggil setelah cin >> ndan setelah setiap input numerik ( tahunTerbit, harga) untuk membuang sisa buffer baris baru, sehingga getline()berikutnya tidak terskip.
3. Tabel keluaran — <iomanip>dipakai untuk memformat kolom:

setw()→ lebar kolom tetap
left/ right→ perataan teks
fixed+ setprecision(2)→ harga tampil 2 desimal


### Soal 2

Stack & Queue — Analisis Singkat
Gambaran Umum
Program mengimplementasikan dua struktur data menggunakan array statistik yang berkapasitas MAKS = 5: Stack untuk nomor transaksi dan Queue untuk nama pelanggan.

Stack — LIFO (Last In, First Out/Masuk Terakhir, Keluar Pertama)
Menggunakan satu pointer top = -1sebagai penanda posisi teratas. Push menambah data ke atas ( ++top), pop mengambil dari atas ( top--), dan mengintip hanya membaca tanpa menghapus. Stack gagal beroperasi jika penuh ( top == MAKS-1) atau kosong ( top == -1).
Setelah push 1–4 lalu dua kali pop, isi akhir stack adalah T002 → T001 dengan T002 di posisi teratas.

Antrian — FIFO (Masuk Pertama, Keluar Pertama)
Menggunakan tiga variabel: front, rear, dan jumlah, dengan teknik array melingkar melalui operator % MAKSagar slot bekas dequeue dapat dipakai ulang. Enqueue menambah di belakang, dequeue mengambil dari depan.
Setelah enqueue Budi–Sari–Eko, dequeue Budi, lalu enqueue Dewi — isi akhir queue adalah Sari → Eko → Dewi.

## SUMBER BELAJAR

Sebutkan sumber belajar yang digunakan :

- Modul Praktikum Algoritma dan Struktur Data
- Modul Struktur Data Dasar
- Video pembelajaran online (YouTube, Coursera, dll.)