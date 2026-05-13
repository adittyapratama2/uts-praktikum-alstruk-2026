# STRUKTUR FILE README.md

```text
# 2503010019_Muhamad_Igna_Rizki
## Informasi Pribadi
- **NIM** : 2503010019
- **Nama** : Muhamad_Igna_Rizki
- **Kelas** : A

## Informasi Ujian
- **Mata Kuliah** : Praktikum Algoritma dan Struktur Data
- **Semester** : Genap 2025/2026
- **Media Submit** : GitHub Pull Request
- **Bahasa** : C++
- **IDE** : Dev C++

---

## DAFTAR ISI
- [Soal 1 Deklarasi Struct dan Input Data](#soal-1 Pencarian dan Statistik)
- [Soal 2 Stack Riwayat Transaksi ](#soal-2 Queue Antrian Pelanggan)

## ANALISIS & PEMBAHASAN SOAL

### Soal 1

Program ini menggunakan struct Buku dan array of struct berkapasitas lima elemen untuk mengelompokkan serta mengelola data judul, pengarang, tahun, dan harga secara terorganisir dalam memori. Implementasinya memanfaatkan pustaka <iomanip> dengan fungsi setw() untuk menyusun tabel data yang rapi, sementara nilai statistik seperti harga tertinggi dan rata-rata dihitung melalui proses iterasi linear. Fitur pencarian tahun menggunakan mekanisme flagging untuk validasi data, didukung oleh penggunaan cin.ignore() guna memastikan proses input

### Soal 2

Kedua program ini mengimplementasikan struktur data linear secara manual menggunakan array statis, di mana Stack menerapkan prinsip LIFO dengan kontrol variabel top, sedangkan Queue menggunakan prinsip FIFO dengan variabel front dan rear. Pada Stack, operasi penambahan dan penghapusan data terpusat pada satu ujung yang sama, sementara pada Queue, data masuk melalui rear dan keluar melalui front untuk mensimulasikan antrian yang adil. Penggunaan fungsi isFull() dan isEmpty() pada kedua struktur ini sangat krusial untuk mencegah kesalahan memori dan memastikan integritas data selama operasi penambahan atau pengambilan elemen dilakukan.
---

## SUMBER BELAJAR

- Modul Praktikum Algoritma dan Struktur Data
- youtube