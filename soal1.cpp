#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

// Deklarasi struct Buku
struct Buku {
    string judul;
    string pengarang;
    int tahunTerbit;
    float harga;
};

int main() {
    Buku dataBuku[5]; // Array of struct dengan kapasitas 5
    int n;

    // Input jumlah buku
    do {
        cout << "Masukkan jumlah buku (1-5): ";
        cin >> n;
    } while (n < 1 || n > 5);
    cin.ignore(); // Membersihkan buffer sebelum getline

    // Input data tiap buku
    for (int i = 0; i < n; i++) {
        cout << "\nData Buku ke-" << i + 1 << endl;
        cout << "Judul        : "; getline(cin, dataBuku[i].judul);
        cout << "Pengarang    : "; getline(cin, dataBuku[i].pengarang);
        cout << "Tahun Terbit : "; cin >> dataBuku[i].tahunTerbit;
        cout << "Harga        : "; cin >> dataBuku[i].harga;
        cin.ignore();
    }

    // Menampilkan data dalam format tabel
    cout << "\n------------------------------------------------------------------\n";
    cout << left << setw(4) << "No" << "| " << setw(20) << "Judul" << "| " 
         << setw(15) << "Pengarang" << "| " << setw(7) << "Tahun" << "| " << "Harga\n";
    cout << "------------------------------------------------------------------\n";
    for (int i = 0; i < n; i++) {
        cout << left << setw(4) << i + 1 << "| " << setw(20) << dataBuku[i].judul << "| " 
             << setw(15) << dataBuku[i].pengarang << "| " << setw(7) << dataBuku[i].tahunTerbit << "| " 
             << fixed << setprecision(2) << dataBuku[i].harga << endl;
    }

    // Pencarian harga tertinggi dan total harga (Statistik)
    float maxHarga = dataBuku[0].harga;
    int idxMax = 0;
    float totalHarga = 0;

    for (int i = 0; i < n; i++) {
        if (dataBuku[i].harga > maxHarga) {
            maxHarga = dataBuku[i].harga;
            idxMax = i;
        }
        totalHarga += dataBuku[i].harga;
    }

    cout << "\n--- Statistik Data Buku ---\n";
    cout << "Buku dengan harga tertinggi:\n";
    cout << "- Judul: " << dataBuku[idxMax].judul << ", Pengarang: " << dataBuku[idxMax].pengarang 
         << ", Harga: " << maxHarga << endl;
    cout << "Rata-rata harga buku: " << totalHarga / n << endl;

    // Pencarian berdasarkan tahun
    int cariTahun;
    bool ditemukan = false;
    cout << "\nMasukkan tahun terbit yang dicari: ";
    cin >> cariTahun;

    cout << "Hasil pencarian tahun " << cariTahun << ":\n";
    for (int i = 0; i < n; i++) {
        if (dataBuku[i].tahunTerbit == cariTahun) {
            cout << "- " << dataBuku[i].judul << " (Harga: " << dataBuku[i].harga << ")" << endl;
            ditemukan = true;
        }
    }

    // Pesan jika tidak ada buku di tahun tersebut
    if (!ditemukan) {
        cout << "Tidak ada buku yang terbit pada tahun tersebut." << endl;
    }

    return 0;
}