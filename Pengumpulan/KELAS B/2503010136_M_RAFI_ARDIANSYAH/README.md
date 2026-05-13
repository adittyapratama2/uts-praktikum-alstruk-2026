# 2503010136 - M Rafi Ardiansyah

## Informasi Pribadi
- **NIM** : 2503010136
- **Nama** : M Rafi Ardiansyah
- **Kelas** : B

## Informasi Ujian
- **Mata Kuliah** : Praktikum Algoritma dan Struktur Data
- **Semester** : Genap 2025/2026
- **Media Submit** : GitHub Pull Request
- **Bahasa** : C++
- **IDE** : Dev C++ / VS Code

---

## DAFTAR ISI
- [Soal 1](#soal-1)
- [Soal 2](#soal-2)

## ANALISIS & PEMBAHASAN SOAL

### Soal 1: Manajemen Data Mahasiswa (Array of Struct)

**Analisis:**
Soal ini meminta pembuatan program untuk mengelola data mahasiswa dengan menggunakan konsep **Array of Struct**. Struktur data ini dipilih karena mampu menyimpan berbagai tipe data (string, int, float) yang saling berhubungan dalam satu entitas objek. Kapasitas dibatasi maksimal 5 data sesuai instruksi soal.

**Pembahasan:**
1. **Struktur Data:** Mendeklarasikan `struct Mahasiswa` yang berisi anggota `nim`, `nama`, `semester`, dan `ipk`.
2. **Format Tabel:** Menggunakan library `<iomanip>` dengan fungsi `setw()` untuk memastikan tampilan tabel tetap rapi meskipun panjang karakter nama berbeda-beda.
3. **Logika Statistik:** - Pencarian IPK tertinggi dilakukan dengan membandingkan nilai IPK satu per satu menggunakan perulangan (*Linear Search*).
   - Rata-rata IPK dihitung dengan akumulasi total nilai dibagi jumlah mahasiswa.
4. **Fitur Pencarian:** Menggunakan perulangan dengan kondisi IF untuk memfilter mahasiswa berdasarkan semester tertentu. Jika tidak ada yang cocok, sistem memberikan pesan informatif menggunakan variabel *flag* (boolean).

### Soal 2: Sistem Perpustakaan (Stack & Queue)

**Analisis:**
Implementasi struktur data **Stack** (Tumpukan) dan **Queue** (Antrian) dilakukan secara manual tanpa menggunakan library STL. Hal ini bertujuan untuk memahami mekanisme indeks `top` pada Stack serta `front` dan `rear` pada Queue dalam mengelola memori array statis.

**Pembahasan:**
1. **Stack (LIFO - Last In First Out):**
   - Digunakan untuk tumpukan buku yang dikembalikan. 
   - Fungsi `push` menambah data ke indeks teratas, sementara `pop` menghapus data terakhir.
   - Pengecekan kondisi `isFull` dan `isEmpty` sangat krusial agar tidak terjadi *stack overflow* atau *underflow*.
2. **Queue (FIFO - First In First Out):**
   - Digunakan untuk antrian anggota perpustakaan.
   - Data masuk melalui `rear` dan keluar melalui `front`.
   - Program menyertakan mekanisme reset indeks (`front = rear = -1`) saat antrian kosong agar ruang array dapat digunakan kembali secara optimal.

---

## SUMBER BELAJAR

- **Modul Praktikum Algoritma dan Struktur Data** (Materi Array of Struct, Stack, dan Queue)
- **Modul Struktur Data Dasar** - Pemahaman LIFO dan FIFO.
- **Dokumentasi Resmi C++ (cplusplus.com)** - Referensi penggunaan `<iomanip>` dan `getline`.
- **YouTube Pembelajaran** - Visualisasi struktur data linear.
- **Stack Overflow** - Troubleshooting error "Permission Denied" pada compiler.
