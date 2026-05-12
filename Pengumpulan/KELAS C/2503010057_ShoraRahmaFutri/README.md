```text
# 2503010001 - WAHYU_ADIWIBOWO

## Informasi Pribadi
- **NIM** : 2503010057
- **Nama** : SHORA_RAHMA_FUTRI
- **Kelas** : C

## Informasi Ujian
- **Mata Kuliah** : Praktikum Algoritma dan Struktur Data
- **Semester** : Genap 2025/2026
- **Media Submit** : GitHub Pull Request
- **Bahasa** : C++
- **IDE** : Code Blocks

---

## DAFTAR ISI
- [Soal 1](#soal-1)
- [Soal 2](#soal-2)
- [Soal 2 B](#soal-2B)

## ANALISIS & PEMBAHASAN SOAL

### Soal 1

Program C++ tersebut digunakan untuk mengelola data buku menggunakan `struct` dan array. Program memakai library `iostream` untuk input-output dan `iomanip` untuk mengatur tampilan angka desimal pada harga buku.
Struct `databuku` berfungsi menyimpan data buku berupa judul, pengarang, tahun terbit, dan harga. Di dalam fungsi `main()`, dibuat array `buku[5]` untuk menyimpan maksimal lima data buku.
Program dimulai dengan meminta pengguna memasukkan jumlah buku, kemudian melakukan input data menggunakan perulangan `for`. Fungsi `getline()` digunakan agar judul dan pengarang yang memiliki spasi dapat terbaca dengan benar.
Setelah data diinput, program menampilkan seluruh data buku dalam bentuk tabel. Penggunaan `fixed` dan `setprecision(2)` membuat harga tampil dengan dua angka di belakang koma.
Selanjutnya program mencari buku dengan harga tertinggi menggunakan proses perbandingan dalam perulangan. Program juga menghitung rata-rata harga buku dengan menjumlahkan seluruh harga lalu membaginya dengan jumlah buku.
Pada bagian akhir, program menyediakan fitur pencarian buku berdasarkan tahun terbit. Jika data ditemukan maka informasi buku akan ditampilkan, sedangkan jika tidak ditemukan program menampilkan pesan bahwa data tidak ada.
Secara keseluruhan, program ini menerapkan konsep dasar C++ seperti struct, array, looping, percabangan, pencarian data, dan perhitungan rata-rata.


### Soal 2

Program C++ tersebut merupakan simulasi sederhana struktur data Stack untuk menyimpan riwayat transaksi. Stack menggunakan konsep LIFO (Last In First Out), yaitu data yang terakhir masuk akan menjadi data pertama yang keluar.
Program diawali dengan deklarasi konstanta MAX = 5 yang menentukan kapasitas maksimal stack. Data transaksi disimpan dalam array stackdata[MAX], sedangkan variabel top digunakan untuk menunjukkan posisi elemen paling atas pada stack. Nilai awal top = -1 menandakan stack masih kosong.
Program memiliki beberapa fungsi utama. Fungsi isEmpty() digunakan untuk mengecek apakah stack kosong, sedangkan isFull() untuk mengecek apakah stack sudah penuh. Fungsi push() berfungsi menambahkan transaksi ke stack. Jika stack penuh, program akan menampilkan pesan error, namun jika masih tersedia ruang maka transaksi akan ditambahkan ke posisi teratas.
Fungsi pop() digunakan untuk menghapus transaksi paling atas dari stack. Jika stack kosong maka tidak ada data yang dapat dihapus. Selain itu terdapat fungsi peek() yang menampilkan transaksi teratas tanpa menghapusnya, serta fungsi tampilanstack() untuk menampilkan seluruh isi stack dari atas ke bawah.
Pada fungsi main(), program melakukan simulasi dengan menambahkan empat transaksi yaitu T001, T002, T003, dan T004. Setelah itu program menampilkan transaksi teratas menggunakan peek(), lalu menghapus dua transaksi menggunakan pop(). Terakhir, program menampilkan isi stack yang tersisa setelah proses penghapusan.

### Soal 2 B

Program C++ tersebut merupakan simulasi sederhana struktur data **Queue** untuk antrian pelanggan kasir. Queue menggunakan konsep **FIFO (First In First Out)**, yaitu pelanggan yang pertama masuk akan menjadi yang pertama keluar dari antrian.
Program menggunakan array `queuePelanggan[MAX]` dengan kapasitas maksimal 5 data. Variabel `front` digunakan untuk menunjukkan posisi pelanggan paling depan, sedangkan `rear` menunjukkan posisi pelanggan paling belakang. Nilai awal `front` dan `rear` adalah `-1` yang menandakan queue masih kosong.
Fungsi `isEmpty()` digunakan untuk mengecek apakah queue kosong, sedangkan `isFull()` digunakan untuk mengecek apakah queue sudah penuh. Fungsi `enqueue()` berfungsi menambahkan pelanggan ke dalam antrian. Jika queue penuh maka data tidak dapat ditambahkan, namun jika masih tersedia ruang maka pelanggan akan masuk ke posisi belakang queue.
Fungsi `dequeue()` digunakan untuk menghapus pelanggan yang berada di posisi paling depan. Setelah pelanggan keluar, nilai `front` akan bertambah. Jika seluruh data sudah keluar, maka `front` dan `rear` akan direset menjadi `-1` agar queue kembali kosong.
Selain itu, fungsi `peek()` digunakan untuk melihat pelanggan yang berada di posisi terdepan tanpa menghapus data, sedangkan fungsi `tampilQueue()` digunakan untuk menampilkan seluruh isi antrian dari depan ke belakang.
Pada fungsi `main()`, program melakukan simulasi dengan menambahkan pelanggan `Budi`, `Sari`, dan `Eko` ke dalam antrian. Setelah itu program menampilkan pelanggan terdepan menggunakan `peek()`, kemudian menghapus satu pelanggan menggunakan `dequeue()`. Terakhir, program menambahkan pelanggan baru bernama `Dewi` dan menampilkan isi queue terbaru.
Secara keseluruhan, program ini menerapkan konsep dasar queue menggunakan array, fungsi, percabangan, dan perulangan dalam bahasa C++.

---

## SUMBER BELAJAR

Sebutkan sumber belajar yang digunakan, contohnya:

- Modul Praktikum Algoritma dan Struktur Data
- Video pembelajaran online (YouTube, Coursera, dll.)
- Dokumentasi resmi bahasa C++
```