#include <iostream>
#include <iomanip>
#include <string>

using namespace std;


struct Buku {
    string judul;
    string pengarang;
    int    tahunTerbit;
    float  harga;
};


void cetakTabel(Buku data[], int n) {
    
    cout << endl;
    cout << left
         << setw(4)  << "No"
         << "| " << setw(22) << "Judul"
         << "| " << setw(17) << "Pengarang"
         << "| " << setw(7)  << "Tahun"
         << "| " << "Harga" << endl;

    cout << string(4,'-') << "+"
         << string(23,'-') << "+"
         << string(18,'-') << "+"
         << string(8,'-')  << "+"
         << string(12,'-') << endl;

    
    for (int i = 0; i < n; i++) {
        cout << left
             << setw(4)  << (i + 1)
             << "| " << setw(22) << data[i].judul
             << "| " << setw(17) << data[i].pengarang
             << "| " << setw(7)  << data[i].tahunTerbit
             << "| " << fixed << setprecision(2) << data[i].harga
             << endl;
    }
    cout << endl;
}

void inputData(Buku data[], int &n) {
    cout << "=== INPUT DATA BUKU ===" << endl;

    
    do {
        cout << "Masukkan jumlah buku (1-5): ";
        cin >> n;
        cin.ignore();
        if (n < 1 || n > 5)
            cout << "  [!] Jumlah harus antara 1 sampai 5!" << endl;
    } while (n < 1 || n > 5);

    
    for (int i = 0; i < n; i++) {
        cout << "\n--- Buku ke-" << (i + 1) << " ---" << endl;

        cout << "  Judul       : ";
        getline(cin, data[i].judul);

        cout << "  Pengarang   : ";
        getline(cin, data[i].pengarang);

        cout << "  Tahun Terbit: ";
        cin >> data[i].tahunTerbit;

        cout << "  Harga (Rp)  : ";
        cin >> data[i].harga;
        cin.ignore();
    }


    cout << "\n=== DATA BUKU YANG DIINPUT ===" << endl;
    cetakTabel(data, n);
}


void statistikDanCari(Buku data[], int n) {
    
    int idxMaks = 0;
    for (int i = 1; i < n; i++) {
        if (data[i].harga > data[idxMaks].harga)
            idxMaks = i;
    }

    cout << "=== BUKU DENGAN HARGA TERTINGGI ===" << endl;
    cout << "  Judul       : " << data[idxMaks].judul      << endl;
    cout << "  Pengarang   : " << data[idxMaks].pengarang  << endl;
    cout << "  Tahun Terbit: " << data[idxMaks].tahunTerbit<< endl;
    cout << "  Harga       : Rp " << fixed << setprecision(2)
         << data[idxMaks].harga << endl;

    
    float total = 0;
    for (int i = 0; i < n; i++)
        total += data[i].harga;
    float rata = total / n;

    cout << "\n=== RATA-RATA HARGA BUKU ===" << endl;
    cout << "  Rata-rata: Rp " << fixed << setprecision(2) << rata << endl;

    
    int tahunCari;
    cout << "\n=== CARI BUKU BERDASARKAN TAHUN ===" << endl;
    cout << "Masukkan tahun terbit yang dicari: ";
    cin >> tahunCari;

    bool ditemukan = false;
    cout << endl;
    for (int i = 0; i < n; i++) {
        if (data[i].tahunTerbit == tahunCari) {
            if (!ditemukan) {
                cout << "Buku yang terbit pada tahun " << tahunCari << ":" << endl;
                cout << string(55, '-') << endl;
            }
            cout << "  - " << data[i].judul
                 << " (" << data[i].pengarang << ")"
                 << "  Rp " << fixed << setprecision(2) << data[i].harga
                 << endl;
            ditemukan = true;
        }
    }

    if (!ditemukan)
        cout << "Tidak ada buku yang terbit pada tahun tersebut." << endl;

    cout << endl;
}


int main() {
    const int MAKS = 5;
    Buku perpustakaan[MAKS]; 
    int jumlah = 0;

    cout << "=======================================" << endl;
    cout << "  PROGRAM MANAJEMEN DATA BUKU TOKO    " << endl;
    cout << "=======================================" << endl;

    
    inputData(perpustakaan, jumlah);

    
    statistikDanCari(perpustakaan, jumlah);

    return 0;
}
