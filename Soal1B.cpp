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
    
    float hargaTertinggi = daftarBuku[0].harga;
    int indexTertinggi = 0;
    
    for (int i = 1; i < jumlahBuku; i++) {
        if (daftarBuku[i].harga > hargaTertinggi) {
            hargaTertinggi = daftarBuku[i].harga;
            indexTertinggi = i;
        }
    }
    
    cout << "\n\n=== BUKU DENGAN HARGA TERTINGGI ===" << endl;
    cout << "Judul      : " << daftarBuku[indexTertinggi].judul << endl;
    cout << "Pengarang  : " << daftarBuku[indexTertinggi].pengarang << endl;
    cout << "Tahun      : " << daftarBuku[indexTertinggi].tahunTerbit << endl;
    
    int hargaIntTertinggi = (int)daftarBuku[indexTertinggi].harga;
    int hargaDesimalTertinggi = (int)((daftarBuku[indexTertinggi].harga - hargaIntTertinggi) * 100);
    cout << "Harga      : " << hargaIntTertinggi << "." << (hargaDesimalTertinggi < 10 ? "0" : "") << hargaDesimalTertinggi << endl;
    
    float totalHarga = 0;
    for (int i = 0; i < jumlahBuku; i++) {
        totalHarga += daftarBuku[i].harga;
    }
    float rataRata = totalHarga / jumlahBuku;
    
    int rataInt = (int)rataRata;
    int rataDesimal = (int)((rataRata - rataInt) * 100);
    
    cout << "\n=== RATA-RATA HARGA BUKU ===" << endl;
    cout << "Total harga : " << (int)totalHarga << endl;
    cout << "Jumlah buku : " << jumlahBuku << endl;
    cout << "Rata-rata   : " << rataInt << "." << (rataDesimal < 10 ? "0" : "") << rataDesimal << endl;
    
    int cariTahun;
    cout << "\n=== CARI BUKU BERDASARKAN TAHUN ===" << endl;
    cout << "Masukkan tahun: ";
    cin >> cariTahun;
    
    bool ditemukan = false;
    cout << "\nBuku yang terbit pada tahun " << cariTahun << ":" << endl;
    cout << "No | Judul             | Pengarang      | Harga" << endl;
    cout << "---|-------------------|----------------|----------" << endl;
    
    int nomor = 1;
    for (int i = 0; i < jumlahBuku; i++) {
        if (daftarBuku[i].tahunTerbit == cariTahun) {
            ditemukan = true;
            cout << " " << nomor << "  | ";
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
            
            int hargaIntBuku = (int)daftarBuku[i].harga;
            int hargaDesimalBuku = (int)((daftarBuku[i].harga - hargaIntBuku) * 100);
            cout << " " << hargaIntBuku << "." << (hargaDesimalBuku < 10 ? "0" : "") << hargaDesimalBuku << endl;
            
            nomor++;
        }
    }
    
    if (!ditemukan) {
        cout << "Tidak ada buku yang terbit pada tahun " << cariTahun << "." << endl;
    }
    
    return 0;
}