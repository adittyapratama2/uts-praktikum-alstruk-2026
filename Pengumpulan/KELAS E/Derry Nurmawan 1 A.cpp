#include <iostream>
#include <iomanip>
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

    int jumlah;

    do {
        cout << "Masukkan jumlah buku (1-5): ";
        cin >> jumlah;
    } while (jumlah < 1 || jumlah > 5);

    cin.ignore();

    for (int i = 0; i < jumlah; i++) {
        cout << "\nData Buku ke-" << i + 1 << endl;

        cout << "Judul          : ";
        getline(cin, daftarBuku[i].judul);

        cout << "Pengarang      : ";
        getline(cin, daftarBuku[i].pengarang);

        cout << "Tahun Terbit   : ";
        cin >> daftarBuku[i].tahunTerbit;

        cout << "Harga          : ";
        cin >> daftarBuku[i].harga;

        cin.ignore();
    }

    cout << "\n==============================================================\n";
    cout << left
         << setw(5)  << "No"
         << setw(25) << "Judul"
         << setw(20) << "Pengarang"
         << setw(10) << "Tahun"
         << setw(10) << "Harga" << endl;

    cout << "==============================================================\n";

    for (int i = 0; i < jumlah; i++) {
        cout << left
             << setw(5)  << i + 1
             << setw(25) << daftarBuku[i].judul
             << setw(20) << daftarBuku[i].pengarang
             << setw(10) << daftarBuku[i].tahunTerbit
             << fixed << setprecision(2)
             << setw(10) << daftarBuku[i].harga
             << endl;
    }

    cout << "==============================================================\n";

    return 0;
}
