#include <iostream>
#include <iomanip>
using namespace std;

// Struct data buku
struct Buku {
    string judul;
    string pengarang;
    int tahun;
    float harga;
};

int main() {

    Buku buku[5];
    int jumlahBuku;

    cout << "======================================" << endl;
    cout << "      PROGRAM DATA TOKO BUKU" << endl;
    cout << "======================================" << endl;

    cout << "Masukkan jumlah buku : ";
    cin >> jumlahBuku;
    cin.ignore();

    // Input data buku
    for (int i = 0; i < jumlahBuku; i++) {

        cout << "\nData Buku Ke-" << i + 1 << endl;

        cout << "Judul Buku     : ";
        getline(cin, buku[i].judul);

        cout << "Nama Pengarang : ";
        getline(cin, buku[i].pengarang);

        cout << "Tahun Terbit   : ";
        cin >> buku[i].tahun;

        cout << "Harga Buku     : ";
        cin >> buku[i].harga;
        cin.ignore();
    }

    // Menampilkan semua data buku
    cout << "\n\nDAFTAR DATA BUKU" << endl;

    cout << "==================================================================" << endl;

    cout << left << setw(5)  << "No"
         << setw(25) << "Judul"
         << setw(20) << "Pengarang"
         << setw(10) << "Tahun"
         << setw(12) << "Harga" << endl;

    cout << "==================================================================" << endl;

    for (int i = 0; i < jumlahBuku; i++) {

        cout << left << setw(5) << i + 1
             << setw(25) << buku[i].judul
             << setw(20) << buku[i].pengarang
             << setw(10) << buku[i].tahun
             << fixed << setprecision(2)
             << setw(12) << buku[i].harga << endl;
    }

    // Mencari buku dengan harga tertinggi
    int indeksMahal = 0;

    for (int i = 1; i < jumlahBuku; i++) {
        if (buku[i].harga > buku[indeksMahal].harga) {
            indeksMahal = i;
        }
    }

    cout << "\n\nBUKU DENGAN HARGA TERTINGGI" << endl;
    cout << "Judul      : " << buku[indeksMahal].judul << endl;
    cout << "Pengarang  : " << buku[indeksMahal].pengarang << endl;
    cout << "Tahun      : " << buku[indeksMahal].tahun << endl;
    cout << "Harga      : " << buku[indeksMahal].harga << endl;

    // Menghitung rata-rata harga
    float totalHarga = 0;

    for (int i = 0; i < jumlahBuku; i++) {
        totalHarga += buku[i].harga;
    }

    float rataRata = totalHarga / jumlahBuku;

    cout << "\nRata-rata harga buku : " 
         << fixed << setprecision(2)
         << rataRata << endl;

    // Pencarian berdasarkan tahun terbit
    int cariTahun;
    bool ditemukan = false;

    cout << "\nMasukkan tahun yang ingin dicari : ";
    cin >> cariTahun;

    cout << "\nBuku yang terbit pada tahun " 
         << cariTahun << ":" << endl;

    for (int i = 0; i < jumlahBuku; i++) {

        if (buku[i].tahun == cariTahun) {

            cout << "- " << buku[i].judul
                 << " | " << buku[i].pengarang
                 << " | Harga : " << buku[i].harga << endl;

            ditemukan = true;
        }
    }

    if (ditemukan == false) {
        cout << "Tidak ada buku yang terbit pada tahun tersebut." << endl;
    }

    cout << "\n";
    system("pause");

    return 0;
}