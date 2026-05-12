#include <iostream>
#include <string>
using namespace std;

struct Buku {
    string judul;
    string pengarang;
    int tahunTerbit;
    float harga;
};

int main () {
    Buku daftarBuku[5] = {
        {"Intelegensi Embun Pagi  ", "Dee Lestari      ", 2026, 210320},
        {"Atomic Habits           ", "James Clear      ", 2026, 128000},
        {"Laut Bercerita          ", "Leila S.Chudori  ", 2026, 115000},
        {"Filosofi Teras          ", "Henry Manampiring", 2026, 98000},
        {"Kearifan Lokal Sunda    ", "Tim Budaya       ", 2026, 65000}
    };
    
    cout << "==========================================================================" << endl;
    cout << "No   JUDUL                     PENGARANG          TAHUN      HARGA" << endl;
    cout << "--------------------------------------------------------------------------" << endl;        

    for (int i = 0; i < 5; i++) {
        cout << i + 1 << "    " 
             << daftarBuku[i].judul << "  " 
             << daftarBuku[i].pengarang << "  " 
             << daftarBuku[i].tahunTerbit << "        " 
             << "Rp" << (int)daftarBuku[i].harga << endl; 
    }
    
    cout << "==========================================================================" << endl;

    float totalHarga = 0;
    int top = 0;

    for (int i = 0; i < 5; i++) {
        totalHarga += daftarBuku[i].harga;
        if (daftarBuku[i].harga > daftarBuku[top].harga) {
            top = i;
        }
    }

    cout << "\nTotal Seluruh Harga : Rp" << (int)totalHarga << endl;
    cout << "Rata-rata Harga     : Rp" << (int)(totalHarga / 5) << endl;
    cout << "Buku Termahal       : " << daftarBuku[top].judul << endl;
    
    int cari; 
    bool ada = false;
    cout << "\nMasukkan Tahun Terbit yang dicari: "; 
    cin >> cari;

    cout << "Hasil Pencarian Buku Tahun " << cari << ":" << endl;
    for (int i = 0; i < 5; i++) {
        if (daftarBuku[i].tahunTerbit == cari) {
            cout << "- " << daftarBuku[i].judul << endl;
            ada = true;
        }
    }

    if (!ada) cout << "Maaf, data tidak ditemukan" << endl;
    
    return 0;
}
