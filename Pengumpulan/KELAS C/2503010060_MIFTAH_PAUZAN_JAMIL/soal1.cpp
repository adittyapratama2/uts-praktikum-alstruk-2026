#include <iostream>
using namespace std;

struct mahasiswa{
	string nim,nama,semester;
	float ipk;
};

int main(){
	int a;
	mahasiswa mhs[5];
	cout<<"masukan jumlah mahasiswa (1-5) = ";
	cin>>a;
	
	for(int i = 0; i<a; i++ ){
		cout<<"data ke - "<<i+1<<endl;
		
		cout<<"nim = ";
		cin>>mhs[i].nim;

		cout<<"nama = ";
		cin>>mhs[i].nama;

		cout<<"semester = ";
		cin>>mhs[i].semester;

		cout<<"ipk = ";
		cin>>mhs[i].ipk;
	}
	
	cout<<"nim \t |"<<"nama \t \t |"<<"semester \t|"<<"nilai \t |"<<endl;
	cout<<"-------------------------------------------------"<<endl;
	for(int i=0; i<a; i++){
		cout<<mhs[i].nim<<"\t |";
		cout<<mhs[i].nama<<"\t |";
		cout<<mhs[i].semester<<"\t \t|";
		cout<<mhs[i].ipk<<"\t |"<<endl;		
	}

	int tinggi=0;
	int rendah=0;
	for(int i=0; i<a; i++){
		if(mhs[i].ipk > mhs[tinggi].ipk){
			tinggi=i;
		}
	}
	
	cout<<"nilai tertinggi "<<mhs[tinggi].ipk;
	
	float rata=0;
	for(int i=0; i<a; i++){
		rata+=mhs[i].ipk;
	}
	cout<<"rata rata ipk = "<<(rata/a)<<endl;
	
	string cari;
	cout<<"cari semeseter = ";
	cin>>cari;
	
	cout<<"data semseter "<<cari<<endl;
	cout<<"nim \t |"<<"nama \t \t |"<<"semester \t|"<<"nilai \t |"<<endl;
	cout<<"-------------------------------------------------"<<endl;
	
	bool nemu=false;
	for(int i= 0; i<a; i++){
		if(mhs[i].semester == cari){

			cout<<mhs[i].nim<<"\t |";
			cout<<mhs[i].nama<<"\t |";
			cout<<mhs[i].semester<<"\t \t|";
			cout<<mhs[i].ipk<<"\t |"<<endl;	
			nemu=true;	
		}
	}
	if(!nemu)
	cout<<"Tida ada mahasiswa di semester tersebut";
}