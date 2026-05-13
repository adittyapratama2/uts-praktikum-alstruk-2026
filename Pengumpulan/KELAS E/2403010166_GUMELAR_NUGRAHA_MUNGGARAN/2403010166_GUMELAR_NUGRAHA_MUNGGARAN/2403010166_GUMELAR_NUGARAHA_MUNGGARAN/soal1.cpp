#include <iostream>
#include <iomanip>
using namespace std;

struct Mahasiswa{
    string nim;
    string nama;
    int semester;
    float ipk;
};

int main(){
    Mahasiswa data[5];
    int n;

    cout<<"Masukkan jumlah mahasiswa (1-5): ";
    cin>>n;

    if(n<1 || n>5){
        cout<<"Jumlah tidak valid!\n";
        return 0;
    }

    for(int i=0; i<n; i++){
        cout<<"\nData Mahasiswa ke-"<<i+1<<endl;
        cout<<"NIM: ";
        cin>>data[i].nim;
        cout<<"Nama: ";
        cin.ignore();
        getline(cin, data[i].nama);
        cout<<"Semester: ";
        cin>>data[i].semester;
        cout<<"IPK: ";
        cin>>data[i].ipk;
    }

    cout<<"\nNo | NIM | Nama | Semester | IPK\n";
    cout<<"---|------------|----------------|----------|------\n";
    for(int i=0; i<n; i++){
        cout<<setw(2)<<i+1<<" | ";
        cout<<setw(10)<<left<<data[i].nim<<" | ";
        cout<<setw(14)<<left<<data[i].nama<<" | ";
        cout<<setw(8)<<right<<data[i].semester<<" | ";
        cout<<fixed<<setprecision(2)<<data[i].ipk<<endl;
    }

    int idx=0;
    for(int i=1; i<n; i++){
        if(data[i].ipk > data[idx].ipk) idx=i;
    }
    cout<<"\n=== IPK TERTINGGI ===\n";
    cout<<"NIM: "<<data[idx].nim<<endl;
    cout<<"Nama: "<<data[idx].nama<<endl;
    cout<<"Semester: "<<data[idx].semester<<endl;
    cout<<"IPK: "<<data[idx].ipk<<endl;

    float total=0;
    for(int i=0; i<n; i++) total+=data[i].ipk;
    cout<<"\nRata-rata IPK: "<<fixed<<setprecision(2)<<total/n<<endl;

    int cari, ketemu=0;
    cout<<"\nMasukkan nomor semester: ";
    cin>>cari;
    cout<<"Mahasiswa pada semester "<<cari<<":\n";
    for(int i=0; i<n; i++){
        if(data[i].semester == cari){
            cout<<"- "<<data[i].nama<<" | "<<data[i].nim<<" | "<<data[i].ipk<<endl;
            ketemu=1;
        }
    }
    if(ketemu==0) cout<<"Tidak ada mahasiswa pada semester tersebut.\n";

    return 0;
}
