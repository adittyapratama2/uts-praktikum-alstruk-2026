#include<iostream>
#include<iomanip>
using namespace std;
// A
struct mahasiswa{
    string nim,nama;
    int semester;
    float ipk;
};
int main(){
    mahasiswa mhs[5];
    int j;
    cout<<"Masukan Jumlah Mahasiswa(1-5):";
    cin>>j;
    for(int i=0; i<j; i++){
        cout<<"Data Mahasiswa Ke-"<<i+1<<endl;
        cout<<"NIM      :";cin>>mhs[i].nim;
        cout<<"Nama     :"; cin.ignore();getline(cin,mhs[i].nama);
        cout<<"Semester :";cin>>mhs[i].semester;
        cout<<"Ipk      :";cin>>mhs[i].ipk;
    }
    cout<<"\nData Mahasiswa\n";
    cout<<"|"
    <<left<<setw(4)<<"no"
    <<"|"<<setw(11)<<"NIM"
    <<"|"<<setw(15)<<"Nama"
    <<"|"<<setw(9)<<"Semester"
    <<"|"<<setw(4)<<"Ipk"
    <<"|"<<endl;
    cout<<"---------------------------------------------------\n";
    
    for(int i=0; i<j; i++){
        cout<<"|"
        <<left<<setw(4)<<i+1
        <<"|"<<setw(11)<<mhs[i].nim
        <<"|"<<setw(15)<<mhs[i].nama
        <<"|"<<setw(9)<<mhs[i].semester
        <<"|"<<setw(4)<<mhs[i].ipk
        <<"|"<<endl;
    }
    // B
    int t=0;
	for(int i=0; i<j; i++){
		if(mhs[i].ipk>mhs[t].ipk){
			t=i;
		}
	}
    cout<<"---------------------------------------------------\n";
    cout<<"\nMahasiswa Dengan IPK Tertinggi:\n";
	cout<<"NIM	:"<<mhs[t].nim<<endl;
	cout<<"Nama	:"<<mhs[t].nama<<endl;
	cout<<"Semester:"<<mhs[t].semester<<endl;
	cout<<"IPK	:"<<mhs[t].ipk<<endl;
    
    cout<<"---------------------------------------------------\n";
    float rata=0;
    for(int i=0; i<j; i++){
        rata+=mhs[i].ipk;
    }
    cout<<"Rata-Rata IPK :"<<(rata/j)<<endl;
    cout<<"---------------------------------------------------\n";
    int cari;
	cout<<"cari semester :";cin>>cari;
     
	bool ditemukan=false;
	for(int i=0; i<j; i++){
		if(mhs[i].semester==cari){
            cout<<"NIM	:"<<mhs[i].nim<<endl;
	        cout<<"Nama	:"<<mhs[i].nama<<endl;
	        cout<<"Semester:"<<mhs[i].semester<<endl;
	        cout<<"IPK	:"<<mhs[i].ipk<<endl;
			ditemukan=true;

		}
	}

	if(!ditemukan)
	cout<<"tidak ada mahasiswa di semester ini";
    cout<<"---------------------------------------------------\n";

    return 0;
}