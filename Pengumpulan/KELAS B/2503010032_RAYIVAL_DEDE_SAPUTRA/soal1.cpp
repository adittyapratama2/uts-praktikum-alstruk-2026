#include <iostream>
using namespace std;

//Pertanyaan A - Deklarasi Struct dan Input Data

struct Mahasiswa{
	string nim;
	string nama;
	int semester;
	float ipk;
};

int main(){
	
		Mahasiswa mhs[5];
		
		int jumlah;
		cout << "Masukan jumlah Mahasiswa (1-5) : ";
		cin >> jumlah;
		
		cin.ignore();
		
		for (int i = 0; i < jumlah; i++){
		
			cout <<"\nData Mahasiswa ke-"<< i + 1 << endl;
			
			cout <<"NIM : ";
			getline(cin, mhs[i].nim);
			
			cout <<"Nama : ";
			getline(cin, mhs[i].nama);
			
			cout <<"Semester : ";
			cin >> mhs[i].semester;
			
			cout <<"IPK : ";
			cin >> mhs[i].ipk;
			
			cin.ignore();
		}
		
		cout<<"\n==== DATA MAHASISWA ====\n";
		cout <<"NO\tNIM\t\tNama\t\t\tSemester\tIPK\n";
		
		for (int i = 0; i < jumlah; i++){
			cout<< i + 1 << "\t"
				<<mhs[i].nim << "\t"
				<<mhs[i].nama << "\t"
				<<mhs[i].semester << "\t"
				<<mhs[i].ipk << endl;
		}
		
		//PERTANYAAN B - Pencarian dan Statistik
		//Mahasiswa dengan IPK tertinggi
		int tertinggi = 0;
		
		for (int i = 0; i < jumlah; i++){
			
			if (mhs[i].ipk > mhs[tertinggi].ipk){
				tertinggi = i;
			}
		}
		
		cout<<"\n===== IPK TERTINGGI =====\n";
		
		cout<< "NAMA	: "<< mhs[tertinggi].nama<<endl;
		cout<< "NILAI	: "<< mhs[tertinggi].ipk<<endl;
		
		//rata-rata IPK seluruh Mahasiswa
		float total = 0;
		
		for (int i = 0; i < jumlah; i++){
			
			total = total + mhs[i].ipk;
			
		}
		
		float rataRata = total / jumlah;
		
		cout << "\n===== RATA RATA IPK =====\n";
		cout << "Rata-Rata = "<<rataRata<<endl;
		
		//cari berdasarkan Semester
		int cariSemester;
		
		bool ditemukan = false;
		
		cout << "Masukan Semester yang di cari : ";
		cin >> cariSemester;
		
		cout << "\n===== Data Semester =====\n";
		
		for (int i = 0; i < jumlah; i++){
			if (mhs[i].semester == cariSemester){
				
				cout << "NAMA	: "<< mhs[i].nama << endl;
				cout << "NIM	: "<< mhs[i].nim << endl;
				cout << "IPK 	: "<< mhs[i].ipk << endl;
				ditemukan = true;
			}
		}
		
		if (ditemukan == false){
			
			cout<< "Tidak ada Mahasiswa pada semester tersebut.\n";
		}
		
		return 0;	
}