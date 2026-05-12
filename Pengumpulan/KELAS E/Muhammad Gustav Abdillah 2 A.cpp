#include <iostream>
using namespace std;

const int maksimal = 5;

string buku[maksimal];
int atas = -1;

// Tambah buku
void tambahBuku(string judul) {

    if (atas == maksimal - 1) {
        cout << "Stack penuh!\n";
    }
    else {

        atas++;
        buku[atas] = judul;

        cout << judul << " berhasil ditambahkan.\n";
    }
}

// Hapus buku
void hapusBuku() {

    if (atas < 0) {
        cout << "Stack kosong!\n";
    }
    else {

        cout << buku[atas] << " berhasil dihapus.\n";

        atas--;
    }
}

// Lihat buku teratas
void lihatAtas() {

    if (atas < 0) {
        cout << "Tidak ada buku.\n";
    }
    else {

        cout << "Buku paling atas : " << buku[atas] << endl;
    }
}

// Tampilkan semua isi stack
void tampilData() {

    if (atas < 0) {
        cout << "Stack masih kosong.\n";
    }
    else {

        cout << "\nDaftar Buku dalam Stack:\n";

        for (int i = atas; i >= 0; i--) {

            cout << i + 1 << ". " << buku[i] << endl;
        }
    }
}

int main() {

    tambahBuku("Fisika Dasar");
    tambahBuku("Kalkulus");
    tambahBuku("Algoritma");
    tambahBuku("Jaringan");

    cout << endl;

    lihatAtas();

    cout << endl;

    hapusBuku();
    hapusBuku();

    tampilData();

    return 0;
}
