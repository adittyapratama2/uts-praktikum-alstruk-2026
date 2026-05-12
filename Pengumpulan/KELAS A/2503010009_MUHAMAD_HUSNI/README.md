# 2503010009 - MUHAMAD_HUSNI

## Informasi Pribadi
- **NIM** : 2503010009
- **Nama** : MUHAMAD_HUSNI
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
- [Soal 2](#soal-2a #soal-2b)

## ANALISIS & PEMBAHASAN SOAL

### Soal 1

program ini dibuat untuk menyimpan dan mengolah data buku menggunakan bahasa c++

struct buku
digunakan untuk menyimpan data seperti judul, pengarang, tahun, harga

Buku buku[5]
digunakan untuk menyimpan data. indikator angka pada [] menunjukan maksimal data sesuai dengan angka yang di isi

setw()
untuk mengatur lebar kolom

program ini menggunakan beberapa perulangan seperti:
if (int i = 0; i < n; i++) 
if (buku[i].harga > buku[max].harga)
if (buku[i].tahun == cari)

dan menggunakan bool untuk menyimpan nilai true dan false


### Soal 2a

data dimasukkan secara berurutan yaitu T001, T002, T003, dan T004. Karena stack menggunakan konsep LIFO, maka data terakhir yang masuk yaitu T004 menjadi data paling atas. Saat proses pop dilakukan dua kali, maka T004 dan T003 keluar lebih dahulu sehingga data yang tersisa adalah T002 dan T001

### Soal 2b
data yang dimasukkan adalah Budi, Sari, dan Eko. Karena queue menggunakan konsep FIFO, maka data pertama yaitu Budi berada di posisi paling depan. Saat proses dequeue dilakukan, Budi keluar terlebih dahulu. Setelah itu ditambahkan data Dewi ke belakang antrian sehingga isi akhir queue menjadi Sari, Eko, dan Dewi. Program berhasil menunjukkan cara kerja Stack dan Queue sesuai konsep dasar struktur data.

## SUMBER BELAJAR

- youtube (jagat coding, study with student)
- Diskusi dan referensi tambahan menggunakan AI Assistant