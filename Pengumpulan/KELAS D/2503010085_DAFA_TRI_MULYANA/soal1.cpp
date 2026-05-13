#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

// Deklarasi Struct
struct Buku {
    string judul;
    string pengarang;
    int tahunTerbit;
    float harga;
};

int main() {
    Buku daftarBuku[5];
    int n;

    cout << "--- INPUT DATA BUKU ---" << endl;
    cout << "Masukkan jumlah buku (1-5): ";
    cin >> n;

    if (n < 1 || n > 5) {
        cout << "Jumlah tidak valid!" << endl;
        return 0;
    }

    // Input Data
    for (int i = 0; i < n; i++) {
        cout << "\nData Buku ke-" << i + 1 << endl;
        cin.ignore();
        cout << "Judul     : "; getline(cin, daftarBuku[i].judul);
        cout << "Pengarang : "; getline(cin, daftarBuku[i].pengarang);
        cout << "Tahun     : "; cin >> daftarBuku[i].tahunTerbit;
        cout << "Harga     : "; cin >> daftarBuku[i].harga;
    }

    // A. Tampilkan Tabel
    cout << "\n" << setfill('=') << setw(65) << "" << endl;
    cout << setfill(' ');
    cout << left << setw(4) << "No" << "| " 
         << setw(18) << "Judul" << "| " 
         << setw(15) << "Pengarang" << "| " 
         << setw(7) << "Tahun" << "| " 
         << "Harga" << endl;
    cout << setfill('-') << setw(65) << "" << endl;
    cout << setfill(' ');

    float totalHarga = 0;
    int indexTermahal = 0;

    for (int i = 0; i < n; i++) {
        cout << left << setw(4) << i + 1 << "| " 
             << setw(18) << daftarBuku[i].judul << "| " 
             << setw(15) << daftarBuku[i].pengarang << "| " 
             << setw(7) << daftarBuku[i].tahunTerbit << "| " 
             << fixed << setprecision(2) << daftarBuku[i].harga << endl;
        
        totalHarga += daftarBuku[i].harga;
        if (daftarBuku[i].harga > daftarBuku[indexTermahal].harga) {
            indexTermahal = i;
        }
    }

    // B. Statistik & Pencarian
    cout << "\n--- STATISTIK & PENCARIAN ---" << endl;
    cout << "Buku Termahal: " << daftarBuku[indexTermahal].judul << " (Rp" << daftarBuku[indexTermahal].harga << ")" << endl;
    cout << "Rata-rata Harga: Rp" << totalHarga / n << endl;

    int cariTahun;
    bool ditemukan = false;
    cout << "\nCari Buku Berdasarkan Tahun: "; cin >> cariTahun;
    
    for (int i = 0; i < n; i++) {
        if (daftarBuku[i].tahunTerbit == cariTahun) {
            cout << "- " << daftarBuku[i].judul << " (" << daftarBuku[i].pengarang << ")" << endl;
            ditemukan = true;
        }
    }
    if (!ditemukan) cout << "Tidak ada buku yang terbit pada tahun tersebut." << endl;

    return 0;
}

