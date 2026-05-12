#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

struct Buku {
	string judul;
	string pengarang;
	int tahun_terbit;
	float harga;
};

int main () {
	Buku buku[5];
	int jumlah;
	do {
		cout << "Masukan jumlah buku 1-5: ";
		cin >> jumlah;
		if (jumlah < 1 || jumlah > 5) {
			cout << "Jumlah yang anda masukan tidak valid! maksimal 5 buku";
		} 
	} while (jumlah <1 || jumlah >5);
	//input data buku
	for (int i = 0; i < jumlah; i++) {
		cout << "\n Masukan data buku ke- " << i+1<< endl;
		cout << "Masukan judul buku: ";
		cin >> buku[i].judul;
		cin.ignore();
		cout << "Masukan nama pengarang: ";
		getline (cin,buku[i].pengarang);
		cout << "Masukan tahun terbit: ";
		cin >> buku[i].tahun_terbit;
		cout << "Masukan harga : Rp.";
		cin >> buku[i].harga;
	}
	// tabel
	int lebar_tabel = 72;
	cout << setfill('-') << setw(lebar_tabel) << "" << endl;
    cout << setfill(' '); 
    cout << left;
    //isi tabel
	cout << left;
    cout << "| " << setw(3)  << "No"
         << "| " << setw(18) << "Judul"
         << "| " << setw(20) << "Pengarang"
         << "| " << setw(8)  << "Tahun"
         << "| " << setw(13) << "Harga"
         << "|" << endl;

    cout << setfill('-') << setw(lebar_tabel) << "" << endl;
    cout << setfill(' ');
    
    cout << setfill('-') << setw(lebar_tabel) << "" << endl;
    cout << setfill(' ');
	// data buku
    for (int i = 0; i < jumlah; i++) {
        cout << "| " << setw(3)  << (i + 1)   
             << "| " << setw(18) << buku[i].judul
             << "| " << setw(20) << buku[i].pengarang
             << "| " << setw(8)  << buku[i].tahun_terbit
             << "| " << setw(13) << buku[i].harga
             << "|" << endl;
    }
    // rata2 dan total harga
	cout << "\n>>> RATA-RATA HARGA BUKU <<<\n";
    
    if (jumlah > 0) {
        long total_hrg = 0; 
        
        for (int i = 0; i < jumlah; i++) {
            total_hrg += buku[i].harga;
        }
        
        double rata2 = (double)total_hrg / jumlah;
        cout << fixed << setprecision(0); 
        cout << "Total Harga Semua Buku  : Rp. " << total_hrg << endl;
        cout << "Rata-rata Harga Buku    : Rp. " << rata2 << endl;
    } else {
        cout << "Tidak ada data buku untuk dihitung.\n";
    }
    
    cout << setfill('-') << setw(lebar_tabel) << "" << endl;
    cout << setfill(' ');
    // data buku termahal
    cout << "\n>>> DATA BUKU TERMAHAL <<<\n";
    
    if (jumlah > 0) {
        int hrg_termahal = 0; 
        
        for (int i = 1; i < jumlah; i++) {
            if (buku[i].harga > buku[hrg_termahal].harga) {
                hrg_termahal = i; 
            }
        }

        cout << "Judul     : " << buku[hrg_termahal].judul << endl;
        cout << "Pengarang : " << buku[hrg_termahal].pengarang << endl;
        cout << "Harga     : Rp. " << buku[hrg_termahal].harga << endl;
    }
    //mencari berdasarkan tahun
	cout << "\n>>> PENCARIAN BUKU BERDASARKAN TAHUN <<<\n";
    
    int cari_thn;
    bool thn_ditemukan = false;

    cout << "Masukkan Tahun Terbit yang dicari: ";
    cin >> cari_thn; 
    
    cout << "\n--- HASIL PENCARIAN TAHUN " << cari_thn << " ---\n";

    for (int i = 0; i < jumlah; i++) {

        if (buku[i].tahun_terbit == cari_thn) {
            cout << "- " << buku[i].judul 
                 << " (Pengarang: " << buku[i].pengarang 
                 << ", Harga: Rp " << buku[i].harga << ")\n";
            thn_ditemukan = true; 
        }
    }
    
    if (!thn_ditemukan) {
        cout << "Maaf, tidak ada data buku yang terbit pada tahun " << cari_thn << ".\n";
    }
}