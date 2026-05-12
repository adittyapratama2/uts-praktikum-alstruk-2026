#include <iostream>
using namespace std;

// Struct Buku
struct Buku {
    string judul;
    string pengarang;
    int tahunTerbit;
    float harga;
};

int main() {

    Buku buku[5];
    int jumlah;

   //jumlah buku
    cout << "Masukkan jumlah buku (1-5): ";
    cin >> jumlah;
    cin.ignore();

   
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

   //table buku
   
    cout << "\nNo | Judul | Pengarang | Tahun | Harga" << endl;
    cout << "---|-------|------------|--------|-------" << endl;

    for (int i = 0; i < jumlah; i++) {

        cout << i + 1 << " | "
             << buku[i].judul << " | "
             << buku[i].pengarang << " | "
             << buku[i].tahunTerbit << " | "
             << buku[i].harga << endl;
    }

    //harga tertinggi buku
    int maxIndex = 0;

    for (int i = 1; i < jumlah; i++) {

        if (buku[i].harga > buku[maxIndex].harga) {
            maxIndex = i;
        }
    }

    cout << "\nBuku dengan harga tertinggi:\n";

    cout << "Judul     : " << buku[maxIndex].judul << endl;
    cout << "Pengarang : " << buku[maxIndex].pengarang << endl;
    cout << "Tahun     : " << buku[maxIndex].tahunTerbit << endl;
    cout << "Harga     : " << buku[maxIndex].harga << endl;

    //rata-rata harga
    float total = 0;

    for (int i = 0; i < jumlah; i++) {
        total += buku[i].harga;
    }

    float rata = total / jumlah;

    cout << "\nRata-rata harga buku: " << rata << endl;

   //cari buku debgan tahun
    int cariTahun;
    bool ditemukan = false;

    cout << "\nMasukkan tahun yang dicari: ";
    cin >> cariTahun;

    cout << "\nBuku yang terbit tahun "
         << cariTahun << ":\n";

    for (int i = 0; i < jumlah; i++) {

        if (buku[i].tahunTerbit == cariTahun) {

            cout << buku[i].judul
                 << " | "
                 << buku[i].pengarang
                 << " | "
                 << buku[i].harga << endl;

            ditemukan = true;
        }
    }

    if (!ditemukan) {
        cout << "Tidak ada buku yang terbit pada tahun tersebut." << endl;
    }

    return 0;
}
