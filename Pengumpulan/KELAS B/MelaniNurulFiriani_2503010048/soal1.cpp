#include <iostream>
#include <string>
#include <vector>
#include <iomanip>
using namespace std;

struct Mahasiswa{
	string nim;
	string nama;
	int semester;
	float IPK;
};

int main(){
	Mahasiswa mhs[5];
	int n;
	cout << "--- INPUT DATA MAHASISWA ---" << endl;
	cout << "Masukan jumlah Mahasiswa(1-5): ";
	cin >> n;
	
	for(int i=0; i<n; i++){
		cout << "\nData mahasiswa ke- " << i+1 << endl;
		cout << "NIM  : "; cin >> mhs[i].nim;
		cin.ignore();
		cout << "Nama  : "; getline(cin, mhs[i].nama);
		cout << "Semester  : "; cin >> mhs[i].semester;
		cout << "IPK  : "; cin >> mhs[i].IPK;
	}
	
	cout << "\n----------------------------------------------------------------" << endl;
	cout << left << setw(4) << "No" << " | " << setw(10) << "NIM" << " | " << setw(15) << "Nama" << " | " << setw(8) << "Semester" << " | " << "IPK" << endl;
	cout << "------------------------------------------------------------------" << endl;
	
	for(int i=0; i<n; i++){
		cout << left << setw(4) << i+1 << " | " << setw(10) << mhs[i].nim << " | " << setw(15) << mhs[i].nama << " | " << setw(8) << mhs[i].semester << " | " << mhs[i].IPK << endl;
	}
	cout << "------------------------------------------------------------------" << endl;
	
	float totalIpk = 0;
	int indeksTertinggi = 0;
	for(int i=0; i<n; i++){
		if(mhs[i].IPK > mhs[indeksTertinggi].IPK){
			indeksTertinggi = i;
		}
	}
	cout << "\nMahasiswa dengan IPK Tertinggi: " << mhs[indeksTertinggi].nama << " (" << mhs[indeksTertinggi].IPK << ") " << endl;
	
	float rataRata = totalIpk / n;
	cout << "Rata-rata IPK: " << fixed << setprecision(2) << totalIpk << endl;
	
	int cariSem;
	cout << "\nCari mahasiswa di semester:";
	cin >> cariSem;
	bool ketemu = false;
	for(int i=0; i<n; i++){
		if(mhs[i].semester == cariSem){
			cout << "-" << mhs[i].nama << " (" << mhs[i].nim << ") " << endl;
			ketemu = true;
		}
	}
	if(!ketemu){
		cout << "Tidak aa mahasiswa pada semester tersebut." << endl;
	}
	return 0;
}
