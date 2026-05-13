#include <iostream>
#include <string>
#include <iomanip>
#include <limits>
using namespace std;
// === Pertanyaan A ===
// Deklarasi struct Buku
struct Buku {
    string judul;
    string pengarang;
    int tahunTerbit;
    float harga;
};
int main() {
    // Array dari struct Buku dengan kapasitas maksimal 5
    Buku daftarBuku[5];
    int jumlahBuku = 0;

    // minta pengguna memasukkan jumlah buku (1-5)
    do {
        cout << "Masukkan jumlah buku (1-5): ";
        cin >> jumlahBuku;
        if (jumlahBuku < 1 || jumlahBuku > 5) {
            cout << "Jumlah buku harus antara 1 dan 5. Silakan coba lagi.\n";
        }
    } while (jumlahBuku < 1 || jumlahBuku > 5);

    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    // Input data tiap buku
    for (int i = 0; i < jumlahBuku; ++i) {
        cout << "\n--- Input Data Buku ke-" << (i + 1) << " ---" << endl;
        cout << "Judul        : ";
        getline(cin, daftarBuku[i].judul);
        cout << "Pengarang    : ";
        getline(cin, daftarBuku[i].pengarang);
        cout << "Tahun Terbit : ";
        cin >> daftarBuku[i].tahunTerbit;
        cout << "Harga        : ";
        cin >> daftarBuku[i].harga;
        
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
    // Tampilkan tabel data buku
    cout << "\nNo | Judul             | Pengarang      | Tahun | Harga" << endl;
    cout << "---|-------------------|----------------|-------|----------" << endl;
    for (int i = 0; i < jumlahBuku; ++i) {
        cout << right << setw(2) << (i + 1) << " | "
             << left << setw(17) << daftarBuku[i].judul << " | "
             << left << setw(14) << daftarBuku[i].pengarang << " | "
             << right << setw(5) << daftarBuku[i].tahunTerbit << " | "
             << fixed << setprecision(2) << right << setw(8) << daftarBuku[i].harga << endl;
    }
    // === Pertanyaan B ===
    if (jumlahBuku > 0) {
        int idxTertinggi = 0;
        float totalHarga = daftarBuku[0].harga;

        // cari harga tertinggi dan menghitung total harga
        for (int i = 1; i < jumlahBuku; ++i) {
            totalHarga += daftarBuku[i].harga;
            if (daftarBuku[i].harga > daftarBuku[idxTertinggi].harga) {
                idxTertinggi = i;
            }
        }
        // 1. Tampilkan buku dengan harga tertinggi
        cout << "\n=== Informasi Buku dengan Harga Tertinggi ===" << endl;
        cout << "Judul        : " << daftarBuku[idxTertinggi].judul << endl;
        cout << "Pengarang    : " << daftarBuku[idxTertinggi].pengarang << endl;
        cout << "Tahun Terbit : " << daftarBuku[idxTertinggi].tahunTerbit << endl;
        cout << "Harga        : Rp " << fixed << setprecision(2) << daftarBuku[idxTertinggi].harga << endl;

        // 2. hitung dan tampilkan rata-rata harga
        float rataRata = totalHarga / jumlahBuku;
        cout << "\nRata-rata harga seluruh buku : Rp " << fixed << setprecision(2) << rataRata << endl;
        
        // 3. Pencarian buku berdasarkan tahun terbit
        int tahunCari;
        cout << "\nMasukkan tahun terbit yang ingin dicari: ";
        cin >> tahunCari;
        cout << "\nHasil Pencarian Buku Tahun " << tahunCari << ":" << endl;
        bool ditemukan = false;
        for (int i = 0; i < jumlahBuku; ++i) {
            if (daftarBuku[i].tahunTerbit == tahunCari) {
                cout << "- " << daftarBuku[i].judul 
                     << " (Pengarang: " << daftarBuku[i].pengarang 
                     << ", Harga: " << fixed << setprecision(2) << daftarBuku[i].harga << ")" << endl;
                ditemukan = true;
            }
        }
        // Pesan jika tidak ditemukan
        if (!ditemukan) {
            cout << "Tidak ada buku yang terbit pada tahun tersebut." << endl;
        }
    }
    return 0;
}

