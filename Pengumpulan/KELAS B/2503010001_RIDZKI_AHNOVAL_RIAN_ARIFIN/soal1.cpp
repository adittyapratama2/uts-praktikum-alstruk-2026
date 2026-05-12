#include <iostream>
#include <iomanip>
using namespace std;

// Deklarasi struct
struct Buku{
    string judul;
    string pengarang;
    int tahunTerbit;
    float harga;
};

int main() {

    Buku dataBuku[5];
    int jumlah;

    cout << "Masukkan jumlah buku (1-5): ";
    cin >> jumlah;
    cin.ignore();

    // Input data buku
    for(int i = 0; i < jumlah; i++) {

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

    // Menampilkan tabel
    cout << "\n===== DATA BUKU =====\n";

    cout << left << setw(5) << "No"
         << setw(20) << "Judul"
         << setw(20) << "Pengarang"
         << setw(10) << "Tahun"
         << setw(10) << "Harga" << endl;

    for(int i = 0; i < jumlah; i++) {

        cout << left << setw(5) << i + 1
             << setw(20) << dataBuku[i].judul
             << setw(20) << dataBuku[i].pengarang
             << setw(10) << dataBuku[i].tahunTerbit
             << setw(10) << fixed << setprecision(2)
             << dataBuku[i].harga << endl;
    }

    // Cari harga tertinggi
    int indeksMax = 0;

    for(int i = 1; i < jumlah; i++) {

        if(dataBuku[i].harga > dataBuku[indeksMax].harga) {
            indeksMax = i;
        }
    }

    cout << "\n===== BUKU DENGAN HARGA TERTINGGI =====\n";

    cout << "Judul      : " << dataBuku[indeksMax].judul << endl;
    cout << "Pengarang  : " << dataBuku[indeksMax].pengarang << endl;
    cout << "Tahun      : " << dataBuku[indeksMax].tahunTerbit << endl;
    cout << "Harga      : " << dataBuku[indeksMax].harga << endl;

    // Hitung rata-rata
    float total = 0;

    for(int i = 0; i < jumlah; i++) {
        total += dataBuku[i].harga;
    }

    float rata = total / jumlah;

    cout << "\nRata-rata harga buku: " << rata << endl;

    // Cari buku berdasarkan tahun
    int tahunCari;
    bool ditemukan = false;

    cout << "\nMasukkan tahun yang dicari: ";
    cin >> tahunCari;

    cout << "\n===== HASIL PENCARIAN =====\n";

    for(int i = 0; i < jumlah; i++) {

        if(dataBuku[i].tahunTerbit == tahunCari) {

            ditemukan = true;

            cout << dataBuku[i].judul
                 << " | "
                 << dataBuku[i].pengarang
                 << " | "
                 << dataBuku[i].harga
                 << endl;
        }
    }

    if(!ditemukan) {
        cout << "Tidak ada buku yang terbit pada tahun tersebut." << endl;
    }

    return 0;
}