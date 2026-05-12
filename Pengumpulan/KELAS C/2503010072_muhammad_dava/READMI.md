# 2503010072 - Muhammad_Dava

## Informasi Pribadi
- **NIM** : 2503010072
- **Nama** : Muhammad_Dava
- **Kelas** : C

## Informasi Ujian
- **Mata Kuliah** : Praktikum Algoritma dan Struktur Data
- **Semester** : Genap 2025/2026
- **Media Submit** : GitHub Pull Request
- **Bahasa** : C++
- **IDE** : Dev C++

---

# DAFTAR ISI
- [Soal 1](#soal-1)
- [Soal 2](#soal-2)

---

# ANALISIS & PEMBAHASAN SOAL

## Soal 1 – Array & Struct

### Analisis
Pada soal ini digunakan konsep **Array of Struct** untuk menyimpan data mahasiswa.  
Struct digunakan untuk mengelompokkan beberapa tipe data menjadi satu kesatuan, yaitu:
- nim
- nama
- semester
- ipk

Array digunakan agar program dapat menyimpan beberapa data mahasiswa sekaligus dengan kapasitas maksimal 5 data.

Program meminta pengguna memasukkan jumlah mahasiswa, kemudian melakukan input data menggunakan perulangan. Setelah data dimasukkan, program menampilkan seluruh data dalam bentuk tabel.

Pada pertanyaan B ditambahkan fitur:
1. Mencari mahasiswa dengan IPK tertinggi.
2. Menghitung rata-rata IPK seluruh mahasiswa.
3. Mencari mahasiswa berdasarkan semester tertentu.

### Pembahasan
Program menggunakan:
- `struct Mahasiswa` untuk menyimpan data mahasiswa.
- Array `Mahasiswa mhs[5]` sebagai tempat penyimpanan data.
- Perulangan `for` untuk input dan output data.
- Percabangan `if` untuk pencarian IPK tertinggi dan pencarian semester.
- Variabel tambahan untuk menghitung total dan rata-rata IPK.

Konsep Array dan Struct mempermudah pengelolaan data dalam jumlah banyak secara lebih rapi dan terstruktur.

---

## Soal 2 – Stack & Queue

### Analisis
Pada soal ini digunakan dua struktur data dasar yaitu:
1. Stack (LIFO / Last In First Out)
2. Queue (FIFO / First In First Out)

### Stack
Stack digunakan untuk menyimpan data buku yang dikembalikan ke perpustakaan.  
Konsep stack bekerja seperti tumpukan:
- Data terakhir masuk akan keluar pertama.

Program menggunakan:
- Array statis kapasitas 5.
- Variabel `top` untuk penanda posisi teratas stack.
- Operasi:
  - push()
  - pop()
  - peek()
  - isEmpty()
  - isFull()

### Queue
Queue digunakan untuk antrian peminjaman buku mahasiswa.  
Konsep queue bekerja seperti antrean:
- Data pertama masuk akan keluar pertama.

Program menggunakan:
- Array statis kapasitas 5.
- Variabel `front` dan `rear`.
- Operasi:
  - enqueue()
  - dequeue()
  - peek()
  - isEmpty()
  - isFull()

### Pembahasan
Pada implementasi Stack:
- `push()` digunakan untuk menambah data buku.
- `pop()` digunakan untuk menghapus buku paling atas.
- `peek()` digunakan untuk melihat data paling atas tanpa menghapusnya.

Pada implementasi Queue:
- `enqueue()` digunakan untuk menambah anggota ke antrean.
- `dequeue()` digunakan untuk menghapus anggota paling depan.
- `peek()` digunakan untuk melihat antrean paling depan.

Program juga menampilkan pesan kondisi penuh atau kosong agar pengguna mengetahui status struktur data.

Konsep Stack dan Queue sangat penting dalam pemrograman karena banyak digunakan pada sistem nyata seperti:
- Undo/Redo
- Riwayat browser
- Sistem antrean
- Pemrosesan data

---

# SUMBER BELAJAR

- google(petani kode)
- youtube(jagatkoding)
- youtube(kelasterbuka)
- google(kodesaya)



