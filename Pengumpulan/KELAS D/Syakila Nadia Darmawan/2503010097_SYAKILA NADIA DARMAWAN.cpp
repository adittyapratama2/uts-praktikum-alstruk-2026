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

int main() {
    int n;
    Buku daftar[5];
    
    cout << "Masukkan jumlah buku (1-5): ";
    cin >> n;
    if (n > 5) n = 5;

  
    for (int i = 0; i < n; i++) {
        cout << "\nData Buku ke-" << i + 1 << endl;
        cin.ignore();
        cout << "Judul        : "; getline(cin, daftar[i].judul);
        cout << "Pengarang    : "; getline(cin, daftar[i].pengarang);
        cout << "Tahun Terbit : "; cin >> daftar[i].tahunTerbit;
        cout << "Harga        : "; cin >> daftar[i].harga;
    }

    cout << "\n" << setfill('=') << setw(64) << "" << endl;
    cout << setfill(' ');
    cout << left << setw(4) << "No" << "| " <<
            setw(18) << "Judul" << "| " << 
            setw(15) << "Pengarang" << "| " << 
            setw(7) << "Tahun" << "| Harga" << endl;
    cout << setfill('-') << setw(64) << "" << endl;
    cout << setfill(' ');

    for (int i = 0; i < n; i++) {
        cout << left << setw(4) << i + 1 
             << "| " << setw(18) << daftar[i].judul 
             << "| " << setw(15) << daftar[i].pengarang 
             << "| " << setw(7) << daftar[i].tahunTerbit 
             << "| " << fixed << setprecision(2) << daftar[i].harga << endl;
    }
    cout << setfill('=') << setw(64) << "" << endl << setfill(' ');

    float total = 0, hMax = -1;
    int idxMax = 0;

    for (int i = 0; i < n; i++) {
        total += daftar[i].harga;
        if (daftar[i].harga > hMax) {
            hMax = daftar[i].harga;
            idxMax = i;
        }
    }

    cout << "\nBuku Termahal  : " << daftar[idxMax].judul << " (Rp" << daftar[idxMax].harga << ")";
    cout << "\nRata-rata Harga : Rp" << total / n << endl;

    int cariTahun;
    bool ketemu = false;
    cout << "\nMasukkan tahun terbit yang dicari: "; cin >> cariTahun;
    for (int i = 0; i < n; i++) {
        if (daftar[i].tahunTerbit == cariTahun) {
            cout << "- Ditemukan: " << daftar[i].judul << " oleh " << daftar[i].pengarang << endl;
            ketemu = true;
        }
    }
    if (!ketemu) cout << "Tidak ada buku yang terbit pada tahun tersebut.\n";

    return 0;
}