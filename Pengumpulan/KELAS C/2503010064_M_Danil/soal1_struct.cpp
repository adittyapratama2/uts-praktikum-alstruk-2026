#include<iostream>
#include<iomanip>
using namespace std;

struct mahasiswa{
    string nim, nama;
    int semester;
    float ipk;
};

int main(){

    int jumlah;
    cout<<"Masukan Jumlah Data 1-5: ";
    cin>>jumlah;
    mahasiswa data[5];
    
    for(int i=0; i<jumlah; i++){
        cout<<"Masukan Data ke- "<<i+1<<endl;
        cout<<"Masukan Nim : ";cin>>data[i].nim;
        cout<<"Masukan Nama : ";
        cin.ignore();
        getline(cin,data[i].nama);
        cout<<"Masukan Semester : ";cin>>data[i].semester;
        cout<<"Masukan IPK : ";cin>>data[i].ipk;
    }
    cout<<endl;
    cout << "========================= DATA MAHASISWA =======================" << endl;
    cout << left << setw(5) << "NO"
         << setw(15) << "NIM"
         << setw(15) << "NAMA"
         << setw(12) << "SEMESTER"
         << setw(10) << "IPK" << endl;
    cout << "================================================================" << endl;
    for (int i = 0; i < jumlah; i++){
        cout << left << setw(5) << i + 1
             << setw(15) << data[i].nim
             << setw(15) << data[i].nama
             << setw(12) << data[i].semester
             << setw(10) << data[i].ipk << endl;
    }
    cout << "================================================================" << endl;

    // Menghitung rata-rata
    float rata = 0;
    for (int i = 0; i < jumlah; i++){
        rata += data[i].ipk / jumlah;
    }
    cout << "Rata - rata nilai : " << rata << endl;
    cout << "================================================================" << endl;

    cout<<endl;
   
    //Menampilkan Nilai Tertinggi
    int max = 0;
    for(int i=0; i<jumlah; i++){
        if(data[i].ipk>data[max].ipk){
            max = i;
        }
    }
    cout << "========================= IPK TERTINGGI =========================" << endl;
    cout << left << setw(5) << "NO"
         << setw(15) << "NIM"
         << setw(15) << "NAMA"
         << setw(12) << "SEMESTER"
         << setw(10) << "IPK" << endl;
    cout << "=================================================================" << endl;
    for (int i = 0; i < jumlah; i++){
        if (data[i].ipk == data[max].ipk){
            cout << left << setw(5) << i + 1
                 << setw(15) << data[i].nim
                 << setw(15) << data[i].nama
                 << setw(12) << data[i].semester
                 << setw(10) << data[i].ipk << endl;
        }
    }
    cout << "================================================================" << endl;

    cout<<endl;

    // Mencari data
    int data_cari;
    cout << endl;
    cout << "Masukan Nomor Semester : ";
    cin >> data_cari;
    bool temukan = false;

    // Cek dulu apakah ada data yang cocok
    for (int i = 0; i < jumlah; i++){
        if (data[i].semester == data_cari){
            temukan = true;
            break;
        }
    }

    if (temukan){
        cout << "========================= HASIL PENCARIAN ======================" << endl;
        cout << left << setw(5) << "NO"
             << setw(15) << "NIM"
             << setw(15) << "NAMA"
             << setw(12) << "SEMESTER"
             << setw(10) << "IPK" << endl;
        cout << "================================================================" << endl;
        for (int i = 0; i < jumlah; i++){
            if (data[i].semester == data_cari)
            {
                cout << left << setw(5) << i + 1
                     << setw(15) << data[i].nim
                     << setw(15) << data[i].nama
                     << setw(12) << data[i].semester
                     << setw(10) << data[i].ipk << endl;
            }
        }
        cout << "================================================================" << endl;
    }
    else{
        cout << "Data Tidak Ditemukan" << endl;
    }

    return 0;
}
