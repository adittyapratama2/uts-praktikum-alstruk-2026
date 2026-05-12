# 2503010073 - MUHAMAD ATARDIYANSAHK 

## Informasi Pribadi
- **NIM** : 2503010073  
- **Nama** : MUHAMAD ATARDIYANSAHK  
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

---

## ANALISIS & PEMBAHASAN SOAL

### Soal 1

**Analisis:**

Program ini dibuat untuk mengelola data buku menggunakan **struktur (struct)** dalam bahasa C++. Data yang disimpan meliputi judul, pengarang, tahun terbit, dan harga buku.

Konsep yang digunakan:
- Struct (struktur data)
- Array
- Perulangan (looping)
- Percabangan (if)
- Input/output
- Operasi aritmatika

Alur program:
1. User memasukkan jumlah buku (maksimal 5)
2. Program menginput data buku (judul, pengarang, tahun, harga)
3. Program menampilkan seluruh data dalam bentuk tabel
4. Program mencari buku dengan harga tertinggi
5. Program menghitung rata-rata harga buku
6. Program mencari buku berdasarkan tahun tertentu

---

**Pembahasan:**

1. **Struct Buku**
```cpp
struct buku{
    string judul, pengarang;
    int tahun;
    float harga;
};
```

2. **Input Data**
```cpp
for(int i=0; i<j; i++)
```

3. **Output Tabel**
Menggunakan `setw()` agar tampilan rapi.

4. **Mencari Harga Tertinggi**
```cpp
int t=0;
for(int i=0; i<j; i++) {
    if(bk[i].harga > bk[t].harga) {
        t=i;
    }
}
```

5. **Rata-rata Harga**
```cpp
rata += bk[i].harga;
rata/j;
```

6. **Pencarian Berdasarkan Tahun**
```cpp
if(bk[i].tahun == cari)
```

7. **Kondisi Tidak Ditemukan**
```cpp
if(!ditemukan)
```

---

### Soal 2

**Analisis:**

Program ini mensimulasikan dua struktur data dasar yaitu **Stack** dan **Queue**.

- **Stack** menggunakan konsep **LIFO (Last In First Out)**  
- **Queue** menggunakan konsep **FIFO (First In First Out)**  

Struktur data disimpan menggunakan array dengan kapasitas maksimal 5.

Konsep yang digunakan:
- Stack (push, pop, peek)
- Queue (enqueue, dequeue, peek)
- Circular Queue
- Array statis
- Percabangan dan perulangan

Alur program:
1. Simulasi operasi stack (push, peek, pop)
2. Menampilkan isi stack
3. Simulasi queue pelanggan (enqueue, dequeue)
4. Menampilkan isi queue sebelum dan sesudah perubahan

---

**Pembahasan:**

### A. Stack

1. **Deklarasi**
```cpp
int stackArr[MAX];
int top = -1;
```

2. **Cek Kondisi**
```cpp
isEmptyStack() → top == -1
isFullStack() → top == MAX - 1
```

3. **Push**
```cpp
top++;
stackArr[top] = x;
```

4. **Pop**
```cpp
top--;
```

5. **Peek**
Menampilkan elemen paling atas tanpa menghapus.

6. **Tampil Stack**
```cpp
for (int i = top; i >= 0; i--)
```

---

### B. Queue

1. **Deklarasi**
```cpp
string queueArr[MAX];
int front = 0, rear = -1, count = 0;
```

2. **Cek Kondisi**
```cpp
isEmptyQueue() → count == 0
isFullQueue() → count == MAX
```

3. **Enqueue**
```cpp
rear = (rear + 1) % MAX;
queueArr[rear] = nama;
count++;
```

4. **Dequeue**
```cpp
front = (front + 1) % MAX;
count--;
```

5. **Peek**
Menampilkan elemen paling depan.

6. **Tampil Queue**
```cpp
for (int j = 0; j < count; j++)
```

---

## SUMBER BELAJAR

- Website cplusplus.com
- Website stackoverflow.com
- Website learncpp.com
- Youtube Kelas Terbuka  
- Youtube Derek Banas  
