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
    Buku data[5];
    int n;

    cout << "Masukkan jumlah buku (1-5): ";
    cin >> n;
    cin.ignore();

    // Input data
    for (int i = 0; i < n; i++) {
        cout << "\nBuku ke-" << i + 1 << endl;
        cout << "Judul: ";
        getline(cin, data[i].judul);
        cout << "Pengarang: ";
        getline(cin, data[i].pengarang);
        cout << "Tahun: ";
        cin >> data[i].tahunTerbit;
        cout << "Harga: ";
        cin >> data[i].harga;
        cin.ignore();
    }

    // Tampilkan tabel
    cout << "\nData Buku:\n";
    cout << "No | Judul               | Pengarang        | Tahun | Harga\n";
    cout << "-------------------------------------------------------------\n";

    for (int i = 0; i < n; i++) {
        cout << i+1 << "  | "
             << setw(18) << left << data[i].judul << " | "
             << setw(15) << data[i].pengarang << " | "
             << data[i].tahunTerbit << " | "
             << fixed << setprecision(2) << data[i].harga << endl;
    }

    // Harga tertinggi
    int maxIndex = 0;
    for (int i = 1; i < n; i++) {
        if (data[i].harga > data[maxIndex].harga) {
            maxIndex = i;
        }
    }

    cout << "\nBuku dengan harga tertinggi:\n";
    cout << data[maxIndex].judul << " - " << data[maxIndex].harga << endl;

    // Rata-rata
    float total = 0;
    for (int i = 0; i < n; i++) {
        total += data[i].harga;
    }
    cout << "Rata-rata harga: " << total / n << endl;

    // Cari berdasarkan tahun
    int tahun;
    cout << "\nMasukkan tahun yang dicari: ";
    cin >> tahun;

    bool found = false;
    for (int i = 0; i < n; i++) {
        if (data[i].tahunTerbit == tahun) {
            cout << data[i].judul << " (" << data[i].pengarang << ")\n";
            found = true;
        }
    }

    if (!found) {
        cout << "Tidak ada buku pada tahun tersebut.\n";
    }

    return 0;
}