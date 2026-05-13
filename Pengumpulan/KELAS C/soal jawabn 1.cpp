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
    Buku daftarBuku[5]; 
    int n, cariTahun;
    float totalHarga = 0;

    cout << "Masukkan jumlah buku (1-5): ";
    cin >> n;

    if (n < 1 || n > 5) {
        cout << "Jumlah tidak valid!" << endl;
        return 0;
    }

    for (int i = 0; i < n; i++) {
        cout << "\nData Buku ke-" << i + 1 << endl;
        cin.ignore();
        cout << "Judul: "; getline(cin, daftarBuku[i].judul);
        cout << "Pengarang: "; getline(cin, daftarBuku[i].pengarang);
        cout << "Tahun Terbit: "; cin >> daftarBuku[i].tahunTerbit;
        cout << "Harga: "; cin >> daftarBuku[i].harga;
        totalHarga += daftarBuku[i].harga; 
    }

    cout << "\n==========================================================\n";
    cout << left << setw(3) << "No" << " | " << setw(18) << "Judul" << " | " 
         << setw(14) << "Pengarang" << " | " << setw(5) << "Tahun" << " | " << "Harga" << endl;
    cout << "----------------------------------------------------------\n";
    for (int i = 0; i < n; i++) {
        cout << left << setw(3) << i + 1 << " | " 
             << setw(18) << daftarBuku[i].judul << " | " 
             << setw(14) << daftarBuku[i].pengarang << " | " 
             << setw(5) << daftarBuku[i].tahunTerbit << " | " 
             << fixed << setprecision(2) << daftarBuku[i].harga << endl;
    }

    int idxMax = 0;
    for (int i = 1; i < n; i++) {
        if (daftarBuku[i].harga > daftarBuku[idxMax].harga) {
            idxMax = i;
        }
    }
    cout << "\nBuku Termahal: " << daftarBuku[idxMax].judul << " (Rp" << daftarBuku[idxMax].harga << ")";

    cout << "\nRata-rata Harga: " << totalHarga / n << endl;

    cout << "\nMasukkan tahun yang dicari: ";
    cin >> cariTahun;
    bool ditemukan = false;
    for (int i = 0; i < n; i++) {
        if (daftarBuku[i].tahunTerbit == cariTahun) {
            cout << "- " << daftarBuku[i].judul << " (" << daftarBuku[i].pengarang << ")" << endl;
            ditemukan = true;
        }
    }
    if (!ditemukan) cout << "Tidak ada buku yang terbit pada tahun tersebut." << endl; 

    return 0;
}
