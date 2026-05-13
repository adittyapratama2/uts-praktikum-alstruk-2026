#include <iostream>
#include <string>

using namespace std;

// struct
struct Buku {
    string judul;
    string pengarang;
    int tahunTerbit;
    float harga;
};

int main() {
    Buku daftar[5];
    int n;

    // Input jumlah buku
    cout << "Masukkan jumlah buku (1-5): ";
    cin >> n;

    // Input data buku
    for (int i = 0; i < n; i++) {
        cout << "\nBuku ke-" << i + 1 << endl;
        cin.ignore(); // Penting supaya getline tidak loncat
        cout << "Judul: ";
        getline(cin, daftar[i].judul);
        cout << "Pengarang: ";
        getline(cin, daftar[i].pengarang);
        cout << "Tahun: ";
        cin >> daftar[i].tahunTerbit;
        cout << "Harga: ";
        cin >> daftar[i].harga;
    }

    // tabel
    cout << "\nNo | Judul | Pengarang | Tahun | Harga" << endl;
    cout << "------------------------------------------" << endl;
    for (int i = 0; i < n; i++) {
        cout << i + 1 << " | " << daftar[i].judul << " | " << daftar[i].pengarang << " | " << daftar[i].tahunTerbit << " | " << daftar[i].harga << endl;
    }


    // 1. Cari harga tertinggi dan rata-rata
    float total = 0;
    int indeksMahal = 0;

    for (int i = 0; i < n; i++) {
        total = total + daftar[i].harga; // Hitung total untuk rata-rata

        // Bandingkan harga satu per satu
        if (daftar[i].harga > daftar[i].harga) {
            indeksMahal = i;
        }
    }

    float rataRata = total / n;

    cout << "\nBuku Termahal: " << daftar[indeksMahal].judul << " (Harga: " << daftar[indeksMahal].harga << ")" << endl;
    cout << "Rata-rata Harga: " << rataRata << endl;

    // 2. Cari berdasarkan tahun
    int cariTahun;
    bool ketemu = false;

    cout << "\nMasukkan tahun untuk dicari: ";
    cin >> cariTahun;

    for (int i = 0; i < n; i++) {
        if (daftar[i].tahunTerbit == cariTahun) {
            cout << "- " << daftar[i].judul << " (" << daftar[i].pengarang << ")" << endl;
            ketemu = true;
        }
    }

    if (ketemu == false) {
        cout << "Tidak ada buku yang terbit pada tahun tersebut." << endl;
    }

    return 0;
}