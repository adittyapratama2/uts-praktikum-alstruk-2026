#include <iostream>
#include <string>
#include <vector>
#include <iomanip> 

using namespace std;

struct Buku {
    string judul;
    string pengarang;
    int tahunTerbit;
    float harga;
};

int main() {
    int jumlah;
    Buku daftarBuku[5]; 

    cout << "Masukkan jumlah buku (1-5): ";
    cin >> jumlah;

    if (jumlah < 1 || jumlah > 5) {
        cout << "Jumlah tidak valid!" << endl;
        return 0;
    }

    cin.ignore(); 

    for (int i = 0; i < jumlah; i++) {
        cout << "\nData Buku ke-" << i + 1 << endl;
        cout << "Judul         : ";
        getline(cin, daftarBuku[i].judul);
        cout << "Pengarang     : ";
        getline(cin, daftarBuku[i].pengarang);
        cout << "Tahun Terbit  : ";
        cin >> daftarBuku[i].tahunTerbit;
        cout << "Harga         : ";
        cin >> daftarBuku[i].harga;
        cin.ignore(); 
    }

    cout << "\n" << string(75, '-') << endl;
    cout << left << setw(4) << "No" << " | " 
         << setw(25) << "Judul" << " | " 
         << setw(20) << "Pengarang" << " | " 
         << setw(6) << "Tahun" << " | " << "Harga" << endl;
    cout << string(75, '-') << endl;

    for (int i = 0; i < jumlah; i++) {
        cout << left << setw(4) << i + 1 << " | " 
             << setw(25) << daftarBuku[i].judul << " | " 
             << setw(20) << daftarBuku[i].pengarang << " | " 
             << setw(6) << daftarBuku[i].tahunTerbit << " | " 
             << fixed << setprecision(2) << daftarBuku[i].harga << endl;
    }
    cout << string(75, '-') << endl;


    int indexTertinggi = 0;
    float totalHarga = 0;

    for (int i = 0; i < jumlah; i++) {
        if (daftarBuku[i].harga > daftarBuku[indexTertinggi].harga) {
            indexTertinggi = i;
        }
        totalHarga += daftarBuku[i].harga;
    }

    cout << "\n[Buku dengan Harga Tertinggi]" << endl;
    cout << "Judul: " << daftarBuku[indexTertinggi].judul << " (Rp" << daftarBuku[indexTertinggi].harga << ")" << endl;

    
    float rataRata = totalHarga / jumlah;
    cout << "\n[Statistik]" << endl;
    cout << "Rata-rata harga seluruh buku: Rp" << fixed << setprecision(2) << rataRata << endl;

    
    int cariTahun;
    bool ditemukan = false;
    cout << "\nMasukkan tahun terbit yang dicari: ";
    cin >> cariTahun;

    cout << "\nHasil Pencarian Tahun " << cariTahun << ":" << endl;
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
