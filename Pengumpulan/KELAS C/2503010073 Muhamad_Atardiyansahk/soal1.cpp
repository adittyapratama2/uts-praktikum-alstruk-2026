#include <iostream>
#include <iomanip>
using namespace std; 

struct buku{
    string judul,pengarang;
    int tahun;
    float harga;
};
int main () {
    buku bk[5];
    int j;
    cout << "Masukan jumlah buku(1-5)";
    cin >> j;
    for(int i=0; i <j; i++) {
        cout <<"Data buku ke-" << i + 1 << endl;
        cout << "Judul  :"; cin.ignore();getline (cin,bk[i].judul);
        cout << "Pengarang  :"; cin.ignore(); getline (cin,bk[i].pengarang);
        cout << "Tahun  :"; cin >> bk[i].tahun;
        cout <<"Harga   :"; cin >> bk[i].harga;
   }

   cout <<"\nData Buku\n";
   cout <<"|"
   <<left<<setw(4) <<"No"
   <<"|" << setw(10) <<"Judul"
   <<"|" <<setw(10) <<"Pengarang"
   <<"|" <<setw(7) <<"Tahun"
   <<"|" <<setw(10) <<"Harga"
   <<"|" << endl;
   cout << "----------------------------------------------------\n";

   for(int i=0; i<j; i++) {
    cout <<"|"
    <<left <<"|" <<setw(4) << i+1
    <<"|" <<setw(10) <<bk[i].judul
    <<"|" <<setw(10) <<bk[i].pengarang
    <<"|" <<setw(7) <<bk[i].tahun
    <<"|" <<setw(10) <<bk[i].harga
    << endl; 
   }

   //B
   int t=0;
   for(int i=0; i<j; i++) {
    if(bk[i].harga>bk[t].harga) {
        t=i;
    }
   }

    cout << "Buku Dengan Harga Tertinggi:\n";\
    cout <<"Judul    :"<<bk[t].judul << endl;
    cout <<"Pengarang    :"<<bk[t].pengarang << endl;
    cout <<"Tahun    :"<<bk[t].tahun << endl;
    cout <<"Harga    :"<<bk[t].harga << endl;

    cout <<"-------------------------------------------------------------\n";
    float rata=0;
    for(int i=0; i<j; i++) {
        rata+=bk[i].harga;
    }

    cout << "Rata-Rata Harga :" <<(rata/j) << endl;
    cout <<"----------------------------------------------------------------\n";
    int cari;
    cout << "Tahun :"; cin >> cari;
    cout <<"-----------------------------------------------------------------\n";
    bool ditemukan=false;
    for(int i=0; i<j; i++) {
        if(bk[i].tahun==cari){
            cout << "Judul :" <<bk[i].judul <<endl;
            cout << "Pengarang :" <<bk[i].pengarang <<endl;
            cout << "Tahun :" <<bk[i].tahun <<endl;
            cout << "Harga :" <<bk[i].harga <<endl;
            ditemukan=true;

        } 
    }
    if(!ditemukan)
    cout << "Tidak ada buku yang terbit pada tahun tersebut.";
 
}