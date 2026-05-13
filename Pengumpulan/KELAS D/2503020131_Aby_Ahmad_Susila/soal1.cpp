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
	
    Buku daftarbuku[5];

    int jumlah;

    cout << "Masukkan jumlah buku (1-5): ";
    cin >> jumlah;
    cin.ignore();

    for (int i = 0; i < jumlah; i++) {

        cout << "\nData Buku ke-" << i + 1 << endl;

        cout << "Judul        : ";
        getline(cin, daftarbuku[i].judul);

        cout << "Pengarang    : ";
        getline(cin, daftarbuku[i].pengarang);

        cout << "Tahun Terbit : ";
        cin >> daftarbuku[i].tahunTerbit;

        cout << "Harga        : ";
        cin >> daftarbuku[i].harga;
        cin.ignore();
    }

    cout << "\n| No | Judul | Pengarang | Tahun | Harga |\n";
    cout << "____________________________________________\n";

    for (int i = 0; i < jumlah; i++) {
        cout << " | " <<  i + 1 << " | ";
        cout << daftarbuku[i].judul << " | ";
        cout << daftarbuku[i].pengarang << " | ";
        cout << daftarbuku[i].tahunTerbit << " | ";
        cout << daftarbuku[i].harga << " | \n";
    }

    int hargatertinggi = 0;

    for (int i = 1; i < jumlah; i++) {

        if (daftarbuku[i].harga > daftarbuku[hargatertinggi].harga) {
           hargatertinggi = i;
        }
    }

    cout << "\n=== Buku dengan Harga Tertinggi ===\n";

    cout << "Judul        : " << daftarbuku[hargatertinggi].judul << endl;
    cout << "Pengarang    : " << daftarbuku[hargatertinggi].pengarang << endl;
    cout << "Tahun Terbit : " << daftarbuku[hargatertinggi].tahunTerbit << endl;
    cout << "Harga        : " << daftarbuku[hargatertinggi].harga << endl;

    float total = 0;

    for (int i = 0; i < jumlah; i++) {
        total += daftarbuku[i].harga;
    }

    float ratarata = total / jumlah;

    cout << "\nRata-rata harga buku : " << ratarata << endl;

    int caritahun;
    bool ditemukan = false;

    cout << "\nMasukkan tahun yang dicari : ";
    cin >> caritahun;

    cout << "\n=== Buku pada Tahun " << caritahun << " ===\n";

    for (int i = 0; i < jumlah; i++) {

        if (daftarbuku[i].tahunTerbit == caritahun) {

            ditemukan = true;

            cout << "Judul        : " << daftarbuku[i].judul << endl;
            cout << "Pengarang    : " << daftarbuku[i].pengarang << endl;
            cout << "Tahun Terbit : " << daftarbuku[i].tahunTerbit << endl;
            cout << "Harga        : " << daftarbuku[i].harga << endl;
            cout << endl;
        }
    }

    if (ditemukan == false) {
        cout << "Tidak ada buku yang terbit pada tahun tersebut." << endl;
    }

    return 0;
}
