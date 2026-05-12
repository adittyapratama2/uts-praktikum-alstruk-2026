 LAPORAN PRAKTIKUM ALGORITMA DAN STRUKTUR DATA

**Nama** : Wildan Juliansyah 
**NIM** : 25030100074
**Kelas** : C

---

## Deskripsi Tugas
Laporan ini berisi implementasi dari dua soal praktikum yang menggunakan bahasa C++ mengenai:
1. Pengelolaan Data Mahasiswa (Struct, Array, Search, & Average).
2. Simulasi Struktur Data Linear (Stack & Queue).

## Analisis & Pembahasan

### Soal 1: Manajemen Data Mahasiswa
Program ini mendemonstrasikan penggunaan `struct` untuk menyimpan data mahasiswa secara terorganisir. 
- **Analisis**: Program menggunakan array statis `mhs[5]`. Untuk menangani input nama yang mengandung spasi, digunakan `getline()`.
- **Pembahasan**: Penanganan input buffer sangat krusial di sini. Tanpa `cin.ignore()`, program akan melewati input nama setelah penginputan angka. Algoritma pencarian nilai tertinggi dilakukan dengan membandingkan IPK antar elemen array.

### Soal 2: Implementasi Stack & Queue
Program ini mensimulasikan dua antrean data yang berbeda aturan mainnya.
- **Stack (Tumpukan)**: Menggunakan konsep LIFO (*Last In First Out*). Cocok untuk data tumpukan buku.
- **Queue (Antrean)**: Menggunakan konsep FIFO (*First In First Out*). Cocok untuk simulasi antrean anggota perpustakaan.

## Cara Menjalankan
1. Buka file `.cpp` menggunakan **Dev C++**.
2. Kompilasi dan Jalankan (*F11*).
3. Masukkan input sesuai instruksi pada konsol.

## Sumber Belajar
- Modul Praktikum Algoritma dan Struktur Data.
- Dokumentasi C++ (cppreference.com).
- Stack Overflow.