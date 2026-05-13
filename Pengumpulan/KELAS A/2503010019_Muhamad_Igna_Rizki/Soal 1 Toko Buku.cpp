#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

// === Deklarasi Struct Buku ===
struct Buku {
    string judul;
    string pengarang;
    int tahunTerbit;
    float harga;
};

int main() {
    const int MAKS = 5;
    Buku data[MAKS];
    int n;

    cout << "Masukkan jumlah buku (1-5): ";
    cin >> n;
    if (n < 1 || n > 5) {
        cout << "Jumlah tidak valid!" << endl;
        return 1;
    }
    cin.ignore();

    for (int i = 0; i < n; i++) {
        cout << "\n--- Buku ke-" << i + 1 << " ---\n";
        cout << "Judul     : "; getline(cin, data[i].judul);
        cout << "Pengarang : "; getline(cin, data[i].pengarang);
        cout << "Tahun     : "; cin >> data[i].tahunTerbit;
        cout << "Harga     : "; cin >> data[i].harga;
        cin.ignore();
    }

    cout << "\n";
    cout << left
         << setw(4)  << "No"
         << setw(22) << "Judul"
         << setw(16) << "Pengarang"
         << setw(7)  << "Tahun"
         << "Harga" << endl;
    cout << string(60, '-') << endl;

    for (int i = 0; i < n; i++) {
        cout << left
             << setw(4)  << i + 1
             << setw(22) << data[i].judul
             << setw(16) << data[i].pengarang
             << setw(7)  << data[i].tahunTerbit
             << data[i].harga << endl;  
    }

    int idxMaks = 0;
    for (int i = 1; i < n; i++) {
        if (data[i].harga > data[idxMaks].harga)
            idxMaks = i;
    }
    cout << "\n=== Buku dengan Harga Tertinggi ===" << endl;
    cout << "Judul     : " << data[idxMaks].judul << endl;
    cout << "Pengarang : " << data[idxMaks].pengarang << endl;
    cout << "Tahun     : " << data[idxMaks].tahunTerbit << endl;
    cout << "Harga     : " << data[idxMaks].harga << endl;  

    float total = 0;
    for (int i = 0; i < n; i++)
        total += data[i].harga;
    cout << "\nRata-rata Harga: " << total / n << endl; 

    int tahunCari;
    cout << "\nMasukkan tahun yang dicari: ";
    cin >> tahunCari;

    bool ditemukan = false;
    cout << "\nBuku terbit tahun " << tahunCari << ":" << endl;
    for (int i = 0; i < n; i++) {
        if (data[i].tahunTerbit == tahunCari) {
            cout << "- " << data[i].judul << " oleh " << data[i].pengarang << endl;
            ditemukan = true;
        }
    }
    if (!ditemukan)
        cout << "Tidak ada buku yang terbit pada tahun tersebut." << endl;

    return 0;
}
