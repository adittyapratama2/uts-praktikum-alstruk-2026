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
        {"Struktur Data dan C++    ", "Sianipar         ", 2018, 95000},
        {"Sistem Operasi           ", "Bambang Hariyanto", 2015, 85000},
        {"Rekayasa Perangkat Lunak ", "Rosa A.S.        ", 2021, 110000},
        {"Jaringan Komputer        ", "Iwan Sofana      ", 2017, 125000},
        {"Basis Data               ", "Fathansyah       ", 2020, 90000}
    };
    
    cout << "\n=========================================================================" << endl;
    cout << "No   Judul                       Pengarang           Tahun     Harga" << endl;
    cout << "-------------------------------------------------------------------------" << endl;
    
    for (int i = 0; i < 5; i++) {
        cout << i + 1 << "    " 
             << daftarBuku[i].judul << "   " 
             << daftarBuku[i].pengarang << "   " 
             << daftarBuku[i].tahunTerbit << "      " 
             << daftarBuku[i].harga << endl;
    }
    
    cout << "=========================================================================" << endl;
    
    float maxHarga = daftarBuku[5].harga;
    int indexTermahal = 0;

    for (int i = 1; i < 5; i++) {
        if (daftarBuku[i].harga > maxHarga) {
            maxHarga = daftarBuku[i].harga;
            indexTermahal = i;
        }
    }
    cout << "\nBuku Termahal: " << daftarBuku[indexTermahal].judul << endl;
    cout << "Harga: " << daftarBuku[indexTermahal].harga << endl;

    float totalHarga = 0;
    for (int i = 0; i < 5; i++) {
        totalHarga += daftarBuku[i].harga;
    }
    cout << "Rata-rata Harga Buku: " << totalHarga / 5 << endl;
    
    int cariTahun;
    bool ditemukan = false;

    cout << "\nMasukkan tahun terbit yang dicari: ";
    cin >> cariTahun;

    cout << "Hasil Pencarian:" << endl;
    for (int i = 0; i < 5; i++) {
        if (daftarBuku[i].tahunTerbit == cariTahun) {
            cout << "- " << daftarBuku[i].judul << endl;
            ditemukan = true;
        }
    }

    if (!ditemukan) {
        cout << "Tidak ada buku yang terbit pada tahun tersebut." << endl;
    }
    
    return 0;
}
