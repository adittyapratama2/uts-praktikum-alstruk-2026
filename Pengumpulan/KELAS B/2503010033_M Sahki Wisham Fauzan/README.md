# 2503010033 - M_SAHKI_WISHAM_FAUZAN

## Informasi Pribadi
- **NIM** : 2503010033
- **Nama** : M_SAHKI_WISHAM_FAUZAN
- **Kelas** : B

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

Analisis:
Soal ini meminta pembuatan sistem penyimpanan data buku menggunakan konsep Array of Struct dengan kapasitas maksimal 5 data. Struktur (struct) dipilih karena data buku memiliki tipe data yang beragam (heterogen), seperti string untuk judul, int untuk tahun, dan float untuk harga. Penggunaan array statis memudahkan pengelolaan data dalam indeks yang berurutan.

Pembahasan:

1. Deklarasi & Input: Program menggunakan struct Buku untuk mengelompokkan informasi judul, pengarang, tahun terbit, dan harga. Pada proses input, digunakan cin.ignore() sebelum getline() untuk membersihkan buffer agar input judul yang mengandung spasi tidak terlewati.

2. Statistik: Untuk menghitung rata-rata, program melakukan iterasi (perulangan) pada seluruh elemen array untuk menjumlahkan total harga. Pencarian harga tertinggi dilakukan dengan teknik pembandingan nilai maximum secara real-time di dalam loop.

3. Pencarian: Fitur pencarian tahun menggunakan algoritma Linear Search sederhana. Jika tahun yang dimasukkan pengguna cocok dengan data di array, informasi buku ditampilkan; jika hingga akhir loop tidak ada yang cocok, program memberikan pesan "Tidak ada buku yang terbit pada tahun tersebut".

### Soal 2

Analisis:
Soal ini mensimulasikan dua sistem berbeda dalam kasir supermarket: Stack (LIFO - Last In First Out) untuk riwayat transaksi dan Queue (FIFO - First In First Out) untuk antrian pelanggan. Implementasi dilakukan secara manual menggunakan array statis tanpa bantuan library STL untuk menguji pemahaman struktur data dasar.

Pembahasan :

1. Stack (Riwayat Transaksi):

Menggunakan variabel top sebagai penanda posisi data terakhir.  

Fungsi push akan menambah nilai top, sedangkan pop akan menguranginya.  

Berdasarkan skenario, setelah melakukan 4 kali push dan 2 kali pop, data yang tersisa di stack adalah dua transaksi pertama (T001 dan T002) karena transaksi terbaru (T004 dan T003) dihapus terlebih dahulu sesuai prinsip LIFO.

2. Queue (Antrian Pelanggan):

Menggunakan dua penanda, yaitu front (untuk keluar/dequeue) dan rear (untuk masuk/enqueue).  

Saat dilakukan enqueue 3 pelanggan (Budi, Sari, Eko), front menunjuk ke Budi.  

Operasi dequeue akan mengeluarkan Budi, sehingga pelanggan terdepan berikutnya adalah Sari. Penambahan pelanggan baru (Dewi) akan ditempatkan di posisi rear setelah Eko.  

Program selalu mengecek kondisi isFull dan isEmpty untuk mencegah overflow atau underflow pada array.


---

## SUMBER BELAJAR

- Modul Praktikum Algoritma dan Struktur Data (Materi Array, Struct, Stack, Queue)
- Dokumentasi resmi C++ (cplusplus.com) untuk penggunaan iomanip dan string.
- Materi kuliah Teknik Informatika tentang struktur data statis.
