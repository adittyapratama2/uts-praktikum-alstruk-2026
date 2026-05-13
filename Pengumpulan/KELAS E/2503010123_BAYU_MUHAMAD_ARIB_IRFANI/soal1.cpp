#include <iostream>
#include <string>
using namespace std;

#define MAX_BUKU 5

void garis(){
	cout << "=========================================\n";
}

struct Buku {
    string judul;
    string pengarang;
    int tahunTerbit;
    float harga;
};

int main() {
    Buku daftarBuku[MAX_BUKU];
    int jumlahBuku;
    
	garis();
    cout << "   PROGRAM MANAJEMEN DATA BUKU TOKO BUKU   " << endl;
    garis();
	
	do {
         cout << "\nMasukkan jumlah buku (1-5): ";
         cin >> jumlahBuku;
				 
        if (cin.fail()) {
            cin.clear();
            cin.ignore(10000, '\n');
            jumlahBuku = 0;
            cout << "Input tidak valid! Masukkan angka 1-5." << endl;
        }
     } while (jumlahBuku < 1 || jumlahBuku > 5);
    

    cout << "\n========== INPUT DATA BUKU ==========" << endl;
     for (int i = 0; i < jumlahBuku; i++) {
         cout << "\nBuku ke-" << (i + 1) << ":" << endl;
         cout << "Judul       : ";
         cin.ignore();
         getline(cin, daftarBuku[i].judul);
         cout << "Pengarang   : ";
         getline(cin, daftarBuku[i].pengarang);
         cout << "Tahun Terbit: ";
         cin >> daftarBuku[i].tahunTerbit;
         cout << "Harga       : Rp ";
         cin >> daftarBuku[i].harga;
     }

    cout << "\n\n========== DAFTAR SELURUH BUKU ==========" << endl;
    cout << "No\tJudul\t\tPengarang\tTahun\tHarga" << endl;
    garis();
    
    for (int i = 0; i < jumlahBuku; i++) {
        cout << (i + 1) << "\t" 
             << daftarBuku[i].judul << "\t\t" 
             << daftarBuku[i].pengarang << "\t\t" 
             << daftarBuku[i].tahunTerbit << "\t" 
             << daftarBuku[i].harga << endl;
    }
    garis();
    

    cout << "\n========== BUKU DENGAN HARGA TERTINGGI ==========" << endl;
    int indexTermahal = 0;
    float hargaTertinggi = daftarBuku[0].harga;
    
    for (int i = 1; i < jumlahBuku; i++) {
        if (daftarBuku[i].harga > hargaTertinggi) {
            hargaTertinggi = daftarBuku[i].harga;
            indexTermahal = i;
        }
    }
    
    cout << "Informasi Buku Termahal:" << endl;
    cout << "  Judul       : " << daftarBuku[indexTermahal].judul << endl;
    cout << "  Pengarang   : " << daftarBuku[indexTermahal].pengarang << endl;
    cout << "  Tahun Terbit: " << daftarBuku[indexTermahal].tahunTerbit << endl;
    cout << "  Harga       : Rp. " << daftarBuku[indexTermahal].harga << endl;
    garis();
    
     
    float totalHarga = 0;
    for (int i = 0; i < jumlahBuku; i++) {
        totalHarga += daftarBuku[i].harga;
    }
    float rataRata = totalHarga / jumlahBuku;
    
    cout << "\n========== RATA-RATA HARGA BUKU ==========" << endl;
    cout << "Total harga " << jumlahBuku << " buku : Rp. " << totalHarga << endl;
    cout << "Rata-rata harga buku      : Rp. " << rataRata << endl;
    garis();
    

    cout << "\n========== PENCARIAN BERDASARKAN TAHUN ==========" << endl;
    int tahunCari;
    cout << "Masukkan tahun terbit yang dicari: ";
    cin >> tahunCari;
    garis();
    
    bool ditemukan = false;
    cout << "\nBuku yang terbit pada tahun " << tahunCari << ":" << endl;
    cout << "No\tJudul\t\tPengarang\tTahun\tHarga" << endl;
    garis();
    
    int nomor = 1;
    for (int i = 0; i < jumlahBuku; i++) {
        if (daftarBuku[i].tahunTerbit == tahunCari) {
            cout << nomor << "\t" 
                 << daftarBuku[i].judul << "\t\t" 
                 << daftarBuku[i].pengarang << "\t\t" 
                 << daftarBuku[i].tahunTerbit << "\t" 
                 << daftarBuku[i].harga << endl;
            ditemukan = true;
            nomor++;
        }
    }
    
    if (!ditemukan) {
        cout << "\nTidak ada buku yang terbit pada tahun tersebut." << endl;
    };
    
    return 0;
}
