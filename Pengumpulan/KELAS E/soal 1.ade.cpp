#include <iostream>
#include <iomanip>
using namespace std;

// Deklarasi struct
struct Buku {
    string judul;
    string pengarang;
    int tahunTerbit;
    float harga;
};

int main() {
    Buku dataBuku[5];
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

        cout << "Judul          : ";
        getline(cin, dataBuku[i].judul);

        cout << "Pengarang      : ";
        getline(cin, dataBuku[i].pengarang);

        cout << "Tahun Terbit   : ";
        cin >> dataBuku[i].tahunTerbit;

        cout << "Harga          : ";
        cin >> dataBuku[i].harga;
        cin.ignore();
    }

    // Menampilkan seluruh data buku
    cout << "\n================ DATA BUKU ================\n";
    cout << left << setw(5) << "No"
         << setw(25) << "Judul"
         << setw(20) << "Pengarang"
         << setw(10) << "Tahun"
         << setw(10) << "Harga" << endl;

    cout << "---------------------------------------------------------------\n";

    for (int i = 0; i < jumlah; i++) {
        cout << left << setw(5) << i + 1
             << setw(25) << dataBuku[i].judul
             << setw(20) << dataBuku[i].pengarang
             << setw(10) << dataBuku[i].tahunTerbit
             << fixed << setprecision(2)
             << dataBuku[i].harga << endl;
    }

    // Mencari buku dengan harga tertinggi
    int indeksMax = 0;

    for (int i = 1; i < jumlah; i++) {
        if (dataBuku[i].harga > dataBuku[indeksMax].harga) {
            indeksMax = i;
        }
    }

    cout << "\n===== BUKU DENGAN HARGA TERTINGGI =====\n";
    cout << "Judul      : " << dataBuku[indeksMax].judul << endl;
    cout << "Pengarang  : " << dataBuku[indeksMax].pengarang << endl;
    cout << "Tahun      : " << dataBuku[indeksMax].tahunTerbit << endl;
    cout << "Harga      : " << fixed << setprecision(2)
         << dataBuku[indeksMax].harga << endl;

    // Menghitung rata-rata harga
    float total = 0;

    for (int i = 0; i < jumlah; i++) {
        total += dataBuku[i].harga;
    }

    float rataRata = total / jumlah;

    cout << "\nRata-rata harga buku : "
         << fixed << setprecision(2)
         << rataRata << endl;

    // Pencarian buku berdasarkan tahun terbit
    int cariTahun;
    bool ditemukan = false;

    cout << "\nMasukkan tahun yang ingin dicari: ";
    cin >> cariTahun;

    cout << "\nBuku yang terbit pada tahun "
         << cariTahun << ":\n";

    for (int i = 0; i < jumlah; i++) {
        if (dataBuku[i].tahunTerbit == cariTahun) {
            ditemukan = true;

            cout << "- " << dataBuku[i].judul
                 << " | " << dataBuku[i].pengarang
                 << " | Harga: " << fixed << setprecision(2)
                 << dataBuku[i].harga << endl;
        }
    }

    if (!ditemukan) {
        cout << "Tidak ada buku yang terbit pada tahun tersebut.\n";
    }

    return 0;
}
