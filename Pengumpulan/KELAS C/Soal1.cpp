#include <iostream>
using namespace std;

struct Buku {
	string pengarang, judul;
	int tahun_terbit;
	float harga;
};

int main(){
	Buku book[5]; // array of struct max 5
	int n; // untuk menginput jumlah buku
	
	cout << "Masukan jumlah buku : ";
	cin >> n;
	cout << endl;
	
	for(int i = 0; i < n; i++){
		system("cls");
		// input judul buku
		cout << "judul buku : ";
		cin.ignore();
		getline(cin, book[i].judul);
		
		// input pengarang
		cout << "pengarang : ";
		getline(cin, book[i].pengarang);
		
		// input tahun
		cout << "Tahun terbit : ";
		cin >> book[i].tahun_terbit;
		
		// input harga buku
		cout << "Harga buku : ";
		cin >> book[i].harga;
	}
	
	cout << endl;
	// tampilkan seluruh data
	cout << "================= Tampilkan Data Buku ===================" << endl;
	cout << "NO | Judul          | Pengarang Buku | Tahun | Harga"  << endl;
	cout << "---------------------------------------------------------" << endl;
	
	for(int i = 0; i < n; i++){
		cout << i + 1 << " | "
			 << book[i].judul << " | "
			 << book[i].pengarang << " | "
			 << book[i].tahun_terbit << " | "
			 << book[i].harga << endl;
	}
	
	// cari dan tampilkan buku dengan harga tertinggi
	int hargaHigh = 0;
	for(int i = 0; i < n; i++){
		if(book[i].harga > book[hargaHigh].harga){
			hargaHigh = i;
		}
	}
	
	cout << endl;
	cout << "Buku dengan harga tertinggi: " << endl;
	cout << book[hargaHigh].judul << " dengan harga : " << book[hargaHigh].harga << endl << endl;
	
	// rata rata harga seluruh buku
	float totalHarga = 0;
	for(int i = 0; i < n; i++){
		totalHarga += book[i].harga;
	}
	
	float avrg = totalHarga / n;
	cout << "Rata-rata harga : " << avrg << endl;
	
	// cari tahun terbit dari buku yang ada
	int cariTahun;
	cout << "Masukan tahun terbit buku : ";
	cin >> cariTahun;
	
	bool ditemukan = false;
	
	for(int i = 0; i < n; i++){
		if(book[i].tahun_terbit == cariTahun){
			cout << "- " << book[i].judul << endl;
			ditemukan = true;
		}
	} if(!ditemukan){
		cout << "Tidak ada buku yang terbit pada tahun tersebur";
	}
}