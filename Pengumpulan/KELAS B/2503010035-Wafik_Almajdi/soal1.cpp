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
    // Array of struct maksimal 5 data
    Buku buku[5];

    int jumlah;

    // Input jumlah buku
    do {
        cout << "Masukkan jumlah buku (1-5): ";
        cin >> jumlah;

        if (jumlah < 1 || jumlah > 5) {
            cout << "Jumlah buku harus antara 1 sampai 5!\n";
        }

    } while (jumlah < 1 || jumlah > 5);

    cin.ignore();

    // Input data buku
    for (int i = 0; i < jumlah; i++) {
        cout << "\nData Buku ke-" << i + 1 << endl;

        cout << "Judul        : ";
        getline(cin, buku[i].judul);

        cout << "Pengarang    : ";
        getline(cin, buku[i].pengarang);

        cout << "Tahun Terbit : ";
        cin >> buku[i].tahunTerbit;

        cout << "Harga        : ";
        cin >> buku[i].harga;

        cin.ignore();
    }

    // Menampilkan seluruh data buku
    cout << "\n================ DATA BUKU ================\n";

    cout << left
         << setw(5)  << "No"
         << setw(25) << "Judul"
         << setw(20) << "Pengarang"
         << setw(10) << "Tahun"
         << setw(10) << "Harga" << endl;

    cout << "------------------------------------------------------------------\n";

    for (int i = 0; i < jumlah; i++) {
        cout << left
             << setw(5)  << i + 1
             << setw(25) << buku[i].judul
             << setw(20) << buku[i].pengarang
             << setw(10) << buku[i].tahunTerbit
             << fixed << setprecision(2)
             << setw(10) << buku[i].harga
             << endl;
    }

    // =========================
    // Buku dengan harga tertinggi
    // =========================
    int indexMahal = 0;

    for (int i = 1; i < jumlah; i++) {
        if (buku[i].harga > buku[indexMahal].harga) {
            indexMahal = i;
        }
    }

    cout << "\n=========== BUKU HARGA TERTINGGI ===========\n";
    cout << "Judul        : " << buku[indexMahal].judul << endl;
    cout << "Pengarang    : " << buku[indexMahal].pengarang << endl;
    cout << "Tahun Terbit : " << buku[indexMahal].tahunTerbit << endl;
    cout << "Harga        : " << fixed << setprecision(2)
         << buku[indexMahal].harga << endl;

    // =========================
    // Rata-rata harga
    // =========================
    float total = 0;

    for (int i = 0; i < jumlah; i++) {
        total += buku[i].harga;
    }

    float rataRata = total / jumlah;

    cout << "\nRata-rata harga buku : "
         << fixed << setprecision(2)
         << rataRata << endl;

    // =========================
    // Pencarian berdasarkan tahun
    // =========================
    int cariTahun;
    bool ditemukan = false;

    cout << "\nMasukkan tahun yang ingin dicari : ";
    cin >> cariTahun;

    cout << "\nBuku yang terbit tahun "
         << cariTahun << ":\n";

    for (int i = 0; i < jumlah; i++) {
        if (buku[i].tahunTerbit == cariTahun) {

            cout << "----------------------------------\n";
            cout << "Judul     : " << buku[i].judul << endl;
            cout << "Pengarang : " << buku[i].pengarang << endl;
            cout << "Harga     : "
                 << fixed << setprecision(2)
                 << buku[i].harga << endl;

            ditemukan = true;
        }
    }

    if (!ditemukan) {
        cout << "Tidak ada buku yang terbit pada tahun tersebut.\n";
    }

    return 0;
}
