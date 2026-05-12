

# STRUKTUR FILE README.md

```text
# 2503010007 - MOHAMAD ZIDNI ILMA

## Informasi Pribadi
- **NIM** : 2503010007
- **Nama** : MOHAMAD ZIDNI ILMA
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

Baik, mari kita analisis dan bahas program C++ yang kamu buat. Program ini cukup lengkap karena tidak hanya menyimpan data buku, tetapi juga menampilkan tabel, menghitung statistik, dan melakukan pencarian. Berikut pembahasan sistematis:

---

## 🔎 Analisis Program

### 1. **Struktur Data**
- Struct `Buku` menyimpan:
  - `judul` (string)
  - `pengarang` (string)
  - `tahunTerbit` (int)
  - `harga` (float)

→ Sudah sesuai untuk merepresentasikan data buku.

---

### 2. **Fungsi Pendukung**
- `cetakGaris()` → mencetak garis pemisah tabel.
- `tampilkanTabel()` → menampilkan daftar buku dalam format tabel rapi menggunakan `iomanip`.
- `bersihkanBuffer()` → membersihkan buffer input agar tidak terjadi masalah saat menggunakan `getline`.

→ Fungsi-fungsi ini modular dan memudahkan pembacaan kode.

---

### 3. **Alur Program Utama**
- Input jumlah buku (validasi 1–5).
- Input detail setiap buku (judul, pengarang, tahun, harga).
- Menampilkan tabel seluruh buku.
- Pertanyaan B:
  1. **Mencari buku dengan harga tertinggi** → menggunakan pencarian linear.
  2. **Menghitung rata-rata harga** → menjumlahkan semua harga lalu dibagi jumlah buku.
  3. **Pencarian berdasarkan tahun terbit** → menampilkan semua buku dengan tahun tertentu.

---

## 📊 Pembahasan Konsep

### A. **Pencarian Harga Tertinggi**
- Algoritma: linear search.
- Kompleksitas: \( O(n) \).
- Cocok karena jumlah data kecil (maksimal 5).

### B. **Rata-rata Harga**
- Menggunakan perhitungan sederhana:
  \[
  \text{rata} = \frac{\text{total harga}}{\text{jumlah buku}}
  \]
- Kompleksitas: \( O(n) \).

### C. **Pencarian Tahun Terbit**
- Algoritma: linear search.
- Menampilkan semua hasil yang cocok.
- Jika tidak ada, program memberi pesan “Tidak ada buku”.

---

## ✅ Kelebihan Program
- **Modular**: fungsi terpisah untuk tabel, garis, buffer.
- **Rapi**: penggunaan `setw`, `setprecision` membuat tabel terformat.
- **Interaktif**: ada validasi input jumlah buku, pesan informatif.
- **Statistik tambahan**: harga tertinggi dan rata-rata.

---

## ⚠️ Kekurangan / Potensi Perbaikan
1. **Jumlah data terbatas** (maksimal 5). Bisa dikembangkan dengan `vector` agar fleksibel.
2. **Pencarian tahun** hanya berdasarkan kesamaan persis. Bisa ditambah fitur pencarian rentang tahun.
3. **Output harga** belum menampilkan format mata uang (misalnya `Rp 50,000.00`). Bisa ditambah `locale` atau manipulasi string.
4. **Tidak ada sorting**. Bisa ditambahkan fitur urutkan buku berdasarkan harga atau tahun.

---

## 📘 Kesimpulan
Program ini sudah **lengkap dan sesuai kebutuhan soal**:
- Input data buku.
- Menampilkan tabel rapi.
- Menjawab pertanyaan B (harga tertinggi, rata-rata, pencarian tahun).
- Algoritma sederhana namun efektif untuk jumlah data kecil.


### Soal 2

---

## 🔎 Analisis Program

### 1. **Struktur Kelas**
- `class Stack` menggunakan:
  - Array statis `data[MAX]` untuk menyimpan elemen (string).
  - Variabel `top` sebagai penunjuk indeks elemen teratas.
- Fungsi utama:
  - `isEmpty()` → cek apakah stack kosong.
  - `isFull()` → cek apakah stack penuh.
  - `push()` → menambahkan elemen ke atas stack.
  - `pop()` → menghapus elemen teratas.
  - `peek()` → melihat elemen teratas tanpa menghapus.
  - `display()` → menampilkan isi stack dari atas ke bawah.

---

### 2. **Alur Program Utama**
- Membuat objek `Stack s`.
- Simulasi:
  1. Push 4 transaksi: T001, T002, T003, T004.
  2. Peek → menampilkan transaksi teratas (T004).
  3. Pop dua kali → menghapus T004 dan T003.
  4. Display → menampilkan isi stack setelah operasi (T002, T001).

---

### 3. **Konsep yang Digunakan**
- **Stack** adalah struktur data dengan prinsip **LIFO (Last In, First Out)**:
  - Elemen terakhir yang masuk akan menjadi yang pertama keluar.
- Operasi dasar:
  - `push(x)` → \( O(1) \)
  - `pop()` → \( O(1) \)
  - `peek()` → \( O(1) \)
  - `isEmpty()` / `isFull()` → \( O(1) \)

---

## 📊 Output Program (Simulasi)

```
Push: T001
Push: T002
Push: T003
Push: T004
Transaksi teratas: T004
Pop: T004
Pop: T003
Isi Stack: T002 T001
```

---

## ✅ Kelebihan
- **Modular**: setiap operasi stack dibuat sebagai fungsi terpisah.
- **Validasi penuh/kosong**: mencegah error saat push/pop.
- **Output informatif**: setiap operasi memberi pesan jelas.
- **Sesuai teori**: implementasi manual tanpa STL, cocok untuk latihan dasar.

---

## ⚠️ Kekurangan / Perbaikan
1. **Kapasitas terbatas** (hanya 5). Bisa dikembangkan dengan `vector` agar dinamis.
2. **Display** hanya menampilkan dari atas ke bawah. Bisa ditambah format tabel agar lebih rapi.
3. **Pop** tidak mengembalikan nilai elemen yang dihapus (hanya mencetak). Bisa dibuat agar return value lebih fleksibel.

---

## 📘 Kesimpulan
Program ini sudah **tepat** untuk menjelaskan konsep **Stack manual**:
- Menggunakan array statis.
- Memanfaatkan variabel `top`.
- Menunjukkan operasi dasar (push, pop, peek, display).
- Kompleksitas operasi konstan \( O(1) \).

---

## SUMBER BELAJAR



- BUKU TEKS STRUKTUR DATA
-REFERENSI ONLINE
-LATIHAN SOALL