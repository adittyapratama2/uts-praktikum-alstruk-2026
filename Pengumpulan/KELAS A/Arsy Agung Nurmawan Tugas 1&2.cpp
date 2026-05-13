#include <iostream>
#include <iomanip>
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

    // Tampilkan tabel buku
    cout << "\n===== DATA BUKU =====\n";
    cout << string(91,'=') << endl;
    cout << "| " << left << setw(5) << "No"
         << "| " << left << setw(25) << "Judul"
         << "| " << left << setw(20) << "Pengarang"
         << "| " << left << setw(15) << "Tahun"
         << "| " << left << setw(15) << "Harga" << "| " << endl;
    cout << string(91,'=') << endl;

    for (int i = 0; i < jumlah; i++) {
        cout << "| " << left << setw(5) << i + 1
             << "| " << left << setw(25) << buku[i].judul
             << "| " << left << setw(20) << buku[i].pengarang
             << "| " << left <<setw(15) << buku[i].tahunTerbit
             << fixed << setprecision(2)
             << "| " << left << setw(15) << buku[i].harga << "| " << endl;
    }cout << string(91,'=') << endl;

    // Cari buku dengan harga tertinggi
    int indeksMax = 0;

    for (int i = 1; i < jumlah; i++) {
        if (buku[i].harga > buku[indeksMax].harga) {
            indeksMax = i;
        }
    }

    cout << "\n===== BUKU DENGAN HARGA TERTINGGI =====\n";
    cout << "Judul       : " << buku[indeksMax].judul << endl;
    cout << "Pengarang   : " << buku[indeksMax].pengarang << endl;
    cout << "Tahun Terbit: " << buku[indeksMax].tahunTerbit << endl;
    cout << "Harga       : " << fixed << setprecision(2)
         << buku[indeksMax].harga << endl;

    // Hitung rata-rata harga
    float total = 0;

    for (int i = 0; i < jumlah; i++) {
        total += buku[i].harga;
    }

    float rataRata = total / jumlah;

    cout << "\nRata-rata harga buku: "
         << fixed << setprecision(2)
         << rataRata << endl;

    // Cari buku berdasarkan tahun
    int cariTahun;
    bool ditemukan = false;

    cout << "\nMasukkan tahun yang ingin dicari: ";
    cin >> cariTahun;

    cout << "\n===== HASIL PENCARIAN =====\n";

    for (int i = 0; i < jumlah; i++) {
        if (buku[i].tahunTerbit == cariTahun) {
            ditemukan = true;

            cout << "Judul       : " << buku[i].judul << endl;
            cout << "Pengarang   : " << buku[i].pengarang << endl;
            cout << "Harga       : "
                 << fixed << setprecision(2)
                 << buku[i].harga << endl;
            cout << "--------------------------\n";
        }
    }

    if (!ditemukan) {
        cout << "Tidak ada buku yang terbit pada tahun tersebut.\n";
    }

    return 0;
}
