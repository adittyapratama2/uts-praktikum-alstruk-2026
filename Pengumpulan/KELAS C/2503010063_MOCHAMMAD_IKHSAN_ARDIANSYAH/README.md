# 2503010001 - WAHYU_ADIWIBOWO

## Informasi Pribadi
- **NIM** : 2503010063
- **Nama** : MOCHAMMAD IKHSAN ARDIANSYAH
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
Program ini dirancang untuk mengelola data buku secara dinamis (maksimal 5 data) menggunakan konsep Structure (struct). Program mampu menerima input, menampilkan data dalam bentuk tabel, serta melakukan pengolahan data statistik sederhana dan pencarian.
- [Soal 2](#soal-2)
Program ini merupakan simulasi pengelolaan riwayat transaksi kasir menggunakan struktur data Stack (Tumpukan). Sistem ini bekerja dengan prinsip LIFO (Last In, First Out), di mana transaksi yang terakhir masuk akan menjadi yang pertama diproses atau dihapus.
Program ini mengimplementasikan struktur data Queue (Antrean) menggunakan array. Sistem ini bekerja dengan prinsip FIFO (First In, First Out), di mana elemen yang pertama kali masuk akan menjadi yang pertama kali keluar atau dilayani.

## ANALISIS & PEMBAHASAN SOAL

### Soal 1

...(uraikan analisis dan pembahasan soal 1)...
---

### 1. Struktur Data (`struct`)

Program menggunakan `struct` bernama `toko_buku` untuk mengelompokkan berbagai tipe data (judul, pengarang, tahun, dan harga) ke dalam satu kesatuan objek. Hal ini mempermudah pengelolaan data buku sebagai satu entitas.

### 2. Input Data dan Batasan Array

Program meminta pengguna menentukan jumlah buku (1-5). Data disimpan dalam sebuah **Array of Struct** dengan kapasitas statis sebanyak 5 elemen. Proses input dilakukan menggunakan perulangan `for` sesuai jumlah yang dimasukkan pengguna.

### 3. Pencarian Nilai Tertinggi

Program mencari buku termahal dengan cara membandingkan harga setiap buku di dalam perulangan. Sebuah variabel penanda (`tinggi`) menyimpan indeks dari buku yang memiliki harga paling besar untuk ditampilkan di akhir.

### 4. Perhitungan Rata-Rata (Potensi Kesalahan)

Terdapat bagian untuk menghitung total harga, namun ada sedikit ketidakkonsistenan:

* Variabel `rata` bertipe **integer**, padahal harga buku bertipe **float**. Ini bisa menyebabkan hilangnya angka di belakang koma.
* Program hanya menjumlahkan total harga tetapi **belum membaginya** dengan jumlah buku, sehingga hasil yang muncul adalah "Total Harga", bukan "Rata-rata".

### 5. Fitur Pencarian Berdasarkan Tahun

Program memiliki fitur pencarian linear. Pengguna memasukkan tahun tertentu, lalu program mengecek satu per satu data buku. Jika tahun terbit cocok, identitas buku ditampilkan. Jika hingga akhir perulangan tidak ada yang cocok (menggunakan bantuan variabel *boolean* `temukan`), program akan memberikan pesan informasi.

### 6. Catatan Input String

Penggunaan `cin` pada input judul dan pengarang akan mengalami kendala jika pengguna memasukkan lebih dari satu kata (menggunakan spasi), karena `cin` hanya membaca karakter hingga spasi pertama ditemukan.

### Soal 2

...(uraikan analisis dan pembahasan soal 2)...
Berikut adalah analisis dan pembahasan singkat mengenai program Stack (Tumpukan) tersebut:

---

### 1. Konsep Dasar Struktur Data

Program ini mengimplementasikan struktur data **Stack** menggunakan prinsip **LIFO (*Last In, First Out*)**. Artinya, data yang terakhir dimasukkan adalah data yang pertama kali akan dikeluarkan. Bayangkan seperti tumpukan piring atau riwayat transaksi kasir.

### 2. Komponen Utama Program

* **Kapasitas Terbatas**: Tumpukan dibatasi maksimal 5 data (`MAX = 5`).
* **Indeks `top**`: Variabel ini berfungsi sebagai penanda posisi data paling atas. Jika `-1`, berarti tumpukan kosong.
* **Keamanan Data**: Terdapat fungsi `isEmpty` (cek kosong) dan `isFull` (cek penuh) untuk mencegah kesalahan program saat menambah atau menghapus data melebihi kapasitas.

### 3. Operasi-Operasi yang Terjadi

* **Push (Tambah)**: Menambahkan ID transaksi ke posisi paling atas. Jika sudah mencapai 5 data, sistem akan menolak input baru.
* **Pop (Hapus)**: Mengambil atau menghapus data yang berada di posisi paling atas.
* **Peek (Lihat)**: Hanya mengintip data teratas tanpa menghapusnya dari tumpukan.
* **Display (Tampilkan)**: Menunjukkan seluruh isi tumpukan dari urutan yang paling baru ke yang paling lama.

### 4. Alur Simulasi pada Program

1. **Pengisian**: Transaksi `T001` hingga `T004` dimasukkan secara berurutan. Posisi teratas saat ini adalah `T004`.
2. **Pengecekan**: Fungsi `peek` dipanggil, sehingga sistem menginformasikan bahwa `T004` adalah data teratas.
3. **Penghapusan**: Dilakukan `pop` sebanyak dua kali. Karena prinsip LIFO, maka `T004` dihapus terlebih dahulu, disusul oleh `T003`.
4. **Hasil Akhir**: Saat fungsi `display` dipanggil, tumpukan hanya menyisakan `T002` (sebagai posisi teratas/TOP) dan `T001`.

---

Berikut adalah analisis dan pembahasan singkat mengenai program **Queue** (Antrean) tersebut:

---

### 1. Konsep Dasar Struktur Data

Program ini menerapkan struktur data **Queue** dengan prinsip **FIFO (*First In, First Out*)**. Artinya, data yang pertama kali masuk adalah yang pertama kali akan keluar atau dilayani, layaknya sebuah antrean di dunia nyata.

### 2. Komponen Penanda Antrean

* **Indeks `depan` (Front)**: Menunjuk ke elemen yang sedang berada di barisan paling depan untuk segera dilayani.
* **Indeks `belakang` (Rear)**: Menunjuk ke elemen terakhir yang baru saja bergabung ke dalam antrean.
* **Kapasitas Maksimal**: Antrean dibatasi hanya untuk 5 orang saja.

### 3. Logika Operasi

* **Masuk (Enqueue)**: Saat orang baru datang, posisi `belakang` akan bertambah dan data disimpan di sana. Jika sudah mencapai batas maksimal, sistem akan menolak orang baru.
* **Keluar (Dequeue)**: Saat pelayanan selesai, orang di posisi `depan` akan dihapus. Caranya adalah dengan menggeser penanda `depan` ke orang berikutnya di belakangnya.
* **Pengecekan (Kosong/Penuh)**: Program secara otomatis memastikan tidak ada proses "keluar" jika antrean kosong dan tidak ada proses "masuk" jika antrean sudah penuh.

### 4. Alur Simulasi pada Program

1. **Pengisian Awal**: Budi, Sari, dan Eko masuk ke antrean. Saat ini, Budi berada di posisi paling depan.
2. **Pelayanan**: Fungsi `keluar` dipanggil, sehingga Budi selesai dilayani dan meninggalkan antrean. Sekarang, Sari menjadi orang terdepan.
3. **Penambahan Baru**: Dewi masuk ke antrean dan menempati posisi di belakang Eko.
4. **Hasil Akhir**: Antrean saat ini menyisakan Sari (terdepan), diikuti oleh Eko, dan ditutup oleh Dewi.

### 5. Catatan Teknis (Keterbatasan)

Program ini menggunakan jenis **Linear Queue**. Kelemahannya adalah jika penanda `belakang` sudah mencapai batas maksimal, antrean akan dianggap penuh meskipun ada ruang kosong di bagian depan yang sudah ditinggalkan (setelah proses `keluar`). Ini berbeda dengan konsep *Circular Queue* yang lebih efisien dalam memanfaatkan ruang.

---

## SUMBER BELAJAR

Sebutkan sumber belajar yang digunakan, contohnya:

Modul Praktikum Algoritma dan Struktur Data
Modul Struktur Data Dasar
Video pembelajaran online (YouTube, Coursera, dll.)
Dokumentasi resmi bahasa C++