#include <iostream>
using namespace std;

struct toko_buku{
    string judul,pengarang;
    int tahun_terbit;
    float harga;
};
int main(){
    int jumlah;
    cout << "masukan 1-5 : ";
    cin >> jumlah;

    toko_buku buku[5];

    for(int i=0; i<jumlah; i++){
        cout << "data buku ke-"<< i+1 << endl;
        cout << "judul = "; cin >> buku[i].judul;
        cout << "pengarang = "; cin >> buku[i].pengarang;
        cout << "tahun terbit = "; cin >> buku[i].tahun_terbit;
        cout << "harga = "; cin >> buku[i].harga;
    }
    cout << "judul\t" << "\tpengarang\t" << "tahun terbit\t" << "harga\t" << endl;
    for(int i=0; i<jumlah; i++){
        cout << buku[i].judul << "\t";
        cout << buku[i].pengarang << "\t";
        cout << buku[i].tahun_terbit << "\t";
        cout << buku[i].harga << "\t" << endl;

        }

        int tinggi=0;
        for(int i=0; i<jumlah; i++){
            if(buku[i].harga>buku[tinggi].harga){
                tinggi=i;
            }
        }  
        cout << "buku dengan harga tertinggi : "<< buku[tinggi].harga << endl;

        int rata=0;
        for(int i=0; i<jumlah; i++){
            rata+=buku[i].harga;
        }

        cout << "rata rata harga buku : " << rata << endl;

        int cari;
        cout << "masukan tahun  : ";
        cin >> cari;
        bool temukan=false;
        for(int i=0; i<jumlah; i++){
            if(buku[i].tahun_terbit ==cari){
                cout << buku [i].judul << "\t";
                cout << buku [i].pengarang << "\t";
                cout << buku [i].tahun_terbit << "\t";
                cout << buku [i].harga << "\t";
                temukan = true;
            }
        }

        if(!temukan)
        cout << "tidak ada buku yang terbit pada tahun tersebut : ";

}
