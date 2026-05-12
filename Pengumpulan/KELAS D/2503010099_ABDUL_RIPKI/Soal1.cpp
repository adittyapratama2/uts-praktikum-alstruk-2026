#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

struct Buku {
    string judul;
    string pengarang;
    int tahunTerbit;
    float harga;
};

void tampilkanTabel(Buku b[], int n) {
    cout << "\nNo | Judul               | Pengarang         | Tahun  | Harga\n";
    cout << "---|---------------------|-------------------|--------|----------\n";
    for (int i = 0; i < n; i++) {
        cout << " " << left << setw(2) << i+1
             << "| " << setw(20) << b[i].judul
             << "| " << setw(18) << b[i].pengarang
             << "| " << setw(7)  << b[i].tahunTerbit
             << "| " << fixed << setprecision(2) << b[i].harga << "\n";
    }
}

int main() {
    Buku perpus[5];
    int n;

    cout << "Jumlah buku (1-5): ";
    cin >> n;
    while (n < 1 || n > 5) {
        cout << "Input harus 1-5: ";
        cin >> n;
    }
    cin.ignore();

    for (int i = 0; i < n; i++) {
        cout << "\nBuku ke-" << i+1 << "\n";
        cout << "Judul       : "; getline(cin, perpus[i].judul);
        cout << "Pengarang   : "; getline(cin, perpus[i].pengarang);
        cout << "Tahun Terbit: "; cin >> perpus[i].tahunTerbit;
        cout << "Harga       : "; cin >> perpus[i].harga;
        cin.ignore();
    }

    // Pertanyaan A - tampilkan tabel
    tampilkanTabel(perpus, n);

    // Pertanyaan B - harga tertinggi
    int idxMaks = 0;
    float total = 0;
    for (int i = 0; i < n; i++) {
        total += perpus[i].harga;
        if (perpus[i].harga > perpus[idxMaks].harga)
            idxMaks = i;
    }

    cout << "\nBuku termahal:\n";
    cout << "Judul       : " << perpus[idxMaks].judul << "\n";
    cout << "Pengarang   : " << perpus[idxMaks].pengarang << "\n";
    cout << "Tahun Terbit: " << perpus[idxMaks].tahunTerbit << "\n";
    cout << "Harga       : " << fixed << setprecision(2) << perpus[idxMaks].harga << "\n";

    // rata-rata
    cout << "\nRata-rata harga: " << fixed << setprecision(2) << total / n << "\n";

    // cari berdasarkan tahun
    int tahunCari;
    cout << "\nCari buku tahun: ";
    cin >> tahunCari;

    bool ada = false;
    for (int i = 0; i < n; i++) {
        if (perpus[i].tahunTerbit == tahunCari) {
            if (!ada) {
                cout << "No | Judul               | Pengarang         | Tahun  | Harga\n";
                cout << "---|---------------------|-------------------|--------|----------\n";
                ada = true;
            }
            cout << " " << left << setw(2) << i+1
                 << "| " << setw(20) << perpus[i].judul
                 << "| " << setw(18) << perpus[i].pengarang
                 << "| " << setw(7)  << perpus[i].tahunTerbit
                 << "| " << fixed << setprecision(2) << perpus[i].harga << "\n";
        }
    }

    if (!ada)
        cout << "Tidak ada buku yang terbit pada tahun tersebut.\n";

    return 0;
}
