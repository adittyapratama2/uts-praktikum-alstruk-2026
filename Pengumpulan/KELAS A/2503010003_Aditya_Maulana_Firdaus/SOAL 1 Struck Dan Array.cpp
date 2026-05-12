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
    Buku dataBuku[5];
    int jumlah;

    cout << "Masukkan jumlah buku (1-5): ";
    cin >> jumlah;
    cin.ignore();

    if (jumlah < 1 || jumlah > 5) {
        cout << "Jumlah buku tidak valid!" << endl;
        return 0;
    }

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

    cout << "\n================ DATA BUKU ================\n";

    cout << "-------------------------------------------------------------------" << endl;

    cout << left << setw(5) << "No"
         << setw(25) << "Judul"
         << setw(20) << "Pengarang"
         << setw(10) << "Tahun"
         << setw(10) << "Harga" << endl;

    cout << "-------------------------------------------------------------------" << endl;

    for (int i = 0; i < jumlah; i++) {
        cout << left << setw(5) << i + 1
             << setw(25) << dataBuku[i].judul
             << setw(20) << dataBuku[i].pengarang
             << setw(10) << dataBuku[i].tahunTerbit
             << fixed << setprecision(2)
             << dataBuku[i].harga << endl;
    }

    cout << "-------------------------------------------------------------------" << endl;

    int indeksMahal = 0;

    for (int i = 1; i < jumlah; i++) {
        if (dataBuku[i].harga > dataBuku[indeksMahal].harga) {
            indeksMahal = i;
        }
    }

    cout << "\n===== Buku Dengan Harga Tertinggi =====\n";
    cout << "Judul      : " << dataBuku[indeksMahal].judul << endl;
    cout << "Pengarang  : " << dataBuku[indeksMahal].pengarang << endl;
    cout << "Tahun      : " << dataBuku[indeksMahal].tahunTerbit << endl;
    cout << "Harga      : " << dataBuku[indeksMahal].harga << endl;

    float total = 0;

    for (int i = 0; i < jumlah; i++) {
        total += dataBuku[i].harga;
    }

    float rataRata = total / jumlah;

    cout << "\nRata-rata harga buku : " << rataRata << endl;

    int cariTahun;
    bool ditemukan = false;

    cout << "\nMasukkan tahun yang ingin dicari : ";
    cin >> cariTahun;

    cout << "\nBuku yang terbit pada tahun " << cariTahun << ":\n";

    for (int i = 0; i < jumlah; i++) {
        if (dataBuku[i].tahunTerbit == cariTahun) {
            cout << "- " << dataBuku[i].judul
                 << " oleh " << dataBuku[i].pengarang << endl;

            ditemukan = true;
        }
    }

    if (!ditemukan) {
        cout << "Tidak ada buku yang terbit pada tahun tersebut." << endl;
    }

    return 0;
}
