#include <iostream>
#include <iomanip>
using namespace std;

struct Buku {
    string judul, pengarang;
    int tahun;
    float harga;
};

int main() {
    Buku buku[5];
    int n;
    
    cout <<"jumlah buku: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout <<"\nBuku ke-" << i + 1 << endl;
        
        cin.ignore();

        cout <<"judul: ";
        getline (cin, buku[i].judul);

        cout <<"pengarang: ";
        getline (cin, buku[i].pengarang);

        cout <<"Tahun: ";
        cin >> buku[i].tahun;

         cout <<"Harga: ";
        cin >> buku[i].harga;

    }

    cout << "\nDATA BUKU\n";

    cout <<"-----------------------------------------------------------------------------------------\n";

    cout << left 
         << setw(5) << "NO"
         << setw(30) << "JUDUL"
         << setw(25) << "PENGARANG"
         << setw(10) << "TAHUN"
         << setw(10) << "HARGA" << endl;

    cout <<"-----------------------------------------------------------------------------------------\n";

    for (int i = 0; i < n; i++) {
        cout << left
             << setw(5) << i + 1
             << setw(30) << buku[i].judul
             << setw(25) << buku[i].pengarang
             << setw(10) << buku[i].tahun
             << setw(10) << buku[i].harga << endl;
    }

    cout <<"-----------------------------------------------------------------------------------------\n";

    int max = 0;

    for (int i = 0; i < n; i++) {
        if (buku[i].harga > buku[max].harga) {
            max = i;
        }
    }

    cout << "\nHarga Tertinggi: \n";

    cout << "judul : " << buku[max].judul << endl;
    cout << "pengarang: " << buku[max].pengarang << endl;
    cout << "tahun: " << buku[max].tahun << endl;
    cout << "harga: " << buku[max].harga << endl;


float total = 0;

for (int i = 0; i < n; i++) {
    total += buku[i].harga;
}

cout << "\nHarga rata-rata: " << total / n << endl;

int cari;
bool ditemukan = false;

cout << "\nMasukan tahun: ";
cin >> cari;

cout <<"\nBuku tahun: " << cari << endl;

for (int i = 0; i < n; i++) {
    if (buku[i].tahun == cari) {
        cout << " " << buku[i].judul << endl;
        ditemukan = true;
    }
}

if (ditemukan == false) {
    cout << "buku tidak ditemukan" << endl;
}

return 0;
    
         

}
