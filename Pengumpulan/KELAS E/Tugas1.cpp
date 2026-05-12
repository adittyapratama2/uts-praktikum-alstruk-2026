#include <iostream>
using namespace std;

// struct deklarasi
struct Buku {
    string judul;
    string pengarang;
    int tahunTerbit;
    float harga;
};

int main() {
    Buku dataBuku[5];
    int jumlah;

    // jumlah input buku
    cout << "Masukkan jumlah buku (1-5): ";
    cin >> jumlah;
    cin.ignore();

    // data input buku
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

    // menalpikan bukunya
    cout << "\n========== DATA BUKU ==========\n";

    cout << "No | Judul | Pengarang | Tahun | Harga\n";

    for (int i = 0; i < jumlah; i++) {
        cout << i + 1 << " | "
             << dataBuku[i].judul << " | "
             << dataBuku[i].pengarang << " | "
             << dataBuku[i].tahunTerbit << " | "
             << dataBuku[i].harga << endl;
    }

    // search buku dengan harting
    int indeksMahal = 0;

    for (int i = 1; i < jumlah; i++) {
        if (dataBuku[i].harga > dataBuku[indeksMahal].harga) {
            indeksMahal = i;
        }
    }

    cout << "\n===== BUKU DENGAN HARGA TERTINGGI =====\n";
    cout << "Judul       : " << dataBuku[indeksMahal].judul << endl;
    cout << "Pengarang   : " << dataBuku[indeksMahal].pengarang << endl;
    cout << "Tahun       : " << dataBuku[indeksMahal].tahunTerbit << endl;
    cout << "Harga       : " << dataBuku[indeksMahal].harga << endl;

    // menghitung rata rata hargar buku
    float totalHarga = 0;

    for (int i = 0; i < jumlah; i++) {
        totalHarga += dataBuku[i].harga;
    }

    float rataRata = totalHarga / jumlah;

    cout << "\nRata-rata harga buku : " << rataRata << endl;

    // search buku berdasar tahun
    int cariTahun;
    bool ditemukan = false;

    cout << "\nMasukkan tahun yang ingin dicari : ";
    cin >> cariTahun;

    for (int i = 0; i < jumlah; i++) {

        if (dataBuku[i].tahunTerbit == cariTahun) {

            cout << "\nJudul      : " << dataBuku[i].judul << endl;
            cout << "Pengarang  : " << dataBuku[i].pengarang << endl;
            cout << "Tahun      : " << dataBuku[i].tahunTerbit << endl;
            cout << "Harga      : " << dataBuku[i].harga << endl;

            ditemukan = true;
        }
    }

    if (ditemukan == false) {
        cout << "\nTidak ada buku yang terbit pada tahun tersebut." << endl;
    }

    return 0;
}
