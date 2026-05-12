#include <iostream>
#include <iomanip>
using namespace std;

struct databuku {
    string judul, pengarang;
    int tahun;
    float harga;
};

int main () {
    databuku buku[5];
    int jumlah;

    //input data buku
    cout << "\n===== INPUT DATA BUKU =====" << endl;
    cout << "Masukkan Jumlah Buku (1-5): ";
    cin >> jumlah;
    cin.ignore();

    for (int i = 0; i < jumlah; i++) {
        cout << "\nData Buku ke-" << i + 1 << endl;
        cout << "Judul      : ";
        getline(cin, buku[i].judul);
        cout << "Pengarang  : ";
        getline(cin, buku[i].pengarang);
        cout << "Tahun      : ";
        cin >> buku[i].tahun;
        cout << "Harga      : ";
        cin >> buku[i].harga;
        cin.ignore();
    }

    //tampil data buku
    cout << "-----------------------------------------------------------------" << endl;
    cout << "|No| \t" << "|Judul| \t" << "|Pengarang| \t" << "|Tahun| \t" << "|Harga| \t"<< endl;
    cout << "-----------------------------------------------------------------" << endl;

    cout << fixed << setprecision(2);

    for(int i=0; i<jumlah; i++) {
        cout << i + 1 << "\t";
        cout << buku[i].judul << "\t";
        cout << buku[i].pengarang << "\t";
        cout << buku[i].tahun << "\t";
        cout << buku[i].harga << "\t" << endl;
    }
    cout << "-----------------------------------------------------------------" << endl;

    //harga tertinggi
    int max = 0;

    for(int i=0; i<jumlah; i++) {
        if(buku[i].harga > buku[max].harga) {
            max = i;
        }
     }

    cout << "\n===== BUKU HARGA TERTINGGI =====" << endl;
    cout << "Judul     : " << buku[max].judul << endl;
    cout << "Pengarang : " << buku[max].pengarang << endl;
    cout << "Tahun     : " << buku[max].tahun << endl;
    cout << "Harga     : " << buku[max].harga << endl << endl;

    //rata rata harga
    float total = 0;

    for(int i=0; i<jumlah; i++) {
        total += buku[i].harga;
    }

    float ratarata =total/jumlah;

    cout << "\n===== RATA - RATA HARGA =====" << endl;
    cout << "Rata - rata harga buku : " << ratarata << endl << endl;;

    //mencari tahun buku
    int caritahun;
    bool menemukan = false;

    cout << "Masukkan Tahun yang dicari: ";
    cin >> caritahun;

    cout << "\n===== HASIL PENCARIAN =====" << endl;

    for(int i=0; i<jumlah; i++) {
        if(buku[i].tahun == caritahun) {
            menemukan = true;

            cout << "Judul     : " << buku[i].judul << endl;
            cout << "Pengarang : " << buku[i].pengarang << endl;
            cout << "Harga     : " << buku[i].harga << endl;
        }
    }

    if(!menemukan) {
        cout << "Tidak ada buku yang terbit pada tahun tersebut." << endl;
    }

    return 0;
}
