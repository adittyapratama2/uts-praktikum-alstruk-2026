#include <iostream>
#include <iomanip>

using namespace std;

struct mahasiswa {
	string nim;
	string nama;
	int semester;
	float ipk;
};

int main(){
	mahasiswa mhs[5];
	int n,i, maxIndex = 0, cariSemester;
	float total=0;
	bool ditemukan;
	
	cout<<"Masukkan jumlah mahasiswa (1-5) : ";
	cin>>n;
	
	if(n < 1 || n > 5){
		cout<<"Jumlah mahasiswa tidak valid";
		return 0;
	}
	
	for(i=0; i<n; i++){
		cout<<"\n========== Data Mahasiswa Ke-"<<i+1<<" ==========\n";
		cout<<"Masukkan NIM : ";
		cin>>mhs[i].nim;
		cout<<"Masukkan Nama : ";
		cin>>mhs[i].nama;
		cout<<"Masukkan Semester : ";
		cin>>mhs[i].semester;
		cout<<"Masukkan IPK : ";
		cin>>mhs[i].ipk;
	}
	
	cout << "\n                     DAFTAR DATA MAHASISWA                                ";
	cout << "\n==========================================================================\n";
    cout << left
    	 << setw(0)		<< "|"
         << setw(5)  	<< "No"
         << setw(2)	 	<< "|"
         << setw(15) 	<< "NIM"
         << setw(2) 	<< "|"
         << setw(25) 	<< "Nama"
         << setw(2)		<< "|"
         << setw(12) 	<< "Semester"
         << setw(2)		<< "|"
         << setw(7)  	<< "IPK"
		 << setw(0)		<< "|" << endl;

    cout << "==========================================================================\n";

    for(i = 0; i < n; i++) {
        cout << left
        	 << setw(0)		<< "|"
             << setw(5)  	<< i + 1
             << setw(2)		<< "|"
             << setw(15) 	<< mhs[i].nim
             << setw(2)		<< "|"
             << setw(25) 	<< mhs[i].nama
             << setw(2)		<< "|"
             << setw(12) 	<< mhs[i].semester
             << setw(2)		<< "|"
             << setw(7)     << mhs[i].ipk
			 << setw(0)		<< "|" << endl;
		cout<< "==========================================================================\n";
    }
    
    for(i=0; i<n; i++){
		total+=mhs[i].ipk;
		if(mhs[i].ipk > mhs[maxIndex].ipk){
			maxIndex=i;
		}
	}
	
	cout << "\n                     Mahasiswa dengan IPK Tertinggi                       ";
	cout << "\n==========================================================================\n";
	cout << left
    	 << setw(0)		<< "|"
         << setw(5)  	<< "No"
         << setw(2)	 	<< "|"
         << setw(15) 	<< "NIM"
         << setw(2) 	<< "|"
         << setw(25) 	<< "Nama"
         << setw(2)		<< "|"
         << setw(12) 	<< "Semester"
         << setw(2)		<< "|"
         << setw(7)  	<< "IPK"
		 << setw(0)		<< "|" << endl;

    cout << "==========================================================================\n";
    cout << left
         << setw(0)		<< "|"
         << setw(5)  	<< "1"
         << setw(2)		<< "|"
         << setw(15) 	<< mhs[maxIndex].nim
         << setw(2)		<< "|"
         << setw(25) 	<< mhs[maxIndex].nama
         << setw(2)		<< "|"
         << setw(12) 	<< mhs[maxIndex].semester
         << setw(2)		<< "|"
         << setw(7)     << mhs[maxIndex].ipk
		 << setw(0)		<< "|" << endl;
	cout << "==========================================================================\n";
	
	float rata=total/n;
	cout << "\n                     RATA-RATA IPK SELURUH MAHASISWA                        ";
	cout << "\n==========================================================================\n";
    cout << left
    	 << setw(0)		<< "|"
         << setw(5)  	<< "No"
         << setw(2)	 	<< "|"
         << setw(15) 	<< "NIM"
         << setw(2) 	<< "|"
         << setw(25) 	<< "Nama"
         << setw(2)		<< "|"
         << setw(12) 	<< "Semester"
         << setw(2)		<< "|"
         << setw(7)  	<< "IPK"
		 << setw(0)		<< "|" << endl;

    cout << "==========================================================================\n";

    for(i = 0; i < n; i++) {
        cout << left
        	 << setw(0)		<< "|"
             << setw(5)  	<< i + 1
             << setw(2)		<< "|"
             << setw(15) 	<< mhs[i].nim
             << setw(2)		<< "|"
             << setw(25) 	<< mhs[i].nama
             << setw(2)		<< "|"
             << setw(12) 	<< mhs[i].semester
             << setw(2)		<< "|"
             << setw(7)     << mhs[i].ipk
			 << setw(0)		<< "|" << endl;
		cout << "==========================================================================\n";
    }
    cout << left 
		 << setw(51) 	<< "|"
		 << setw(2)		<< "Rata-rata IPK"
		 << setw(2)		<< "|"
		 << setw(7)		<< rata
		 << setw(0)		<< "|" << endl;
	cout << "==========================================================================\n";
	
	cout<<"\nMasukkan nomor Semester yang ingin dicari : ";
	cin>>cariSemester;
	
	cout << "\n                     MAHASISWA DI SEMESTER "<<cariSemester<<"                        ";
	cout << "\n==========================================================================\n";
    cout << left
    	 << setw(0)		<< "|"
         << setw(5)  	<< "No"
         << setw(2)	 	<< "|"
         << setw(15) 	<< "NIM"
         << setw(2) 	<< "|"
         << setw(25) 	<< "Nama"
         << setw(2)		<< "|"
         << setw(12) 	<< "Semester"
         << setw(2)		<< "|"
         << setw(7)  	<< "IPK"
		 << setw(0)		<< "|" << endl;

    cout << "==========================================================================\n";

    for(i = 0; i < n; i++) {
    	if(mhs[i].semester == cariSemester){
			cout << left
        	 	 << setw(0)		<< "|"
             	 << setw(5)  	<< i + 1
             	 << setw(2)		<< "|"
             	 << setw(15) 	<< mhs[i].nim
             	 << setw(2)		<< "|"
             	 << setw(25) 	<< mhs[i].nama
             	 << setw(2)		<< "|"
             	 << setw(12) 	<< mhs[i].semester
             	 << setw(2)		<< "|"
             	 << setw(7)     << mhs[i].ipk
			 	 << setw(0)		<< "|" << endl;
			cout << "==========================================================================\n";
			ditemukan=true;
		}
    }
    if(!ditemukan){
		cout<<"               Tidak ada mahasiswa pada semester tersebut!";
		cout << "\n==========================================================================\n";
	}
	
	return 0;
}
