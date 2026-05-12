#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

struct Buku {
    string judul;
    string pengarang;
    int tahunTerbit;
    float harga;
};

int main() {
    Buku daftarBuku[5];
    int jumlah;

    do {
        cout << "Masukkan jumlah buku (1-5): ";
        cin >> jumlah;
    } while (jumlah < 1 || jumlah > 5);

    cin.ignore();

    for (int i = 0; i < jumlah; i++) {
        cout << "\nData Buku ke-" << i + 1 << endl;

        cout << "Judul          : ";
        getline(cin, daftarBuku[i].judul);

        cout << "Pengarang      : ";
        getline(cin, daftarBuku[i].pengarang);

        cout << "Tahun Terbit   : ";
        cin >> daftarBuku[i].tahunTerbit;

        cout << "Harga          : ";
        cin >> daftarBuku[i].harga;

        cin.ignore();
    }

    cout << "\n=========================== DATA BUKU ============================\n";

    cout << left
         << setw(5)  << "No"
         << setw(25) << "Judul"
         << setw(20) << "Pengarang"
         << setw(10) << "Tahun"
         << setw(10) << "Harga" << endl;

    cout << "==================================================================\n";

    for (int i = 0; i < jumlah; i++) {
        cout << left
             << setw(5)  << i + 1
             << setw(25) << daftarBuku[i].judul
             << setw(20) << daftarBuku[i].pengarang
             << setw(10) << daftarBuku[i].tahunTerbit
             << fixed << setprecision(2)
             << setw(10) << daftarBuku[i].harga
             << endl;
    }

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

    float total = 0;

    for (int i = 0; i < jumlah; i++) {
        total += daftarBuku[i].harga;
    }

    float rataRata = total / jumlah;

    cout << "\nRata-rata harga buku : "
         << fixed << setprecision(2)
         << rataRata << endl;

    int cariTahun;
    bool ditemukan = false;

    cout << "\nMasukkan tahun yang dicari : ";
    cin >> cariTahun;

    cout << "\n===== HASIL PENCARIAN =====\n";

    for (int i = 0; i < jumlah; i++) {
        if (daftarBuku[i].tahunTerbit == cariTahun) {
            ditemukan = true;

            cout << "Judul      : " << daftarBuku[i].judul << endl;
            cout << "Pengarang  : " << daftarBuku[i].pengarang << endl;
            cout << "Harga      : "
                 << fixed << setprecision(2)
                 << daftarBuku[i].harga << endl;
            cout << "-----------------------------------\n";
        }
    }

    if (!ditemukan) {
        cout << "Tidak ada buku yang terbit pada tahun tersebut." << endl;
    }

    return 0;
}
