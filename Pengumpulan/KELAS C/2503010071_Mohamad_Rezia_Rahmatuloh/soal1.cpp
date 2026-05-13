#include <iostream>
#include <iomanip>
using namespace std;

struct Buku {
    string judul;
    string pengarang;
    int TATE;
    float harga;
};

int main() {
    Buku mhs[5];
    int jumlah;

    cout << "input jumlah buku 1-5: ";
    cin >> jumlah;

    for (int i = 0; i < jumlah; i++) {
        cout << "\nbuku ke-" << i + 1 << endl;

        cout << "judul: ";
        cin >> mhs[i].judul;

        cin.ignore();

        cout << "nama sang pengarang: ";
        getline(cin, mhs[i].pengarang);

        cout << "masukan tahun terbit: ";
        cin >> mhs[i].TATE;

        cout << "masukkan harga: ";
        cin >> mhs[i].harga;
    }

    cout << "\n====== JUMLAH BUKU ======\n";

    cout << left << setw(5) << "no"
         << setw(16) << "judul"
         << setw(12) << "pengarang"
         << setw(10) << "tahun"
         << setw(10) << "harga" << endl;

    for (int i = 0; i < jumlah; i++) {
        cout << left << setw(5) << i + 1
         << setw(16) << mhs[i].judul
         << setw(12) << mhs[i].pengarang
         << setw(10) << mhs[i].TATE
         << setw(10) << mhs[i].harga << endl;
    }

    int maxIndex = 0;

    for (int i = 1; i < jumlah; i++) {
        if (mhs[i].harga > mhs[maxIndex].harga) {
            maxIndex = i;
        }
    }

    cout << "\n===== Buku dengan harga tertinggi =====\n";
    cout << "judul: " << mhs[maxIndex].judul << endl;
    cout << "pengarang: " << mhs[maxIndex].pengarang << endl;
    cout << "tahun: " << mhs[maxIndex].TATE << endl;
    cout << "harga: " << mhs[maxIndex].harga << endl;

    float total = 0;

    for (int i = 0; i < jumlah; i++) {
        total += mhs[i].harga;
    }

    float rata = total / jumlah;

    cout << "\nRata-rata harga: " << rata << endl;

    int cariTahun;
    bool ditemukan = false;

    cout << "\nMasukkan tahun yang dicari: ";
    cin >> cariTahun;

    cout << "\nBuku yang terbit pada tahun " << cariTahun << ":\n";

    for (int i = 0; i < jumlah; i++) {

        if (mhs[i].TATE == cariTahun) {

            cout << "- " << mhs[i].judul
                 << " | " << mhs[i].pengarang
                 << " | " << mhs[i].harga << endl;

            ditemukan = true;
        }
    }

    if (!ditemukan) {
    cout << "Tidak ada buku yang terbit pada tahun tersebut." << endl;
    }
}