#include <iostream>
using namespace std;

struct buku {
	string judul, pengarang;
	int tahunterbit;
	float harga;
};

int main(){
	buku daftarbuku[5];
	
	int jumlah;
	
	cout<<"Masukan Jumlah Buku (1-5): ";
	cin>>jumlah;
	cin.ignore();
	 
	if(jumlah<1 || jumlah>5){
		cout<<"Buku harus berjumlah 1-5."<<endl;
		cin.ignore();
	}
	
	for(int i=0; i<jumlah; i++){
		cout<<"\nData buku ke-: "<<i+1<<endl;
		
		cout<<"Judul: ";
		getline(cin, daftarbuku[i].judul);
		
		cout<<"Pengarang: ";
		getline(cin, daftarbuku[i].pengarang);
		
		cout<<"Tahun Terbit: ";
		cin>>daftarbuku[i].tahunterbit;
		
		cout<<"Harga buku: ";
		cin>>daftarbuku[i].harga;
		cin.ignore();
		
	}
	
	cout << "\n| NO | Judul | Pengarang | Tahun Terbit | Harga |\n";
	cout << "________________________________________________\n";
	
	for (int i = 0; i < jumlah; i++) {
		cout <<" | "<< i + 1 << " | ";
		cout <<daftarbuku[i].judul<<" | ";
		cout <<daftarbuku[i].pengarang<<" | ";
		cout <<daftarbuku[i].tahunterbit<<" | ";
		cout <<daftarbuku[i].harga<<" | "<<endl;
	}
	
	int hargatertinggi=0;
	
	for(int i=1; i<jumlah; i++){
		if(daftarbuku[i].harga > daftarbuku[hargatertinggi].harga){
			hargatertinggi=i;
		}
	}
	
	cout<<"\n===== Harga Buku dengan Harga Tertinggi =====\n";
	
	cout<<"Judul: "<<daftarbuku[hargatertinggi].judul<<endl;
	cout<<"Pengarang: "<<daftarbuku[hargatertinggi].pengarang<<endl;
	cout<<"Tahun Terbit: "<<daftarbuku[hargatertinggi].tahunterbit<<endl;
	cout<<"Harga: "<<daftarbuku[hargatertinggi].harga<<endl;
	
	float total = 0;
	
	for (int i = 0; i < jumlah; i++) {
		total += daftarbuku[i].harga;
	}	
	
	float ratarata = total / jumlah;
	
	cout << "\n Rata rata harga buku: " << ratarata << endl;
	
	int caritahun;
	bool ditemukan = false;
	
	cout << "\nMasukan tahun yang dicari: ";
	cin >> caritahun;
	
	cout << "\n=== Buku pada tahun " << caritahun << " ===\n";
	
	for (int i = 0; i , jumlah; i++) {
		
		if (daftarbuku[i].tahunterbit == caritahun) {
			ditemukan = true;
			
			cout << "Judul         : " << daftarbuku[i].judul << endl;
			cout << "Pengarang     : " << daftarbuku[i].pengarang << endl;
			cout << "Tahun terbit  : " << daftarbuku[i].tahunterbit << endl;
			cout << "Harga         : " << daftarbuku[i].harga << endl;
			cout << endl;
		}
	}
	
	if (ditemukan == false) {
		cout << "Tidak ada buku yang terbit di tahun itu." << endl;
	}
	return 0;
}