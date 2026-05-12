# 2503010138 - ARFYN DIAZS ARYADA

## Informasi Pribadi
- **NIM** : 2503010138  
- **Nama** : ARFYN DIAZS ARYADA  
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

# Soal 1

Program ini digunakan untuk mengelola data mahasiswa menggunakan `struct` dan array. Data yang disimpan meliputi:
- NIM
- Nama
- Semester
- IPK

Program dapat:
- Menampilkan data mahasiswa
- Menghitung rata-rata IPK
- Menentukan IPK tertinggi
- Mencari mahasiswa berdasarkan semester

## Pembahasan

### Struct Mahasiswa

```cpp
struct mahasiswa{
    string nama;
    string nim;
    int semester;    
    float ipk;
};
```

Struct digunakan untuk mengelompokkan beberapa data mahasiswa dalam satu variabel.

---

### Input Data

Program meminta jumlah mahasiswa lalu melakukan input data menggunakan perulangan `for`.

```cpp
for (int a = 0; a < jumlh; a++)
```

Penggunaan `getline()` dipakai agar nama dapat menggunakan spasi.

---

### Menampilkan Data

Library:

```cpp
#include <iomanip>
```

digunakan untuk membuat tampilan tabel lebih rapi menggunakan:
- `setw()`
- `left`
- `setprecision()`

---

### Menghitung Rata-rata IPK

Total IPK dijumlahkan:

```cpp
totalipk += mhs[a].ipk;
```

Kemudian dihitung rata-ratanya:

```cpp
ratarata = totalipk / jumlh;
```

---

### Mencari IPK Tertinggi

Program membandingkan IPK setiap mahasiswa:

```cpp
if (mhs[a].ipk > mhs[ipktertinggi].ipk)
```

Data dengan IPK terbesar akan disimpan.

---

### Pencarian Semester

Program mencari mahasiswa berdasarkan semester menggunakan:

```cpp
if (mhs[a].semester == cariSemester)
```

Jika data ditemukan maka akan ditampilkan.

---

## Kelebihan Program

- Menggunakan struct sehingga data lebih rapi
- Dapat menghitung rata-rata IPK
- Dapat mencari IPK tertinggi
- Memiliki fitur pencarian semester

---

## Kekurangan Program

- Belum ada validasi input
- Belum menggunakan fungsi modular
- Kapasitas data masih terbatas

---

## Kesimpulan Soal 1

Program berhasil mengimplementasikan pengolahan data mahasiswa menggunakan struct dan array. Selain itu program juga menerapkan konsep searching dan perhitungan data sederhana.

---

# Soal 2

Program ini mengimplementasikan dua struktur data:
1. Stack
2. Queue

Stack digunakan untuk simulasi tumpukan buku, sedangkan Queue digunakan untuk simulasi antrian anggota.

---

# A. Stack

Stack menggunakan konsep:

- **LIFO (Last In First Out)**

Artinya data terakhir yang masuk akan keluar terlebih dahulu.

## Struct Stack

```cpp
struct stack
```

Struct digunakan untuk menyimpan data buku dan operasi stack.

---

## Fungsi Push

```cpp
void push (string data)
```

Digunakan untuk menambahkan buku ke stack.

---

## Fungsi Pop

```cpp
void pop ()
```

Digunakan untuk menghapus data paling atas.

---

## Fungsi Peek

```cpp
void peek ()
```

Digunakan untuk melihat data paling atas tanpa menghapusnya.

---

# B. Queue

Queue menggunakan konsep:

- **FIFO (First In First Out)**

Artinya data pertama yang masuk akan keluar terlebih dahulu.

---

## Fungsi Enqueue

```cpp
void enqueue(string nama)
```

Digunakan untuk menambahkan data ke antrian.

---

## Fungsi Dequeue

```cpp
void dequeue()
```

Digunakan untuk menghapus data paling depan.

---

## Fungsi Peek

```cpp
void peek()
```

Digunakan untuk melihat data terdepan.

---

## Fungsi tampilQueue

```cpp
void tampilQueue()
```

Digunakan untuk menampilkan seluruh isi queue.

---

## Kelebihan Program

- Implementasi stack dan queue dilakukan secara manual
- Menggunakan array statis
- Memiliki operasi dasar stack dan queue
- Mudah dipahami untuk pembelajaran dasar struktur data

---

## Kekurangan Program

- Kapasitas masih terbatas
- Belum menggunakan menu interaktif
- Belum menggunakan OOP penuh

---

## Kesimpulan Soal 2

Program berhasil menerapkan konsep stack dan queue menggunakan bahasa C++. Stack bekerja dengan metode LIFO sedangkan queue menggunakan FIFO.

Program ini membantu memahami operasi dasar struktur data seperti:
- push
- pop
- enqueue
- dequeue
- peek

---

# SUMBER BELAJAR

## Modul & Buku
- Modul Praktikum Algoritma dan Struktur Data
- Modul Struktur Data Dasar
- Buku Algoritma dan Pemrograman

## Website
- Petani Kode
- CodeSaya
- SantriKoding.com
- Dicoding
- Stack Overflow

## YouTube
- Jagat Koding
- Kelas Terbuka
- Video pembelajaran C++ lainnya