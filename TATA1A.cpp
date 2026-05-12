#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

// Deklarasi struct
struct Buku {
    string judul;
    string pengarang;
    int tahunTerbit;
    float harga;
};

int main() {
    // Array of struct kapasitas maksimal 5
    Buku daftarBuku[5];

    int jumlah;

    // Input jumlah buku
    do {
        cout << "Masukkan jumlah buku (1-5): ";
        cin >> jumlah;
        cin.ignore();

        if (jumlah < 1 || jumlah > 5) {
            cout << "Jumlah buku harus antara 1 sampai 5!\n";
        }

    } while (jumlah < 1 || jumlah > 5);

    // Input data buku
    for (int i = 0; i < jumlah; i++) {
        cout << "\nData Buku ke-" << i + 1 << endl;

        cout << "Judul       : ";
        getline(cin, daftarBuku[i].judul);

        cout << "Pengarang   : ";
        getline(cin, daftarBuku[i].pengarang);

        cout << "Tahun Terbit: ";
        cin >> daftarBuku[i].tahunTerbit;

        cout << "Harga       : ";
        cin >> daftarBuku[i].harga;
        cin.ignore();
    }

    // Menampilkan data dalam bentuk tabel
    cout << "\n================ DATA BUKU ================\n";

    cout << left
         << setw(5)  << "No"
         << setw(25) << "Judul"
         << setw(20) << "Pengarang"
         << setw(10) << "Tahun"
         << setw(10) << "Harga" << endl;

    cout << "---------------------------------------------------------------\n";

    for (int i = 0; i < jumlah; i++) {
        cout << left
             << setw(5)  << i + 1
             << setw(25) << daftarBuku[i].judul
             << setw(20) << daftarBuku[i].pengarang
             << setw(10) << daftarBuku[i].tahunTerbit
             << fixed << setprecision(2)
             << daftarBuku[i].harga << endl;
    }

    return 0;
}
