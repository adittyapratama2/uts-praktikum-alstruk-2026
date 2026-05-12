#include <iostream>
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

    cout << "Masukkan jumlah buku (1-5): ";
    cin >> jumlah;
    cin.ignore();

    for (int i = 0; i < jumlah; i++) {
        cout << "\nData Buku ke-" << i + 1 << endl;

        cout << "Judul        : ";
        getline(cin, daftarBuku[i].judul);

        cout << "Pengarang    : ";
        getline(cin, daftarBuku[i].pengarang);

        cout << "Tahun Terbit : ";
        cin >> daftarBuku[i].tahunTerbit;

        cout << "Harga        : ";
        cin >> daftarBuku[i].harga;
        cin.ignore();
    }
    
    cout << "\n================ DATA BUKU ================\n";

    cout << "No | Judul | Pengarang | Tahun | Harga\n";
    cout << "---------------------------------------------------\n";

    for (int i = 0; i < jumlah; i++) {
        cout << i + 1 << " | "
             << daftarBuku[i].judul << " | "
             << daftarBuku[i].pengarang << " | "
             << daftarBuku[i].tahunTerbit << " | "
             << daftarBuku[i].harga << endl;
    }

    int indeksMax = 0;

    for (int i = 1; i < jumlah; i++) {
        if (daftarBuku[i].harga > daftarBuku[indeksMax].harga) {
            indeksMax = i;
        }
    }
    cout << "\n======= Buku dengan Harga Tertinggi =======\n";
    cout << "Judul        : " << daftarBuku[indeksMax].judul << endl;
    cout << "Pengarang    : " << daftarBuku[indeksMax].pengarang << endl;
    cout << "Tahun Terbit : " << daftarBuku[indeksMax].tahunTerbit << endl;
    cout << "Harga        : " << daftarBuku[indeksMax].harga << endl;

    float total = 0;

    for (int i = 0; i < jumlah; i++) {
        total += daftarBuku[i].harga;
    }

    float rataRata = total / jumlah;

    cout << "\nRata-rata harga buku : "
         << rataRata << endl;

    int cariTahun;
    bool ditemukan = false;

    cout << "\nMasukkan tahun yang ingin dicari : ";
    cin >> cariTahun;

    cout << "\nBuku yang terbit pada tahun "
         << cariTahun << ":\n";

    for (int i = 0; i < jumlah; i++) {
        if (daftarBuku[i].tahunTerbit == cariTahun) {
            cout << "- " << daftarBuku[i].judul
                 << " oleh pengarang " << daftarBuku[i].pengarang
                 << endl;
            ditemukan = true;
        }
    }

    if (!ditemukan) {
        cout << "Tidak ada buku yang terbit pada tahun tersebut." << endl;
    }

    return 0;
}
