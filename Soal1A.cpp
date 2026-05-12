
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
    Buku daftarBuku[5];
    int jumlahBuku;
    
    do {
        cout << "Masukkan jumlah buku (1-5): ";
        cin >> jumlahBuku;
        
        if (jumlahBuku < 1 || jumlahBuku > 5) {
            cout << "Jumlah buku harus antara 1 dan 5!" << endl;
        }
    } while (jumlahBuku < 1 || jumlahBuku > 5);
    
    cout << "\n--- Input Data Buku ---" << endl;
    for (int i = 0; i < jumlahBuku; i++) {
        cout << "\nBuku ke-" << (i + 1) << ":" << endl;
        
        cout << "Judul    : ";
        cin >> daftarBuku[i].judul;
        
        cout << "Pengarang: ";
        cin >> daftarBuku[i].pengarang;
        
        cout << "Tahun    : ";
        cin >> daftarBuku[i].tahunTerbit;
        
        cout << "Harga    : ";
        cin >> daftarBuku[i].harga;
    }
    
    cout << "\n\n--- Daftar Buku ---" << endl;
    cout << "No | Judul             | Pengarang      | Tahun | Harga" << endl;
    cout << "---|-------------------|----------------|-------|----------" << endl;
    
    for (int i = 0; i < jumlahBuku; i++) {
        cout << " " << (i + 1) << "  | ";
        cout << daftarBuku[i].judul;
        
        int panjangJudul = daftarBuku[i].judul.length();
        for (int j = panjangJudul; j < 17; j++) {
            cout << " ";
        }
        cout << " | ";
        
        cout << daftarBuku[i].pengarang;
        int panjangPengarang = daftarBuku[i].pengarang.length();
        for (int j = panjangPengarang; j < 14; j++) {
            cout << " ";
        }
        cout << " | ";
        
        cout << "  " << daftarBuku[i].tahunTerbit << "   | ";
        
        int hargaInt = (int)daftarBuku[i].harga;
        int hargaDesimal = (int)((daftarBuku[i].harga - hargaInt) * 100);
        cout << " " << hargaInt << "." << (hargaDesimal < 10 ? "0" : "") << hargaDesimal << endl;
    }
    
    return 0;
}