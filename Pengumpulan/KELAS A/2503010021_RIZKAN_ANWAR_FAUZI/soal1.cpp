#include <iostream>
#include <string>

using namespace std;

// Bikin struktur buat nyimpen data buku
struct Buku {
    string judul;
    string penulis; // tadinya pengarang, diganti biar beda
    int thn;        // pake singkatan biar nggak kaku
    float harga;
};

int main() {
    Buku list[5]; // array buat nampung maks 5 buku
    int jml;
    float total_duit = 0;

    cout << "--- Input Data Toko Buku ---" << endl;
    cout << "Banyaknya buku (1-5): ";
    cin >> jml;
    cin.ignore(); // ini penting biar getline nggak error

    for(int i = 0; i < jml; i++) {
        cout << "\nBuku ke-" << i+1 << endl;
        cout << "Judul Buku  : "; getline(cin, list[i].judul);
        cout << "Penulis     : "; getline(cin, list[i].penulis);
        cout << "Tahun Terbit: "; cin >> list[i].thn;
        cout << "Harga       : "; cin >> list[i].harga;
        cin.ignore();
        
        total_duit += list[i].harga; 
    }

    // Tampilan Tabel Manual
    cout << "\nDAFTAR BUKU TERDAFTAR:" << endl;
    cout << "No | Judul | Penulis | Thn | Harga" << endl;
    for(int i = 0; i < jml; i++) {
        cout << i+1 << " | " << list[i].judul << " | " << list[i].penulis 
             << " | " << list[i].thn << " | Rp" << list[i].harga << endl;
    }

    // Cari yang paling mahal
    int index_mahal = 0;
    for(int j = 1; j < jml; j++) {
        if(list[j].harga > list[index_mahal].harga) {
            index_mahal = j;
        }
    }

    cout << "\n----------------------------" << endl;
    cout << "Buku paling mahal harganya: " << list[index_mahal].judul << endl;
    cout << "Rata-rata harga buku: Rp" << total_duit / jml << endl;

    return 0;
}