# 2403010171 - Andriana

## Informasi Pribadi
- **NIM** : 2403010171
- **Nama** : Andriana
- **Kelas** : E

## Informasi Ujian
- **Mata Kuliah** : Praktikum Algoritma dan Struktur Data
- **Semester** : Genap 2025/2026
- **Media Submit** : GitHub Pull Request
- **Bahasa** : C++
- **IDE** : Dev C++

---

## DAFTAR ISI
- [Soal 1](#soal-1)

## ANALISIS & PEMBAHASAN SOAL

### Soal 1

...(uraikan analisis dan pembahasan soal 1)...
Program ini dirancang untuk mengelola data buku secara terstruktur. Tantangan utamanya adalah bagaimana menyimpan berbagai jenis informasi (teks untuk judul, angka untuk tahun, dan desimal untuk harga) dalam satu kesatuan data. Solusi yang digunakan adalah menggunakan Struct, yang kemudian dikelompokkan ke dalam sebuah Array dengan kapasitas maksimal 5 elemen.

## Pembahasan Logika Kode
Struktur Data (struct): Mendefinisikan tipe data bentukan bernama Buku yang membungkus empat variabel: judul, pengarang, tahunTerbit, dan harga.

Input & Validasi: Program meminta jumlah buku yang ingin diinput. Terdapat logika pengecekan agar input tidak kurang dari 1 atau lebih dari 5 (sesuai kapasitas array).

Buffer Cleaning (cin.ignore()): Digunakan setelah cin >> jumlah untuk membersihkan karakter newline yang tersisa. Jika tidak digunakan, fungsi getline() untuk menginput judul buku akan terlewat secara otomatis.

Pencarian Nilai Tertinggi: Program melakukan iterasi (perulangan) pada array untuk membandingkan harga setiap buku. Jika ditemukan harga yang lebih besar dari variabel penampung (hargaTertinggi), maka variabel tersebut dan indeksnya akan diperbarui.

Filter Data: Untuk mencari buku berdasarkan tahun, program membandingkan variabel cariTahun dengan daftarBuku[i].tahunTerbit. Jika cocok, data ditampilkan; jika hingga akhir perulangan tidak ditemukan yang cocok, pesan kesalahan akan muncul menggunakan bantuan variabel boolean ditemukan


## SUMBER BELAJAR

Sebutkan sumber belajar yang digunakan, contohnya:
- Video pembelajaran online (YouTube, Coursera, dll.)
- Dokumentasi resmi bahasa C++