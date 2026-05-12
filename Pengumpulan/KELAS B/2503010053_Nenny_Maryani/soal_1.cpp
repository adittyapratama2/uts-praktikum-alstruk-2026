#include<iostream>
#include<iomanip>
using namespace std;

struct buku {
	string judul, pengarang;
	int tahun_terbit;
	float harga;
};

int main() {
	buku bk[5];
	
	int jumlah;
	
	cout << "Masukkan jumlah buku (1 - 5) : ";
	cin >> jumlah;
	
	if(jumlah < 1 || jumlah > 5) {
		cout << "Input tidak valid!" << endl;
		return 0;
	}
	
	cin.ignore();
	
	// input
	for(int i = 0; i < jumlah; i++) {
		cout << "\nBuku ke - " << i + 1 << endl;
		
		cout << "Judul     : ";
		getline(cin, bk[i].judul);
		
		cout << "Pengarang : ";
		getline(cin, bk[i].pengarang);
		
		cout << "Tahun     : ";
		cin >> bk[i].tahun_terbit;
		
		cout << "Harga     : ";
		cin >> bk[i].harga;
		
		cin.ignore();
	}
	
	// tabel
	cout << fixed << setprecision(2);
	cout << "\n========================================================================" << endl;
	cout << "                               Data Buku" << endl;
	cout << "========================================================================" << endl;
	
	cout << left
		 << setw(4) << "No"
		 << " | " << setw(20) << "Judul"
		 << " | " << setw(15) << "Pengarang"
		 << " | " << setw(6) << "Tahun"
		 << " | " << setw(20) << "Harga" << endl;
	
	cout << "------------------------------------------------------------------------" << endl;
	
	for(int i = 0; i < jumlah; i++) {
		cout << left
		 	 << setw(4) << i + 1
		     << " | " << setw(20) << bk[i].judul
		 	 << " | " << setw(15) << bk[i].pengarang
		 	 << " | " << setw(6) << bk[i].tahun_terbit
		 	 << " | " << "Rp. " << setw(20) << bk[i].harga << endl;
	}
	
	cout << "------------------------------------------------------------------------" << endl;
	
	// buku harga tertinggi
	int tertinggi = 0;
	
	for(int i = 0; i < jumlah; i++) {
		if(bk[i].harga > bk[tertinggi].harga) {
			tertinggi = i;
		}
	}
	
	cout << "\n====== Buku dengan harga tertinggi ======" << endl;
	cout << "Judul     : " << bk[tertinggi].judul << endl;
	cout << "Pengarang : " << bk[tertinggi].pengarang << endl;
	cout << "Tahun     : " << bk[tertinggi].tahun_terbit << endl;
	cout << "Harga     : Rp. " << bk[tertinggi].harga << endl;
	
	// rata-rata
	float total = 0;
	
	for(int i = 0; i < jumlah; i++) {
		total += bk[i].harga;
	}
	
	float rata = total / jumlah;
	
	cout << "\nRata-rata harga buku : Rp. " << rata << endl;
	
	// filter tahun terbit
	int cari;
	
	cout << "\nMasukkan tahun : ";
	cin >> cari;
	
	bool ditemukan = false;
	
	cout << "Buku terbit pada tahun " << cari << " : " << endl;
	for(int i = 0; i < jumlah; i++) {
		if(bk[i].tahun_terbit == cari) {
			cout << "- " << bk[i].judul << endl;
			ditemukan = true;
		}
	}
	
	if(!ditemukan) {
		cout << "Tidak ada buku yang terbit pada tahun tersebut." << endl;
	}
	
	return 0;
}
