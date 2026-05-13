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
    int jumlah;

    cout << "=== Program Pengelolaan Data Buku ===" << endl;
    cout << "Masukkan jumlah buku (1-5): ";
    cin >> jumlah;

    if (jumlah < 1 || jumlah > 5) {
        cout << "Jumlah tidak valid!" << endl;
        return 1;
    }

    for (int i = 0; i < jumlah; i++) {
        cout << "\nData Buku ke-" << i + 1 << endl;
        cin.ignore();
        cout << "Judul      : "; getline(cin, daftarBuku[i].judul);
        cout << "Pengarang  : "; getline(cin, daftarBuku[i].pengarang);
        cout << "Tahun Terbit: "; cin >> daftarBuku[i].tahunTerbit;
        cout << "Harga      : "; cin >> daftarBuku[i].harga;
    }

    cout << "\n" << setfill('=') << setw(65) << "" << endl;
    cout << setfill(' ');
    cout << left << setw(4) << "No" 
         << setw(20) << "| Judul" 
         << setw(15) << "| Pengarang" 
         << setw(8) << "| Tahun" 
         << "| Harga" << endl;
    cout << setfill('-') << setw(65) << "" << endl;
    cout << setfill(' ');

    for (int i = 0; i < jumlah; i++) {
        cout << left << setw(4) << i + 1 
             << "| " << setw(18) << daftarBuku[i].judul 
             << "| " << setw(13) << daftarBuku[i].pengarang 
             << "| " << setw(6) << daftarBuku[i].tahunTerbit 
             << "| " << fixed << setprecision(2) << daftarBuku[i].harga << endl;
    }

    float totalHarga = 0, hargaTertinggi = -1;
    int indeksTertinggi = 0;

    for (int i = 0; i < jumlah; i++) {
        totalHarga += daftarBuku[i].harga;
        if (daftarBuku[i].harga > hargaTertinggi) {
            hargaTertinggi = daftarBuku[i].harga;
            indeksTertinggi = i;
        }
    }

    cout << "\n--- Statistik Buku ---" << endl;
    cout << "Buku Termahal: " << daftarBuku[indeksTertinggi].judul 
         << " (Rp" << daftarBuku[indeksTertinggi].harga << ")" << endl;
    cout << "Rata-rata Harga: Rp" << totalHarga / jumlah << endl;

    int cariTahun;
    bool ditemukan = false;
    cout << "\nMasukkan tahun terbit yang dicari: ";
    cin >> cariTahun;

    cout << "Hasil pencarian tahun " << cariTahun << ":" << endl;
    for (int i = 0; i < jumlah; i++) {
        if (daftarBuku[i].tahunTerbit == cariTahun) {
            cout << "- " << daftarBuku[i].judul << " (" << daftarBuku[i].pengarang << ")" << endl;
            ditemukan = true;
        }
    }

    if (!ditemukan) {
        cout << "Tidak ada buku yang terbit pada tahun tersebut." << endl;
    }

    return 0;
}
