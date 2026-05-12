#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

struct Buku {
    string judul;
    string pengarang;
    int    tahunTerbit;
    float  harga;
};

int main() {
    const int MAKS = 5;
    Buku daftarBuku[MAKS];
    int n;


    cout << "Masukkan jumlah buku (1-5): ";
    cin >> n;

    while (n < 1 || n > MAKS) {
        cout << "Input tidak valid! Masukkan antara 1-5: ";
        cin >> n;
    }
    cin.ignore();

    for (int i = 0; i < n; i++) {
        cout << "\n--- Input Buku ke-" << (i + 1) << " ---\n";

        cout << "Judul       : ";
        getline(cin, daftarBuku[i].judul);

        cout << "Pengarang   : ";
        getline(cin, daftarBuku[i].pengarang);

        cout << "Tahun Terbit: ";
        cin  >> daftarBuku[i].tahunTerbit;

        cout << "Harga       : ";
        cin  >> daftarBuku[i].harga;
        cin.ignore();
    }

    cout << "\n===== DAFTAR BUKU =====\n";


    cout << " " << left
         << setw(3)  << "No" << " | "
         << setw(18) << "Judul" << " | "
         << setw(15) << "Pengarang" << " | "
         << setw(6)  << "Tahun" << " | "
         << "Harga" << endl;


    cout << "---|"
         << string(18, '-') << "|"
         << string(16, '-') << "|"
         << string(7,  '-') << "|"
         << string(10, '-') << endl;


    for (int i = 0; i < n; i++) {
        cout << " " << left  << setw(3)  << (i + 1)                    << " | "
             << left  << setw(18) << daftarBuku[i].judul                << " | "
             << left  << setw(15) << daftarBuku[i].pengarang            << " | "
             << right << setw(5)  << daftarBuku[i].tahunTerbit          << " | "
             << fixed << setprecision(2) << daftarBuku[i].harga         << endl;
    }

    return 0;
}