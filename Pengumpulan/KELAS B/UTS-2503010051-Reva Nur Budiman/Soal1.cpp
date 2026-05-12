#include<iostream>
#include<iomanip>
using namespace std;

struct  Buku{
	string judul;
	string pengarang;
	int tahunTerbit;
	float harga;
};

int main(){
	Buku buku[5];
	int n;
	
	cout << "Jumlah buku (1-5): ";
	cin >> n;
	cin.ignore();
	
	//Input data
	for(int i = 0; i < n; i++){
		cout << "\nData Buku ke-" << i+1 << endl;
		
		cout << "Judul        : ";
		getline(cin, buku[i].judul);
		
		cout << "Pengarang    : ";
		getline(cin, buku[i].pengarang);
		
		cout << "Tahun Terbit : ";
		cin >> buku[i].tahunTerbit;
		
		cout << "Harga        : ";
		cin >> buku[i].harga;
		cin.ignore();
	}
	
	//Tampilkan data
	cout << "\n================================= Data Buku ==================================\n";
	cout << "\n------------------------------------------------------------------------------" << endl;
	cout << left << setw(5) << "No" << " | "
	<< setw(25) << "Judul" << " | "
	<< setw(20) << "Pengarang" << " | "
	<< setw(10) << "Tahun" << " | "
	<< "Harga\n" << endl;
	cout << "------------------------------------------------------------------------------" << endl;
	
	for(int i = 0; i < n; i++){
		cout << left << setw(5) << i + 1 << " | "
		<< setw(25) << buku[i].judul << " | "
		<< setw(20) << buku[i].pengarang << " | "
		<< setw(10) << buku[i].tahunTerbit << " | "
		<< buku[i].harga << endl;
		cout << "\n------------------------------------------------------------------------------" << endl;
		}
		
	//Cari harga tertinggi
	int max = 0;
	
	for(int i = 1; i < n; i++){
		if(buku[i].harga > buku[max].harga){
			max = i;
		}
	}
	cout << "\nBuku Harga Tertinggi: \n";
	cout << "Judul  : " << buku[max].judul << endl;
	cout << "Harga  : " << buku[max].harga << endl;
	
	//Rata-rata harga
	float total = 0;
	
	for(int i = 0; i < n; i++){
		total += buku[i].harga;
	}
	
	cout << "Rata-rata harga: " << total/n << endl;
	
	//Cari berdasarkan tahun
	int cari;
	bool ketemu = false;
	
	cout << "\nMasukan tahun yang dicari: ";
	cin >> cari;
	
	cout << "\nBuku pada tahun " << cari << endl;
	
	for(int i = 0; i < n; i++){
		if(buku[i].tahunTerbit == cari){
			cout << buku[i].judul << " - " << buku[i].pengarang << endl;
			ketemu = true;
		}
	} 
	
	if(!ketemu){
		cout << "Tidak ada buku yang terbit pada tahun tersebut\n" << endl;
	}
	
	return 0;
	
	}
	
	
