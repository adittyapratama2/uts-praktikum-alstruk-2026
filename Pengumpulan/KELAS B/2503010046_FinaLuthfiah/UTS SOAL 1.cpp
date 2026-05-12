#include<iostream>
#include<iomanip>
using namespace std;

struct Mahasiswa{
	string nim;
	string nama;
	int semester;
	float ipk;
};

int main(){
	
	Mahasiswa mhs[5];
	
	int jumlah;
	float tertinggi;
	float total = 0;
	float rata;
	int cariSemester;
	bool ditemukan = false;
	
	cout << "Masukkan jumlah mahasiswa : ";
	cin >> jumlah;
	
	for(int i = 0; i < jumlah; i++){
		
		cout << "\nData mahasiswa ke-" << i + 1 << endl;
		
		cout << "NIM : ";
		cin >> mhs[i].nim;
		
		cin.ignore();
		
		cout << "Nama : ";
		getline(cin, mhs[i].nama);
		
		cout << "Semester : ";
		cin >> mhs[i].semester;
		
		cout << "IPK : ";
		cin >> mhs[i].ipk;
	}
	
	
	cout << left;
	
	cout << "\n============================================================" << endl;
	cout << "                    DATA MAHASISWA" << endl;
	cout << "============================================================" << endl;
	
	cout << "| "
	     << setw(3)  << "No"
	     << "| "
	     << setw(12) << "NIM"
	     << "| "
	     << setw(18) << "Nama"
	     << "| "
	     << setw(10) << "Semester"
	     << "| "
	     << setw(5)  << "IPK"
	     << "|"      << endl;
	     
	cout << "------------------------------------------------------------" << endl;
	
	for(int i = 0; i < jumlah; i++){
		
		cout << "| "
		     << setw(3)  << i + 1
		     << "| "
		     << setw(12) << mhs[i].nim
		     << "| "
		     << setw(18) << mhs[i].nama
		     << "| "
		     << setw(10) << mhs[i].semester
		     << "| "
		     << setw(5)  << fixed << setprecision(2)
		     << mhs[i].ipk
		     << "|"      << endl;
	}
	
	
	tertinggi = mhs[0].ipk;
	int index = 0;
	
	for(int i = 0; i < jumlah; i++){
		if(mhs[i].ipk > tertinggi){
			
			tertinggi = mhs[i].ipk;
			index = i;
		}
		
		total += mhs[i].ipk;
	}
	
	rata = total / jumlah;
	
	cout << "\nMahasiswa dengan IPK tertinggi"   << endl;
	cout << "NIM      : " << mhs[index].nim      << endl;
	cout << "Nama     : " << mhs[index].nama     << endl;
	cout << "Semester : " << mhs[index].semester << endl;
	cout << "IPK      : " << mhs[index].ipk      << endl;
	
	cout << "\nRata-rata IPK : " << rata << endl;
	
	cout << "\nMasukkan semester yang dicari : ";
	cin >> cariSemester;
	
	cout << "\nData mahasiswa semester "
	     << cariSemester << endl;
	     
	
	for(int i = 0; i < jumlah; i++){	
		if(mhs[i].semester == cariSemester){
			
			cout << mhs[i].nim << " | "
			     << mhs[i].nama << " | "
			     << mhs[i].ipk << endl;
			     
			ditemukan = true;
		}
	}
	
	    if(ditemukan == false){
		cout << "Tidak ada mahasiswa pada semester tersebut." << endl;
	}
	
	return 0;
}
