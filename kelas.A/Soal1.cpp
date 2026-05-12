#include <iostream>
#include <string>
#include <iomanip> // Untuk merapikan tabel (setw)

using namespace std;

// Deklarasi Struct Buku
struct Buku {
    string judul;
    string pengarang;
    int tahunTerbit;
    float harga;
};

int main() {
    Buku daftarBuku[5]; // Array of struct kapasitas 5
    int jumlah;
    float totalHarga = 0;

    // Input Data
    cout << "Masukkan jumlah buku (1-5): ";
    cin >> jumlah;
    cin.ignore(); // Membersihkan buffer agar getline lancar

    for (int i = 0; i < jumlah; i++) {
        cout << "\nData Buku ke-" << i + 1 << endl;
        cout << "Judul     : "; getline(cin, daftarBuku[i].judul);
        cout << "Pengarang : "; getline(cin, daftarBuku[i].pengarang);
        cout << "Tahun     : "; cin >> daftarBuku[i].tahunTerbit;
        cout << "Harga     : "; cin >> daftarBuku[i].harga;
        cin.ignore();
        totalHarga += daftarBuku[i].harga; // Untuk statistik rata-rata
    }

    // Menampilkan Tabel
    cout << "\n-------------------------------------------------------------\n";
    cout << left << setw(4) << "No" << setw(20) << "Judul" << setw(15) << "Pengarang" << setw(8) << "Tahun" << "Harga" << endl;
    cout << "-------------------------------------------------------------\n";
    for (int i = 0; i < jumlah; i++) {
        cout << left << setw(4) << i + 1 
             << setw(20) << daftarBuku[i].judul 
             << setw(15) << daftarBuku[i].pengarang 
             << setw(8) << daftarBuku[i].tahunTerbit 
             << fixed << setprecision(2) << daftarBuku[i].harga << endl;
    }
    cout << "-------------------------------------------------------------\n";

    // Fitur Pencarian Harga Tertinggi
    int idxTertinggi = 0;
    for (int i = 1; i < jumlah; i++) {
        if (daftarBuku[i].harga > daftarBuku[idxTertinggi].harga) {
            idxTertinggi = i;
        }
    }
    cout << "\nBuku Termahal: " << daftarBuku[idxTertinggi].judul << " (Rp" << daftarBuku[idxTertinggi].harga << ")" << endl;

    // Rata-rata Harga
    cout << "Rata-rata Harga: Rp" << totalHarga / jumlah << endl;

    // Cari berdasarkan Tahun
    int cariTahun;
    bool ditemukan = false;
    cout << "\nMasukkan tahun terbit yang dicari: ";
    cin >> cariTahun;
    
    cout << "Buku yang terbit tahun " << cariTahun << ":" << endl;
    for (int i = 0; i < jumlah; i++) {
        if (daftarBuku[i].tahunTerbit == cariTahun) {
            cout << "- " << daftarBuku[i].judul << endl;
            ditemukan = true;
        }
    }
    if (!ditemukan) cout << "Tidak ada buku yang terbit pada tahun tersebut." << endl;

    return 0;
}
