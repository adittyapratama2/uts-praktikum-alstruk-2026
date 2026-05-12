#include<iostream>
using namespace std;

struct mahasiswa{
    string nim, nama;
    float ipk;
    int semester;
};
int main(){
    mahasiswa mhs[5];
    int batas;
    cout<< "Masukan jumlah mahasiswa 1-5: ";
    cin>>batas;

    for(int i=0;i<batas;i++){
        cout<<"Data ke-: "<<i+1<<endl;
        cout<<"Masukan NIM: ";
        cin>>mhs[i].nim;
        cout<<"Masukan Nama: ";
        cin>>mhs[i].nama;
        cout<<"Masukan Semester: ";
        cin>>mhs[i].semester;
        cout<<"Masukan IPK: ";
        cin>>mhs[i].ipk;
    }
    
    //munculkan tabel
    cout<<"========================================="<<endl;
    cout<<"NIM \t"<<"Nama \t"<<"Semester \t"<<"IPK \t"<<endl;
    cout<<"========================================="<<endl;
    for(int i=0;i<batas;i++){
        cout<<mhs[i].nim<<"\t";
        cout<<mhs[i].nama<<"\t";
        cout<<mhs[i].semester<<"\t";
        cout<<mhs[i].ipk<<"\t"<<endl;
    }

    //cari IPK tertinggi
    int max= 0;
    for(int i=0; i<5;i++){
        if(mhs[i].ipk>mhs[max].ipk){
            max=i;
        }
    }
    cout<<"========================================="<<endl;
    cout<<"IPK tertinggi: "<<endl;
    cout<<mhs[max].nama<<"\t";
    cout<<mhs[max].nim<<"\t";
    cout<<mhs[max].semester<<"\t";
    cout<<mhs[max].ipk<<"\t"<<endl;

    //cari rata-rata 
    float total=0;
    for(int i=0;i<5;i++){
       total+=mhs[i].ipk;
    }
    cout<<"========================================="<<endl;
    cout<<"Jumlah total IPK mahasiswa: "<<total<<endl;
    float rata=0;
    for(int i=0;i<5;i++){
       rata+=mhs[i].ipk;
    }
    cout<<"========================================="<<endl;
    cout<<"Rata-rata total IPK mahasiswa: "<<total/5<<endl;

    //tampilkan semua mahasiswa yg berada pd semester itu
    cout<<"========================================="<<endl;
    int cari;
    cout<<"Cari semester = ";
    cin>>cari;
                                 
    bool ditemukan = false;
    for(int i=0; i<5; i++){
        if(mhs[i].semester == cari){
            cout<<mhs[i].nama<<"\t";
            cout<<mhs[i].nim<<"\t";
            cout<<mhs[i].semester<<"\t";
            cout<<mhs[i].ipk<<"\t"<<endl;
            ditemukan = true;
        }
    }
    if(!ditemukan)
    cout<<"tidak ditemukan!";
}