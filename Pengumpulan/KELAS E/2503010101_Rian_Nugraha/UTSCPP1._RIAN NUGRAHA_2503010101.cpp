#include <iostream>
#include <iomanip>
using namespace std;

struct Buku {
    string judul;
    string pengarang;
    int tahunTerbit;
    float harga;
};

int main() {
    Buku buku[5];
    int jumlah;

    cout << "Masukkan jumlah buku (1-5): ";
    cin >> jumlah;
    cin.ignore();

    // Input data buku
    for (int i = 0; i < jumlah; i++) {
        cout << "\nData Buku ke-" << i + 1 << endl;

        cout << "Judul       : ";
        getline(cin, buku[i].judul);

        cout << "Pengarang   : ";
        getline(cin, buku[i].pengarang);

        cout << "Tahun Terbit: ";
        cin >> buku[i].tahunTerbit;

        cout << "Harga       : ";
        cin >> buku[i].harga;
        cin.ignore();
    }

    // Menampilkan data buku
    cout << "\n===== DATA BUKU =====" << endl;
    cout << left << setw(5) << "No"
         << setw(25) << "Judul"
         << setw(20) << "Pengarang"
         << setw(15) << "Tahun"
         << "Harga" << endl;

    for (int i = 0; i < jumlah; i++) {
        cout << left << setw(5) << i + 1
             << setw(25) << buku[i].judul
             << setw(20) << buku[i].pengarang
             << setw(15) << buku[i].tahunTerbit
             << fixed << setprecision(2) << buku[i].harga << endl;
    }

    // Mencari buku dengan harga tertinggi
    int maxIndex = 0;

    for (int i = 1; i < jumlah; i++) {
        if (buku[i].harga > buku[maxIndex].harga) {
            maxIndex = i;
        }
    }

    cout << "\n===== BUKU DENGAN HARGA TERTINGGI =====" << endl;
    cout << "Judul       : " << buku[maxIndex].judul << endl;
    cout << "Pengarang   : " << buku[maxIndex].pengarang << endl;
    cout << "Tahun Terbit: " << buku[maxIndex].tahunTerbit << endl;
    cout << "Harga       : " << fixed << setprecision(2)
         << buku[maxIndex].harga << endl;

    // Menghitung rata-rata harga
    float total = 0;

    for (int i = 0; i < jumlah; i++) {
        total += buku[i].harga;
    }

    float rataRata = total / jumlah;

    cout << "\nRata-rata harga buku: "
         << fixed << setprecision(2)
         << rataRata << endl;

    // Pencarian berdasarkan tahun terbit
    int cariTahun;
    bool ditemukan = false;

    cout << "\nMasukkan tahun yang dicari: ";
    cin >> cariTahun;

    cout << "\n===== HASIL PENCARIAN =====" << endl;

    for (int i = 0; i < jumlah; i++) {
        if (buku[i].tahunTerbit == cariTahun) {
            ditemukan = true;

            cout << "Judul       : " << buku[i].judul << endl;
            cout << "Pengarang   : " << buku[i].pengarang << endl;
            cout << "Harga       : " << fixed << setprecision(2)
                 << buku[i].harga << endl;
            cout << endl;
        }
    }

    if (!ditemukan) {
        cout << "Tidak ada buku yang terbit pada tahun tersebut." << endl;
    }

    return 0;
}t

