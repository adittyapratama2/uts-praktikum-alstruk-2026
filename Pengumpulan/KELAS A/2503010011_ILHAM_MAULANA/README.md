# 2503010011 - ILHAM_MAULANA

## Informasi Pribadi
- **NIM** : 2503010011
- **Nama** : ILHAM_MAULANA
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
**Analisis:**
Program menggunakan struct Buku untuk mengelompokkan berbagai tipe data (string, int, float) menjadi satu entitas.menggunakan array statis dengan batas maksimal 5 data.Terdapat validasi input (if (jumlah < 1 || jumlah > 5)) yang berfungsi mencegah buffer overflow atau kesalahan akses indeks array jika pengguna memasukkan angka di luar jangkauan.

**Pembahasan:**
Struktur (Struct)
Bagian ini menjelaskan bagaimana Anda membungkus berbagai tipe data (teks dan angka) menjadi satu objek bernama Buku. Tanpa ini, Anda harus membuat banyak array terpisah untuk judul, pengarang, dan harga.
Mencari Harga Tertinggi
Pembahasan ini menjelaskan algoritma pencarian nilai maksimum. Program membandingkan harga buku saat ini dengan harga buku sebelumnya, lalu menyimpan posisi (indeks) buku yang paling mahal.

### Soal 2
**Analisis:**
Menggunakan struct riwayatTransaksi yang membungkus variabel top (sebagai penunjuk indeks teratas) dan array data.
Bersifat Passing by Reference (&s) pada fungsi init, push, dan pop agar perubahan data pada fungsi tersebut tersimpan di variabel utama.
Menggunakan variabel global (front dan rear) untuk melacak posisi depan dan belakang antrean,dan Menggunakan array global data[max].
**Pembahasan:**
-

---

**Pembahasan:**
Stack menggunakan prinsip LIFO (Last In First Out), di mana data yang terakhir dimasukkan adalah yang pertama kali dikeluarkan.Indikator Top: Variabel s.top berfungsi sebagai penunjuk posisi ujung tumpukan.
Dimulai dari -1 (kosong).
Saat push, top naik (+1).
Saat pop, top turun (-1).
Queue menggunakan prinsip FIFO (First In First Out), di mana data yang pertama masuk akan menjadi yang pertama dilayani/keluar.
Variabel Front & Rear:
rear (belakang) digunakan untuk memasukkan data baru (enqueue).
front (depan) digunakan untuk mengeluarkan data (dequeue).

## SUMBER BELAJAR
- Modul ppt praktikum algortima dan struktur data
- Modul stack
- modul queue
- video pembelajaran lewat youtube (study with student)