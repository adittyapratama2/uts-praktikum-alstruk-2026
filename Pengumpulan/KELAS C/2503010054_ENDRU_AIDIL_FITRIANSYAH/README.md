# [Isi NIM Kamu] - ENDRU AIDIL FITRIANSYAH

## Informasi Pribadi
- **NIM** : 2503010054
- **Nama** : ENDRU AIDL FITRIANSYAH
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

>### Soal 1

**A. Deskripsi Program**
Pada Soal 1, program dirancang untuk mengelola data akademik mahasiswa (NIM, Nama, Semester, dan IPK). Program ini memiliki beberapa fitur utama:
1. Menerima input jumlah mahasiswa secara dinamis.
2. Menampilkan seluruh data mahasiswa dalam bentuk tabel yang rapi.
3. Mencari dan menampilkan mahasiswa dengan IPK tertinggi.
4. Menghitung rata-rata IPK dari seluruh mahasiswa.
5. Memiliki fitur pencarian (filtering) untuk menampilkan daftar mahasiswa berdasarkan semester tertentu.

**B. Pembahasan & Logika Program**
- **Struktur Data (Struct):** Program menggunakan `struct Mahasiswa` untuk membungkus beberapa tipe data yang berbeda (`string nim`, `string nama`, `int semester`, `float ipk`) menjadi satu kesatuan entitas agar lebih mudah dikelola.
- **Alokasi Memori Dinamis:** Karena jumlah mahasiswa bergantung pada input *user*, program menggunakan array dinamis dengan pointer `Mahasiswa* mhs = new Mahasiswa[jumlah];`. Hal ini membuat memori lebih efisien karena kapasitas array dibuat persis sesuai kebutuhan saat program berjalan (Run-Time).
- **Manipulasi Input:** Saat mengambil input nama, program menggunakan fungsi `cin.ignore()` yang dilanjutkan dengan `getline(cin, mhs[i].nama)`. Ini adalah langkah penting (logika) untuk membersihkan *buffer enter* (newline) dari memori agar input string yang mengandung spasi tidak terlewat (ter-*skip*).
- **Format Tampilan Tabel:** Untuk membuat tabel rapi, program memanggil library `<iomanip>` dan memanfaatkan fungsi:
  - `setw(n)`: Untuk memberikan lebar spasi tetap pada kolom.
  - `left` / `right`: Untuk meratakan teks ke kiri atau ke kanan di dalam kolom tabel.
  - `fixed` dan `setprecision(2)`: Untuk mengunci format desimal IPK menjadi dua angka di belakang koma (contoh: 3.50).
- **Logika IPK Tertinggi & Rata-rata:** 
  - Saat mencetak tabel, program secara bersamaan menjumlahkan nilai `mhs[i].ipk` ke dalam variabel `totalIpk` untuk nanti dibagi dengan `jumlah` (menghitung rata-rata). 
  - Untuk IPK tertinggi, program menyimpan *indeks* (`ipkTertinggi = i;`) dari nilai IPK paling besar. Di dalam *looping*, jika ditemukan `mhs[i].ipk` yang nilainya lebih besar dari `mhs[ipkTertinggi].ipk`, maka indeks tersebut di-update.
- **Logika Pencarian Data (Filtering):** Program melakukan *Linear Search* menggunakan *looping* untuk mencocokkan `mhs[i].semester` dengan nilai `cari` yang diinputkan pengguna. Terdapat variabel *flag* `bool dataFound = false;`. Jika data semester ditemukan, statusnya diubah menjadi `true`. Jika setelah proses pencarian selesai status masih `false` (`!dataFound`), program akan mencetak pesan bahwa tidak ada mahasiswa di semester tersebut.

...

### Soal 2

**A. Deskripsi Program**
Pada Soal 2, program memodelkan dua sistem operasional dalam sebuah perpustakaan menggunakan dua struktur data dasar:
1. **Stack (Tumpukan):** Digunakan untuk sistem pengembalian buku.
2. **Queue (Antrian):** Digunakan untuk sistem antrian anggota yang ingin meminjam buku.

Kedua struktur data ini diimplementasikan secara manual (tanpa *Standard Template Library* / STL bawaan C++) menggunakan struktur array statis dengan batas maksimal kapasitas sebanyak 5 elemen.

**B. Pembahasan & Logika Bagian A - Stack (Tumpukan Buku Kembali)**
- **Prinsip Kerja:** Stack beroperasi menggunakan prinsip **LIFO (Last In First Out)**. Buku yang terakhir kali ditumpuk akan berada di posisi paling atas dan menjadi buku pertama yang diambil.
- **Deklarasi Struktur:** Menggunakan `struct StackBuku` yang menyimpan array `string buku[5]` untuk menyimpan judul buku, dan variabel `int top` sebagai penunjuk indeks elemen teratas.
- **Inisialisasi:** Pada awalnya, `top` diberi nilai `-1` (`init()`), yang merepresentasikan bahwa tumpukan sedang dalam keadaan kosong.
- **Logika Operasi Utama:**
  - `isFull()`: Mengecek apakah `top` sudah mencapai indeks maksimal (yakni `max - 1` atau 4).
  - `isEmpty()`: Mengecek apakah `top` masih bernilai `-1`.
  - `push(judul)`: Menambahkan buku. Jika stack tidak penuh, nilai `top` di-increment (`top++`), kemudian array `buku` pada indeks `top` diisi dengan judul buku yang baru.
  - `pop()`: Mengambil buku teratas. Jika stack tidak kosong, buku pada indeks `top` dikeluarkan (secara logis), lalu nilai `top` di-decrement (`top--`). Data lama akan tertimpa saat ada operasi `push` baru.
  - `peek()`: Hanya menampilkan data pada indeks `top` tanpa mengubah nilai `top` (tanpa menghapus data).

**C. Pembahasan & Logika Bagian B - Queue (Antrian Peminjaman)**
- **Prinsip Kerja:** Queue beroperasi menggunakan prinsip **FIFO (First In First Out)**. Anggota yang pertama kali masuk ke dalam antrian akan dilayani pertama kali.
- **Deklarasi Struktur:** Menggunakan `struct QueueAnggota` yang menyimpan array `string antrian[5]`, serta dua buah penunjuk: `int front` (penunjuk elemen terdepan) dan `int rear` (penunjuk elemen paling belakang).
- **Inisialisasi:** Variabel `front` dan `rear` diatur pada nilai `-1` di awal program.
- **Logika Operasi Utama:**
  - `isFull()`: Mengecek apakah `rear` sudah berada di indeks maksimal (`max - 1` atau 4).
  - `isEmpty()`: Mengecek apakah `front == -1` atau jika `front` sudah melewati `rear` (`front > rear`), yang menandakan semua orang di antrian sudah selesai dilayani.
  - `enqueue(nama)`: Menambah anggota ke dalam antrian. Jika antrian masih kosong, `front` diset ke `0`. Kemudian, `rear` di-increment (`rear++`) dan data nama dimasukkan ke array pada indeks `rear`.
  - `dequeue()`: Melayani anggota. Jika antrian tidak kosong, data pada indeks `front` dicetak sebagai tanda selesai dilayani, lalu `front` di-increment (`front++`) agar penunjuk bergeser ke orang berikutnya. Jika setelah dilayani antrian menjadi kosong (`front > rear`), maka nilai `front` dan `rear` di-reset kembali ke `-1` agar antrian bisa digunakan kembali dari indeks awal.

**D. Kesimpulan**
Penggunaan pendekatan prosedural dengan parameter *pass-by-reference* (`&`) pada parameter struct (contoh: `QueueAnggota &q`) memastikan bahwa manipulasi data di dalam fungsi akan langsung memengaruhi variabel asli yang ada di dalam fungsi `main()`. Pendekatan array statis ini sangat efisien dari segi memori untuk antrian skala kecil (kapasitas 5), meskipun memiliki kelemahan tidak dinamis dibandingkan implementasi menggunakan *Linked List*.

---

## SUMBER BELAJAR

Dalam mengerjakan ujian praktikum ini, referensi dan sumber belajar yang digunakan meliputi:

- Latihan soal UTS
- Youtube Dea Afrizal
- Website petani kode
- Website w3schools
- Website Guru99