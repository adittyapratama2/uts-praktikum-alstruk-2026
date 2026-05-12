#include <iostream>
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

    cout << "Masukkan jumlah buku : ";
    cin >> jumlah;

    for (int i = 0; i < jumlah; i++) {
        cout << "\nInput Data Buku Ke-" << i + 1 << endl;
        cin.ignore();
        cout << "Judul        : "; getline(cin, daftarBuku[i].judul);
        cout << "Pengarang    : "; getline(cin, daftarBuku[i].pengarang);
        cout << "Tahun Terbit : "; cin >> daftarBuku[i].tahunTerbit;
        cout << "Harga        : "; cin >> daftarBuku[i].harga;
    }
    
    // 4. Tampilkan data dalam format tabel
    	cout <<"========================================="<<endl;
		cout <<"no\t|judul\t|pengarang\t|tahun\t|harga\t" <<endl;
		cout <<"========================================="<<endl;
		
    for (int i = 0; i < jumlah; i++) {
        cout << i + 1 
             <<"\t "<<daftarBuku[i].judul 
             << "\t "<<daftarBuku[i].pengarang 
             << "\t "<<daftarBuku[i].tahunTerbit 
             << "\t " << daftarBuku[i].harga << endl<<endl;
    }

    // --- LOGIKA MENCARI DATA HARGA TERTINGGI ---
    int indeksMax = 0; 
    for (int i = 1; i < jumlah; i++) {
        if (daftarBuku[i].harga > daftarBuku[indeksMax].harga) {
            indeksMax = i; 
        }
        
    }

    // Menampilkan data lengkap buku termahal
    cout<<"harga termahal "<<endl;
    cout << "Judul        : " << daftarBuku[indeksMax].judul << endl;
    cout << "Pengarang    : " << daftarBuku[indeksMax].pengarang << endl;
    cout << "Tahun Terbit : " << daftarBuku[indeksMax].tahunTerbit << endl;
    cout << "Harga        : Rp" <<daftarBuku[indeksMax].harga << endl<<endl;
    
    float total= 0;
    float ratarata ;
    
    for (int i =0;i<jumlah ;i++){
    	total += daftarBuku[i].harga;
	}if (5>0){
		ratarata = total/5;
		cout <<"rata rata harga :" << ratarata<< endl;
	}
	
	int cariTahun;
    bool ditemukan = false;

    cout << "\nMasukkan tahun terbit yang dicari: ";
    cin >> cariTahun;

    cout << "\nHasil Pencarian Tahun " << cariTahun << ":" << endl;
    cout << "---------------------------------------" << endl;

    for (int i = 0; i < jumlah; i++) {
        if (daftarBuku[i].tahunTerbit == cariTahun) {
            cout << "- " << daftarBuku[i].judul << " (Karya: " << daftarBuku[i].pengarang << ")" << endl;
            ditemukan = true;
        }
    }

    if (!ditemukan) {
        cout << "Tidak ada buku yang terbit pada tahun tersebut." << endl;
    }
    
    return 0;
}

