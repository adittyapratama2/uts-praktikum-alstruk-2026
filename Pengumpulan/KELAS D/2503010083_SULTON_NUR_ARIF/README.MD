# 2503010083 - SULTON_NUR_ARIF

## Informasi Pribadi
- **NIM** : 2503010083
- **Nama** : SULTON_NUR_ARIF
- **Kelas** : d

## Informasi Ujian
- **Mata Kuliah** : Praktikum Algoritma dan Struktur Data
- **Semester** : Genap 2025/2026
- **Media Submit** : GitHub Pull Request
- **Bahasa** : C++
- **IDE** : Dev C++

---

## DAFTAR ISI
- soal1
- soal2a
- soal2b

## ANALISIS & PEMBAHASAN SOAL

### Soal 1

Struktur Data yang Digunakan
struct Buku menyimpan 4 field berbeda tipe dalam satu unit data
Buku perpus[5] adalah array of struct, artinya 5 objek Buku disimpan berurutan di memori.

Analisis Fungsi tampilkanTabel
Dipisah jadi fungsi sendiri agar tidak duplikasi kode
Pakai setw dan left dari <iomanip> untuk alignment kolom
Dipanggil 2 kali: saat tampilkan semua buku dan hasil pencarian tahun.

### Soal 2
A.
Struktur Data yang Digunakan
Array statis data[5] + variabel top sebagai penanda posisi
top = -1 artinya stack kosong.

Analisis
LIFO terbukti dari urutan tampil: T004 keluar duluan meski masuk terakhir
isEmpty dan isFull dijadikan fungsi terpisah agar push/pop lebih bersih
Setiap operasi punya guard condition ? program tidak crash saat stack penuh/kosong.

B.
Struktur Data yang Digunakan
Array statis data[5] + dua variabel front dan rear
Keduanya mulai dari -1 (queue kosong).

Analisis
FIFO terbukti: Budi masuk pertama, keluar pertama
Reset front = rear = -1 saat elemen terakhir di-dequeue penting agar isEmpty() tetap akurat
Kelemahan implementasi ini: setelah beberapa dequeue, slot awal array tidak bisa dipakai lagi meski sudah kosong (bukan circular queue).

---

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
