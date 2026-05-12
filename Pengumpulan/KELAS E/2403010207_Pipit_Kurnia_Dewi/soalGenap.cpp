#include <iostream>
#include <iomanip>
#include <string>
#include <limits>

using namespace std;

// Deklarasi struct Buku
struct Buku {
    string judul;
    string pengarang;
    int tahunTerbit;
    float harga;
};

int main() {
    // Array of struct Buku dengan kapasitas maksimal 5 data
    Buku daftarBuku[5];
    int jumlahBuku = 5; // Data sudah ditentukan sebanyak 5 buku
    
    // ========== DATA BUKU LANGSUNG DARI SOAL ==========
    // Buku 1
    daftarBuku[0].judul = "Pemrograman C++";
    daftarBuku[0].pengarang = "Astuti";
    daftarBuku[0].tahunTerbit = 2020;
    daftarBuku[0].harga = 70000;
    
    // Buku 2
    daftarBuku[1].judul = "Pemrograman Java";
    daftarBuku[1].pengarang = "Abdul";
    daftarBuku[1].tahunTerbit = 2021;
    daftarBuku[1].harga = 80000;
    
    // Buku 3
    daftarBuku[2].judul = "Riset Operasi";
    daftarBuku[2].pengarang = "Budiman";
    daftarBuku[2].tahunTerbit = 2022;
    daftarBuku[2].harga = 85000;
    
    // Buku 4
    daftarBuku[3].judul = "Basis Data";
    daftarBuku[3].pengarang = "Marpuah";
    daftarBuku[3].tahunTerbit = 2023;
    daftarBuku[3].harga = 90000;
    
    // Buku 5
    daftarBuku[4].judul = "Teori Bahasa dan Otomata";
    daftarBuku[4].pengarang = "Cucun";
    daftarBuku[4].tahunTerbit = 2024;
    daftarBuku[4].harga = 99000;
    
    // Menampilkan seluruh data buku dalam format tabel
    cout << "\n=== DAFTAR BUKU ===" << endl;
    cout << left << setw(4) << "No" 
         << left << setw(25) << "Judul" 
         << left << setw(15) << "Pengarang" 
         << right << setw(8) << "Tahun" 
         << right << setw(12) << "Harga" << endl;
    cout << string(64, '-') << endl;
    
    for (int i = 0; i < jumlahBuku; i++) {
        cout << left << setw(4) << i + 1
             << left << setw(25) << daftarBuku[i].judul
             << left << setw(15) << daftarBuku[i].pengarang
             << right << setw(8) << daftarBuku[i].tahunTerbit
             << fixed << setprecision(2) << right << setw(12) << daftarBuku[i].harga
             << endl;
    }
    
    // ========== PERTANYAAN B ==========
    cout << "\n\n=== FITUR STATISTIK ===" << endl;
    
    // 1. Mencari dan menampilkan buku dengan harga tertinggi
    if (jumlahBuku > 0) {
        int indexTertinggi = 0;
        float hargaTertinggi = daftarBuku[0].harga;
        
        for (int i = 1; i < jumlahBuku; i++) {
            if (daftarBuku[i].harga > hargaTertinggi) {
                hargaTertinggi = daftarBuku[i].harga;
                indexTertinggi = i;
            }
        }
        
        cout << "\n=== BUKU DENGAN HARGA TERTINGGI ===" << endl;
        cout << "Judul      : " << daftarBuku[indexTertinggi].judul << endl;
        cout << "Pengarang  : " << daftarBuku[indexTertinggi].pengarang << endl;
        cout << "Tahun      : " << daftarBuku[indexTertinggi].tahunTerbit << endl;
        cout << "Harga      : Rp " << fixed << setprecision(2) << daftarBuku[indexTertinggi].harga << endl;
    }
    
    // 2. Menghitung dan menampilkan rata-rata harga seluruh buku
    float totalHarga = 0;
    for (int i = 0; i < jumlahBuku; i++) {
        totalHarga += daftarBuku[i].harga;
    }
    float rataRata = totalHarga / jumlahBuku;
    
    cout << "\n=== STATISTIK HARGA ===" << endl;
    cout << "Total harga semua buku : Rp " << fixed << setprecision(2) << totalHarga << endl;
    cout << "Rata-rata harga buku   : Rp " << fixed << setprecision(2) << rataRata << endl;
    
    // 3. Mencari buku berdasarkan tahun terbit
    int cariTahun;
    cout << "\n=== PENCARIAN BERDASARKAN TAHUN ===" << endl;
    cout << "Masukkan tahun terbit yang dicari: ";
    cin >> cariTahun;
    
    bool ditemukan = false;
    cout << "\nBuku yang terbit pada tahun " << cariTahun << ":" << endl;
    cout << left << setw(4) << "No" 
         << left << setw(25) << "Judul" 
         << left << setw(15) << "Pengarang" 
         << right << setw(12) << "Harga" << endl;
    cout << string(56, '-') << endl;
    
    for (int i = 0; i < jumlahBuku; i++) {
        if (daftarBuku[i].tahunTerbit == cariTahun) {
            ditemukan = true;
            cout << left << setw(4) << i + 1
                 << left << setw(25) << daftarBuku[i].judul
                 << left << setw(15) << daftarBuku[i].pengarang
                 << fixed << setprecision(2) << right << setw(12) << daftarBuku[i].harga
                 << endl;
        }
    }
    
    if (!ditemukan) {
        cout << "Tidak ada buku yang terbit pada tahun " << cariTahun << "." << endl;
    }
    
    return 0;
}