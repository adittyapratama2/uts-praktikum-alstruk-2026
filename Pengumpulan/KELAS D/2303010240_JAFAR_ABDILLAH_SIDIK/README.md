# 2303010240 - JAFAR_ABDILLAH_SIDIK

## Informasi Pribadi
- **NIM** : 2303010240
- **Nama** : JAFAR_ABDILLAH_SIDIK
- **Kelas** : D

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

1. Struktur Data (Struct)
Structure atau struct adalah kumpulan dari beberapa variabel dengan beragam tipe data yang dibungkus dalam satu variabel. Program ini mendefinisikan sebuah struktur bernama mahasiswa. Ini adalah pendekatan Pemrograman Prosedural yang baik untuk mengelompokkan berbagai tipe data (string, int, float) menjadi satu kesatuan entitas.

*nim dan nama: Menggunakan string untuk menampung karakter alfanumerik.

*semester: Menggunakan int karena nilai semester adalah bilangan bulat.

*ipk: Menggunakan float karena nilai IPK memiliki angka di belakang koma.

2. Penggunaan Array Statis
Baris mahasiswa mhs[5]; menunjukkan penggunaan array statis. Kelebihannya adalah penggunaan memori sudah dipesan sejak awal dan aksesnya sangat cepat. Namun adapun kekurangannya yaitu pada ukurannya yang kaku. Program membatasi maksimal hanya 5 mahasiswa. Jika pengguna ingin memasukkan 10 data, kode ini harus diubah dan dikompilasi ulang. Ada validasi if(n < 1 || n > 5) untuk mencegah buffer overflow.

3. Manipulasi dan Logika Algoritma
Terdapat tiga algoritma utama yang diterapkan setelah data diinput:

*Pencarian Nilai Terbanyak (Max Value): "if(mhs[i].ipk > mhs[maxIndex].ipk){ maxIndex=i; }"

Program tidak menyimpan nilai IPK tertinggi dalam variabel baru, melainkan menyimpan index-nya (maxIndex). Ini sangat efisien karena dengan index tersebut, kita bisa memanggil seluruh data mahasiswa yang bersangkutan (Nama, NIM, dll), bukan hanya nilai IPK-nya saja.

*Perhitungan Rata-rata (Mean):
Menggunakan akumulator total += mhs[i].ipk yang kemudian dibagi dengan jumlah mahasiswa n. Variabel total diinisialisasi dengan 0 untuk menghindari nilai sampah (garbage value) di memori.

* Pencarian Linear (Linear Search): "if(mhs[i].semester == cariSemester)"
Program membandingkan input pengguna dengan data di setiap elemen array. Terdapat variabel flag bool ditemukan untuk menangani kondisi jika data yang dicari tidak ada dalam database.

4. Teknik Formatting Output (iomanip)
Salah satu keunggulan kode ini adalah penggunaan library <iomanip>. setw(n) digunakan untuk mengatur lebar kolom agar tampilan tabel rapi dan sejajar. left digunakan untuk meratakan teks ke sebelah kiri di dalam kolom tersebut. Ini membuat output terminal terlihat seperti tabel profesional, bukan sekadar teks berantakan.

5. Analisis Input-Output (I/O)
Program menggunakan cin >> mhs[i].nama;.

Potensi Masalah: Perintah cin hanya membaca teks hingga ditemukan spasi. Jika pengguna memasukkan nama "Budi Santoso", maka "Santoso" akan dianggap sebagai input untuk field berikutnya (Semester), yang akan menyebabkan program error atau crash.

Saran Perbaikan: Untuk input string yang mengandung spasi (seperti nama lengkap), sebaiknya menggunakan getline(cin >> ws, mhs[i].nama);.

### Soal 2

1. Analisis Struktur Data Stack (LIFO)
Struktur data ini dianalogikan seperti tumpukan buku di atas meja. Elemen yang terakhir masuk adalah yang pertama kali keluar (Last In, First Out).

*Mekanisme top: Variabel top bertindak sebagai indeks penunjuk posisi elemen paling atas. Saat kosong nilainya -1. Setiap kali push dilakukan, top naik (top++), dan saat pop, top turun (top--).

*Analisis Operasi:

**Kapasitas Statis: Penggunaan #define MAX_STACK 5 membatasi tumpukan hanya hingga 5 buku.

**Keamanan Data: Fungsi isFull() dan isEmpty() memastikan program tidak mengalami error saat mencoba menambah data ke memori yang penuh atau mengambil data dari memori kosong.

**Akses Data: Pada fungsi display(), iterasi dilakukan secara terbalik (for (int i = top; i >= 0; i--)). Ini merepresentasikan visual tumpukan di mana data terbaru berada di posisi paling atas.

2. Analisis Struktur Data Queue (FIFO)
Struktur data ini dianalogikan seperti antrean orang di kasir. Elemen yang pertama kali masuk adalah yang pertama kali dilayani (First In, First Out).

Mekanisme front dan rear: * rear (belakang) digunakan untuk memasukkan data baru (enqueue).

front (depan) digunakan untuk menghapus data atau melayani antrean (dequeue).

Analisis Operasi:

Reset Indeks: Terdapat logika penting pada dequeue(): if (front > rear) { front = rear = -1; }. Ini berfungsi untuk me-reset antrean menjadi kosong kembali jika semua elemen sudah diproses, sehingga memori yang sudah dilewati front bisa digunakan kembali.

Kelemahan (Antrean Linear): Karena menggunakan array statis linear (bukan circular), jika rear sudah mencapai indeks 4 (maksimal), antrean akan dianggap penuh (isFull) meskipun posisi front sudah bergeser maju dan meninggalkan slot kosong di depan.

3. Pembahasan Logika Program pada main()
Program melakukan simulasi alur kerja nyata:

Simulasi Stack: * Memasukkan 4 buku. Buku "Jaringan" adalah yang terakhir masuk.

Saat peek() dipanggil, sistem menunjukkan "Jaringan".

Saat pop() dilakukan 2 kali, "Jaringan" dan "Algoritma" keluar.

Hasil akhirnya, tumpukan menyisakan "Kalkulus" (sekarang menjadi top) dan "Fisika Dasar".

Simulasi Queue:

Memasukkan Reza, Mia, Hendra. Reza berada di posisi front.

dequeue() memproses Reza (keluar dari antrean).

Mia otomatis menjadi orang terdepan yang baru.

enqueue("Putri") menempatkan Putri di posisi paling belakang setelah Hendra.

---

## SUMBER BELAJAR

- Petani Kode, Codepolitan, LearnCPP (Stack, Struct)
- Stack Overflow, Programiz, LearnCPP, gemini (Queue)