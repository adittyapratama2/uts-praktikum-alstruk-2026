# 2503010123 - BAYU_MUHAMAD_ARIB_IRFANI

## Informasi Pribadi
- **NIM** : 2503010123
- **Nama** : BAYU_MUHAMAD_ARIB_IRFANI
- **Kelas** : E

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

A. Konsep Dasar
Struct Buku: Tipe data bentukan yang memiliki 4 anggota:
judul (string) - menyimpan judul buku
pengarang (string) - menyimpan nama pengarang
tahunTerbit (int) - menyimpan tahun terbit
harga (float) - menyimpan harga buku
Array of Struct: Buku daftarBuku[MAX_BUKU] adalah array berkapasitas 5 elemen bertipe struct Buku
#define MAX_BUKU 5: Preprocessor directive untuk mendefinisikan konstanta maksimal buku

B. Algoritma Program
Input Data Buku:
Meminta jumlah buku dengan validasi (1-5)
Melakukan perulangan untuk input judul, pengarang, tahunTerbit, dan harga
Menggunakan cin >> untuk input data

Menampilkan Tabel Buku:
Header tabel dengan kolom: No, Judul, Pengarang, Tahun, Harga
Perulangan untuk menampilkan semua data dengan format tab (\t)

Mencari Buku Termahal:
Menggunakan linear search dengan membandingkan semua harga
Menyimpan indeks buku dengan harga tertinggi
Menghitung Rata-rata Harga:
Menjumlahkan semua harga buku
Membagi total dengan jumlah buku

Pencarian Berdasarkan Tahun:
Input tahun yang dicari
Filter buku yang tahunTerbit-nya sesuai
Menampilkan pesan jika tidak ditemukan

C. Kelebihan Program
Validasi input mencegah data di luar rentang
Tampilan tabel terstruktur
Pesan error untuk data tidak ditemukan
Menggunakan konstanta untuk fleksibilitas kapasitas

D. Kekurangan Program
Menggunakan cin >> sehingga input string tidak bisa mengandung spasi
Format tabel dengan tab bisa tidak rapi jika panjang string bervariasi
Tidak ada fitur edit dan hapus data

### Soal 2

A. Analisis Stack (LIFO - Last In First Out)
Struktur Data:

Array statis data[MAX] sebagai penyimpanan

Variabel top sebagai penunjuk elemen teratas (inisialisasi -1)

Operasi Dasar:

push(): Menambah data dengan menaikkan top, lalu menyimpan data

pop(): Menghapus data dengan menurunkan top

peek(): Melihat data pada indeks top tanpa menghapus

isEmpty(): Mengecek apakah top == -1

isFull(): Mengecek apakah top == MAX-1

Skenario Simulasi:

Push 4 transaksi (T001-T004)

Peek transaksi teratas (T004)

Pop 2 transaksi (T004, T003)

Pop sisa transaksi hingga kosong

Uji error handling saat stack kosong dan penuh

Kompleksitas: Semua operasi O(1)

B. Analisis Queue (FIFO - First In First Out)
Struktur Data:

Array statis data[MAX] sebagai penyimpanan
Variabel front (terdepan) dan rear (terbelakang)
Menggunakan circular queue dengan operasi modulus

Circular Queue:
Keunggulan: Menghemat ruang dengan memanfaatkan kembali indeks yang kosong

Rumus:
Cek penuh: (rear + 1) % MAX == front
Enqueue: rear = (rear + 1) % MAX
Dequeue: front = (front + 1) % MAX

Operasi Dasar:
enqueue(): Menambah pelanggan di belakang antrian
dequeue(): Melayani pelanggan terdepan
peek(): Melihat pelanggan terdepan
isEmpty(): Mengecek front == -1
isFull(): Circular check

Skenario Simulasi:
Enqueue 3 pelanggan (Budi, Sari, Eko)
Peek pelanggan terdepan (Budi)
Dequeue 1 pelanggan (Budi dilayani)
Enqueue Dewi
Enqueue hingga penuh
Dequeue semua pelanggan
Uji error handling
Kompleksitas: Semua operasi O(1)

C. Perbandingan Stack dan Queue
Stack dan Queue merupakan dua struktur data dasar yang memiliki perbedaan mendasar dalam prinsip operasinya. Stack menggunakan prinsip LIFO (Last In First Out) dimana data yang terakhir dimasukkan akan menjadi data pertama yang dikeluarkan, seperti tumpukan piring dimana piring yang diletakkan terakhir akan diambil pertama kali. Operasi penambahan data pada Stack disebut push yang selalu menempatkan data di posisi teratas, sedangkan operasi penghapusan disebut pop yang selalu mengambil data dari posisi teratas. Stack hanya membutuhkan satu variabel penunjuk yaitu top untuk menandai elemen teratas, dan kondisi kosong terjadi saat top bernilai -1 sedangkan kondisi penuh saat top sama dengan kapasitas maksimal dikurangi satu.

Sementara itu, Queue menggunakan prinsip FIFO (First In First Out) dimana data yang pertama dimasukkan akan menjadi data pertama yang dikeluarkan, seperti antrian orang di kasir dimana orang yang datang pertama akan dilayani pertama. Operasi penambahan data pada Queue disebut enqueue yang menempatkan data di posisi belakang antrian, sedangkan operasi penghapusan disebut dequeue yang mengambil data dari posisi terdepan. Queue membutuhkan dua variabel penunjuk yaitu front untuk menandai elemen terdepan dan rear untuk menandai elemen terbelakang. Kondisi kosong pada Queue terjadi saat front bernilai -1, sedangkan kondisi penuh menggunakan pengecekan circular yaitu saat rear yang sudah ditambah satu dan dimodulus kapasitas sama dengan front.

Kedua struktur data ini memiliki kompleksitas O(1) untuk semua operasi dasarnya, namun memiliki aplikasi yang berbeda. Stack cocok digunakan untuk fitur undo/redo, navigasi back pada browser, dan evaluasi ekspresi matematika. Sedangkan Queue cocok untuk antrian printer, penjadwalan task, dan buffering data. Dalam implementasi program ini, Stack digunakan untuk menyimpan riwayat transaksi sehingga transaksi terakhir selalu berada di atas, sedangkan Queue digunakan untuk antrian pelanggan sehingga pelanggan yang datang pertama akan dilayani pertama.

D. Kelebihan Program
Implementasi manual tanpa library STL
Circular queue untuk efisiensi memori
Error handling lengkap (penuh/kosong)
Display dengan penanda visual (TOP/FRONT/REAR)
Fungsi modular dan terstruktur

E. Kekurangan Program
Kapasitas array statis (terbatas)
Tipe data terbatas pada string
Tidak ada fitur searching atau update data

## SUMBER BELAJAR

- Modul Praktikum Algoritma dan Struktur Data 
- Video pembelajaran online (YouTube, Coursera, dll.)
- Dokumentasi resmi bahasa C++