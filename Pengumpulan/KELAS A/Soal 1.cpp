#include <iostream>
#include <iomanip>
#include <string>
#include <limits>

using namespace std;

struct Buku {
    string judul;
    string pengarang;
    int    tahunTerbit;
    float  harga;
};

// Cetak garis pemisah tabel
void cetakGaris() {
    cout << "----+---------------------+------------------+-------+------------" << endl;
}

void tampilkanTabel(const Buku buku[], int n) {
    cout << endl;
    cout << " No | Judul                 | Pengarang        | Tahun | Harga      " << endl;
    cetakGaris();
    for (int i = 0; i < n; i++) {
        cout << setw(3)  << right << (i + 1)            << " | "
             << setw(21) << left  << buku[i].judul       << " | "
             << setw(16) << left  << buku[i].pengarang   << " | "
             << setw(5)  << right << buku[i].tahunTerbit << " | "
             << setw(10) << right << fixed << setprecision(2) << buku[i].harga
             << endl;
    }
    cetakGaris();
}

void bersihkanBuffer() {
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
}

int main() {
    const int MAKS = 5;
    Buku koleksi[MAKS];
    int jumlah = 0;

   
    cout << "========================================" << endl;
    cout << "            PROGRAM DATA BUKU "           << endl;
    cout << "========================================" << endl;

    do {
        cout << "Masukkan jumlah buku (1-5): ";
        cin  >> jumlah;
        if (jumlah < 1 || jumlah > MAKS)
            cout << "  [!] Jumlah harus antara 1 dan 5. Coba lagi." << endl;
    } while (jumlah < 1 || jumlah > MAKS);

    bersihkanBuffer();

    for (int i = 0; i < jumlah; i++) {
        cout << "\n--- Buku ke-" << (i + 1) << " ---" << endl;

        cout << "  Judul       : ";
        getline(cin, koleksi[i].judul);

        cout << "  Pengarang   : ";
        getline(cin, koleksi[i].pengarang);

        cout << "  Tahun Terbit: ";
        cin  >> koleksi[i].tahunTerbit;

        cout << "  Harga       : ";
        cin  >> koleksi[i].harga;

        bersihkanBuffer();
    }

    cout << "\n====== DAFTAR SELURUH BUKU ======";
    tampilkanTabel(koleksi, jumlah);

    // pertanyaan b
    cout << "\n====== STATISTIK & PENCARIAN (Pertanyaan B) ======" << endl;

    // 1. Buku dengan harga tertinggi
    int idxMaks = 0;
    for (int i = 1; i < jumlah; i++) {
        if (koleksi[i].harga > koleksi[idxMaks].harga)
            idxMaks = i;
    }
    cout << "\n[1] Buku dengan harga TERTINGGI:" << endl;
    cout << "    Judul       : " << koleksi[idxMaks].judul       << endl;
    cout << "    Pengarang   : " << koleksi[idxMaks].pengarang   << endl;
    cout << "    Tahun Terbit: " << koleksi[idxMaks].tahunTerbit << endl;
    cout << "    Harga       : Rp " << fixed << setprecision(2)
         << koleksi[idxMaks].harga << endl;

    // 2. Rata-rata harga
    float total = 0;
    for (int i = 0; i < jumlah; i++) total += koleksi[i].harga;
    float rata = total / jumlah;
    cout << "\n[2] Rata-rata harga seluruh buku: Rp "
         << fixed << setprecision(2) << rata << endl;

    // 3. Pencarian berdasarkan tahun terbit
    int tahunCari;
    cout << "\n[3] Masukkan tahun terbit yang ingin dicari: ";
    cin  >> tahunCari;

    bool ditemukan = false;
    cout << "\n    Buku yang terbit pada tahun " << tahunCari << ":" << endl;
    for (int i = 0; i < jumlah; i++) {
        if (koleksi[i].tahunTerbit == tahunCari) {
            if (!ditemukan) {
                // Cetak header tabel sekali
                cout << endl;
                cout << " No | Judul                 | Pengarang        | Tahun | Harga      " << endl;
                cetakGaris();
                ditemukan = true;
            }
            cout << setw(3)  << right << (i + 1)                  << " | "
                 << setw(21) << left  << koleksi[i].judul          << " | "
                 << setw(16) << left  << koleksi[i].pengarang      << " | "
                 << setw(5)  << right << koleksi[i].tahunTerbit    << " | "
                 << setw(10) << right << fixed << setprecision(2)  << koleksi[i].harga
                 << endl;
        }
    }
    if (ditemukan) {
        cetakGaris();
    } else {
        cout << "    Tidak ada buku yang terbit pada tahun tersebut." << endl;
    }

    cout << "\nProgram selesai. Terima kasih!" << endl;
    return 0;
}
