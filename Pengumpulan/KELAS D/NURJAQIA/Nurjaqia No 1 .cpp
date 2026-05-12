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
    Buku daftarBuku[5];
    int n;

    // Input 
    cout << "Masukkan jumlah buku (1-5): ";
    cin >> n;
    cin.ignore(); // Membersihkan buffer

    // A. Input Data
    for (int i = 0; i < n; i++) {
        cout << "\nData Buku ke-" << i + 1 << endl;
        cout << "Judul      : "; getline(cin, daftarBuku[i].judul);
        cout << "Pengarang  : "; getline(cin, daftarBuku[i].pengarang);
        cout << "Tahun Terbit: "; cin >> daftarBuku[i].tahunTerbit;
        cout << "Harga      : "; cin >> daftarBuku[i].harga;
        cin.ignore();
    }

    // Tabel
    cout << "\nNo | " << left << setw(20) << "Judul" << " | " << setw(15) << "Pengarang" << " | Tahun | Harga" << endl;
    cout << "----------------------------------------------------------------------" << endl;
    for (int i = 0; i < n; i++) {
        cout << i + 1 << "  | " << left << setw(20) << daftarBuku[i].judul 
             << " | " << setw(15) << daftarBuku[i].pengarang 
             << " | " << daftarBuku[i].tahunTerbit 
             << "  | " << fixed << setprecision(2) << daftarBuku[i].harga << endl;
    }

    // B. Total dan Indeks tertinggi
    float totalHarga = 0, hargaTertinggi = 0;
    int indeksTertinggi = 0;

    for (int i = 0; i < n; i++) {
        totalHarga += daftarBuku[i].harga;
        if (daftarBuku[i].harga > hargaTertinggi) {
            hargaTertinggi = daftarBuku[i].harga;
            indeksTertinggi = i;
        }
    }

    cout << "\n--- Statistik ---" << endl;
    cout << "Buku termahal: " << daftarBuku[indeksTertinggi].judul << " (Rp" << hargaTertinggi << ")" << endl;
    cout << "Rata-rata harga: Rp" << totalHarga / n << endl;

    // Cari tahun
    int cariTahun;
    bool ditemukan = false;
    cout << "\nCari buku berdasarkan tahun terbit: "; cin >> cariTahun;
    for (int i = 0; i < n; i++) {
        if (daftarBuku[i].tahunTerbit == cariTahun) {
            cout << "- " << daftarBuku[i].judul << " (" << daftarBuku[i].pengarang << ")" << endl;
            ditemukan = true;
        }
    }
    if (!ditemukan) cout << "Tidak ada buku yang terbit pada tahun tersebut." << endl;

    return 0;
}
