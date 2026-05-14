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

    // Array of struct maksimal 5 data
    Buku daftarBuku[5];

    int jumlah;

    // Input jumlah buku
    do {
        cout << "Masukkan jumlah buku (1-5): ";
        cin >> jumlah;
        cin.ignore();

        if (jumlah < 1 || jumlah > 5) {
            cout << "Jumlah harus antara 1 sampai 5!\n";
        }

    } while (jumlah < 1 || jumlah > 5);

    // Input data buku
    for (int i = 0; i < jumlah; i++) {

        cout << "\nData Buku ke-" << i + 1 << endl;

        cout << "Judul         : ";
        getline(cin, daftarBuku[i].judul);

        cout << "Pengarang     : ";
        getline(cin, daftarBuku[i].pengarang);

        cout << "Tahun Terbit  : ";
        cin >> daftarBuku[i].tahunTerbit;

        cout << "Harga         : ";
        cin >> daftarBuku[i].harga;
        cin.ignore();
    }

    // Menampilkan semua data buku
    cout << "\n================ DATA BUKU ================\n";

    cout << left
         << setw(5)  << "No"
         << setw(25) << "Judul"
         << setw(20) << "Pengarang"
         << setw(10) << "Tahun"
         << setw(10) << "Harga" << endl;

    cout << "-----------------------------------------------------------------\n";

    for (int i = 0; i < jumlah; i++) {

        cout << left
             << setw(5)  << i + 1
             << setw(25) << daftarBuku[i].judul
             << setw(20) << daftarBuku[i].pengarang
             << setw(10) << daftarBuku[i].tahunTerbit
             << fixed << setprecision(2)
             << daftarBuku[i].harga << endl;
    }

    // =========================================
    // MENCARI BUKU DENGAN HARGA TERTINGGI
    // =========================================

    int indeksMax = 0;

    for (int i = 1; i < jumlah; i++) {
        if (daftarBuku[i].harga > daftarBuku[indeksMax].harga) {
            indeksMax = i;
        }
    }

    cout << "\n===== BUKU DENGAN HARGA TERTINGGI =====\n";
    cout << "Judul      : " << daftarBuku[indeksMax].judul << endl;
    cout << "Pengarang  : " << daftarBuku[indeksMax].pengarang << endl;
    cout << "Tahun      : " << daftarBuku[indeksMax].tahunTerbit << endl;
    cout << "Harga      : " << fixed << setprecision(2)
         << daftarBuku[indeksMax].harga << endl;

    // =========================================
    // MENGHITUNG RATA-RATA HARGA
    // =========================================

    float total = 0;

    for (int i = 0; i < jumlah; i++) {
        total += daftarBuku[i].harga;
    }

    float rataRata = total / jumlah;

    cout << "\nRata-rata harga buku : "
         << fixed << setprecision(2)
         << rataRata << endl;

    // =========================================
    // PENCARIAN BUKU BERDASARKAN TAHUN
    // =========================================

    int cariTahun;
    bool ditemukan = false;

    cout << "\nMasukkan tahun yang dicari: ";
    cin >> cariTahun;

    cout << "\nBuku yang terbit pada tahun "
         << cariTahun << ":\n";

    for (int i = 0; i < jumlah; i++) {

        if (daftarBuku[i].tahunTerbit == cariTahun) {

            ditemukan = true;

            cout << "- " << daftarBuku[i].judul
                 << " | " << daftarBuku[i].pengarang
                 << " | Harga: "
                 << fixed << setprecision(2)
                 << daftarBuku[i].harga << endl;
        }
    }

    if (!ditemukan) {
        cout << "Tidak ada buku yang terbit pada tahun tersebut.\n";
    }

    return 0;
}
