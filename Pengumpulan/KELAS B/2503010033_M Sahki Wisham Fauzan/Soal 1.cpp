#include <iostream>
#include <string>
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

    for(int i = 0; i < n; i++) {
        cout << "\nBuku ke-" << i+1 << endl;
        cout << "Judul: "; getline(cin, data[i].judul);
        cout << "Pengarang: "; getline(cin, data[i].pengarang);
        cout << "Tahun: "; cin >> data[i].tahunTerbit;
        cout << "Harga: "; cin >> data[i].harga;
        cin.ignore();
    }

    cout << "\nNo | Judul | Pengarang | Tahun | Harga\n";
    cout << "------------------------------------------\n";
    for(int i = 0; i < n; i++) {
        cout << i+1 << " | " << data[i].judul << " | " << data[i].pengarang 
             << " | " << data[i].tahunTerbit << " | " << data[i].harga << "\n";
    }

    float total = 0, maxHarga = data[0].harga;
    int idxMax = 0;
    
    for(int i = 0; i < n; i++) {
        total += data[i].harga;
        if(data[i].harga > maxHarga) {
            maxHarga = data[i].harga; 
            idxMax = i;
        }
    }
    cout << "\nBuku harga tertinggi: " << data[idxMax].judul << " (Rp" << maxHarga << ")\n";
    cout << "Rata-rata harga buku: Rp" << total / n << "\n"; 

    int cari;
    bool ada = false;
    cout << "\nMasukkan tahun terbit yang dicari: "; 
    cin >> cari;
    
    cout << "Hasil:\n";
    for(int i = 0; i < n; i++) {
        if(data[i].tahunTerbit == cari) {
            cout << "- " << data[i].judul << "\n";
            ada = true;
        }
    }
    
    if(!ada) {
        cout << "Tidak ada buku yang terbit pada tahun tersebut.\n"; 
    }

    return 0;
}