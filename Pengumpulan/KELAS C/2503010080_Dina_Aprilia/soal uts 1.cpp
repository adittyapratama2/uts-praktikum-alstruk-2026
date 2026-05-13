#include <iostream>
using namespace std;

struct mahasiswa{
	string nim, nama ;
	int semester;
	float ipk;
};

int main(){
	
	mahasiswa maha[5];
	int jumlah;
	
	cout<<"Input jumlah mahasiswa (1-5) : ";
	cin>>jumlah; 
	
	for(int i = 0; i <jumlah; i++){
		cout<<"\nData mahasiswa ke- :"<< i + 1 <<endl;
		
		cout<<"NIM : ";
		cin>>maha[i].nim;
		
		cout<<"Nama : ";
		cin>>maha[i].nama;
		
		cout<<"Semester : ";
		cin>>maha[i].semester;
		
		cout<<"IPK : ";
		cin>>maha[i].ipk;
	}
	
	cout<<"\n======================================================\t"<<endl;
	cout<<"|No|\t|NIM|\t\t|Nama|\t|Semester| \t|IPK| \t "<<endl;
	cout<<"------------------------------------------------------\t"<<endl;
	
	for(int i=0 ; i<jumlah ; i++){
		
		cout<< i + 1 <<" \t" 
			<<maha[i].nim<<" \t "
			<<maha[i].nama<<" \t "
			<<maha[i].semester<< "\t\t "
			<<maha[i].ipk<< " \t "<<endl;
		
	}
	//ipk tertinggi
	int max = 0;
	for(int i=0; i<jumlah; i++){
		if(maha[i].ipk > maha[max].ipk){
			max = i;
		}
		}
		
		cout<<"\nIPK tertinggi : |";
			cout<<"NIM: "<<maha[max].nim<<"|\t|";
			cout<<"Nama: "<<maha[max].nama<<"|\t|";
			cout<<"Semester: "<<maha[max].semester<<"|\t|";
			cout<<"IPK: "<<maha[max].ipk<<"|\t"<<endl;
	
	//rata-rata
	float total = 0;
	float ratarata;
	
	for(int i = 0; i <jumlah ; i++){
		total += maha[i].ipk;
	} if(5 > 0){
		ratarata = total / 5;
		cout<<"Rata-Rata IPK : "<<ratarata<<endl;
	} 
//cari semester
	int carisemester;
	bool ditemukan = false;
	
	cout<<"\nMasukan semester yang ingin dicari : ";
	cin>>carisemester;
	
	cout<<"--------------------------------------------------------"<<endl;
	cout<<"\nData Mahasiswa di semester : " <<carisemester<<endl;
	
	
		for(int i = 0; i <5; i++){
		if(maha[i].semester == carisemester){
			cout<<maha[max].nim<<"|\t|"
				<<maha[max].nama<<"|\t|"
				<<maha[max].ipk<<"|\t"<<endl;
				ditemukan = true;
		}
	}
	if(!ditemukan){
		cout<<"Tidak ada mahasiswa pada semester tersebut"<<endl;
	}

	
	}
