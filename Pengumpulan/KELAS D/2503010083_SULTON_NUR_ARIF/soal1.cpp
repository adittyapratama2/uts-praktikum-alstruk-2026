#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

struct Buku {
    string judul;
    string pengarang;
    int tahunTerbit;
    float harga;
};

void cetakGaris() {
    cout << string(60, '-') << "\n";
}

void tampilkanTabel(Buku b[], int n) {
    cetakGaris();
    cout << left << setw(4) << "No"
         << setw(22) << "Judul"
         << setw(18) << "Pengarang"
         << setw(8)  << "Tahun"
         << "Harga\n";
    cetakGaris();
    for (int i = 0; i < n; i++) {
        cout << left << setw(4) << i+1
             << setw(22) << b[i].judul
             << setw(18) << b[i].pengarang
             << setw(8)  << b[i].tahunTerbit
             << fixed << setprecision(2) << b[i].harga << "\n";
    }
    cetakGaris();
}

int main() {
    Buku perpus[5];
    int n;

    cout << "==============================\n";
    cout << "   SISTEM DATA BUKU TOKO\n";
    cout << "==============================\n";

    do {
        cout << "Masukkan jumlah buku (1-5): ";
        cin >> n;
    } while (n < 1 || n > 5);
    cin.ignore();

    for (int i = 0; i < n; i++) {
        cout << "\n[Buku " << i+1 << "]\n";
        cout << "Judul       : "; getline(cin, perpus[i].judul);
        cout << "Pengarang   : "; getline(cin, perpus[i].pengarang);
        cout << "Tahun Terbit: "; cin >> perpus[i].tahunTerbit;
        cout << "Harga       : "; cin >> perpus[i].harga;
        cin.ignore();
    }

    cout << "\n>> Daftar Seluruh Buku\n";
    tampilkanTabel(perpus, n);

    // harga tertinggi + total dalam 1 loop
    int idxMaks = 0;
    float total = 0;
    for (int i = 0; i < n; i++) {
        total += perpus[i].harga;
        if (perpus[i].harga > perpus[idxMaks].harga)
            idxMaks = i;
    }

    cout << "\n>> Buku Termahal\n";
    cetakGaris();
    cout << "Judul       : " << perpus[idxMaks].judul << "\n";
    cout << "Pengarang   : " << perpus[idxMaks].pengarang << "\n";
    cout << "Tahun Terbit: " << perpus[idxMaks].tahunTerbit << "\n";
    cout << "Harga       : Rp " << fixed << setprecision(2) << perpus[idxMaks].harga << "\n";
    cetakGaris();

    cout << ">> Rata-rata Harga : Rp " << fixed << setprecision(2) << total / n << "\n";

    // cari berdasarkan tahun
    int tahunCari;
    cout << "\nCari buku berdasarkan tahun terbit: ";
    cin >> tahunCari;

    cout << "\n>> Hasil Pencarian Tahun " << tahunCari << "\n";
    bool ada = false;
    for (int i = 0; i < n; i++) {
        if (perpus[i].tahunTerbit == tahunCari) {
            if (!ada) {
                tampilkanTabel(perpus, 0); // cetak header
                ada = true;
            }
            cout << left << setw(4) << i+1
                 << setw(22) << perpus[i].judul
                 << setw(18) << perpus[i].pengarang
                 << setw(8)  << perpus[i].tahunTerbit
                 << fixed << setprecision(2) << perpus[i].harga << "\n";
        }
    }

    if (!ada)
        cout << "Tidak ada buku yang terbit pada tahun " << tahunCari << ".\n";

    return 0;
}
