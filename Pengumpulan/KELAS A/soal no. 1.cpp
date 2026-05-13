#include<iostream>
#include<string>
#include<iomanip>
using namespace std;

int main(){
// buat deklarasi struct 
    struct buku{
    string judul,pengarang;
    int tahunterbit;
    float harga;
    };

    int pilihan;
    int n = 0;
    bool menu = true;
    buku data[5];

    while(menu){
        cout << "1.input data buku\n";
        cout << "2.tampilkan data buku\n";
        cout << "3.tampilkan harga buku tertinggi\n";
        cout << "4.tampilkan rata-rata harga buku\n";
        cout << "5.tampilkan tahun terbit\n";
        cout << "6.keluar\n";

        cout << "pilih menu (1-6) : ";
        cin >> pilihan;

        switch(pilihan){
        
		//masukan data buku	
        case 1 :
            cout << "Masukan Jumlah buku (1-5) : ";
            cin >> n;

            if(n < 1 || n > 5){
                cout << "Angka yang kamu masukan tidak valid!\n\n";
                break;
            }

            for(int i = 0; i < n ; i++){
                cout << "data buku ke " << i+1 << endl ;

                cout << "masukan judul buku: ";
                cin >> data[i].judul;

                cout << "masukan nama pengarang: ";
                cin.ignore();
                getline(cin, data[i].pengarang);

                cout << "masukan tahun terbit: ";
                cin >> data[i].tahunterbit;

                cout << "masukan harga: ";
                cin >> data[i].harga;

                cout << "data berhasil disimpan!\n\n";
            }
            break;
           //tampilkan data buku 
        case 2 :
            if(data[0].judul == ""){
                cout << "data kosong!"<<endl;;
                break;
            }else{
                cout <<"\n"<< string(65,'=')<<endl;
                cout << "| " << left << setw(4)  << "NO"
                     << "| " << left << setw(12) << "JUDUL"
                     << "| " << left << setw(18) << "PENGARANG"
                     << "| " << left << setw(12)  << "TAHUN TERBIT"
                     << "| " << left << setw(6)  << "HARGA" << " | " << endl;
                cout <<"\n"<< string(65,'-')<<endl;

                for(int i = 0; i < n; i++){
                    cout << "| " << left << setw(4) << i + 1
                         << "| " << left << setw(12) << data[i].judul
                         << "| " << left << setw(18) << data[i].pengarang
                         << "| " << left << setw(12)  << data[i].tahunterbit
                         << "| " << left << setw(6)  << fixed << setprecision(1) << data[i].harga << " | " << endl;
                }
                cout << "\n"<< string(65,'=')<<endl;
            }
            break;
           
		   //cari harga tertinggi 
        case 3 : {
            if(data[0].judul == ""){
                cout << "data kosong!"<<endl;
                break;
            }else{
                int hargaTertinggi = 0;
                for(int i = 0; i < n; i++){
                if(data[i].harga > data[hargaTertinggi].harga){
                    hargaTertinggi = i;
                    }
                }
                cout << "buku dengan harga tertinggi\n";
                cout << "judul  : " << data[hargaTertinggi].judul << endl;
                cout << "harga : " << data[hargaTertinggi].harga << "\n\n";
            }
            break;
        }
        
        //cari rata rata harga semua buku
        case 4 : {
            if(data[0].judul == ""){
                cout << "data kosong!"<<endl;
                break;
            }else{
                float totalharga = 0;
                for(int i = 0; i < n; i++){
                totalharga += data[i].harga;
                }
                float ratarataharga = totalharga / n;
                cout << "Rata-Rata Harga Buku\n";
                cout << "rata rata : " << ratarataharga<< "\n\n";
            }
            break;
        }
        //cari tahun terbit 
        case 5 : {
            if(data[0].judul == ""){
                cout << "data kosong!"<<endl;
                break;
            }else{
                int caribuku;
                bool ditemukan  = false;

                cout << "input tahun terbit : ";
                cin >> caribuku;
                
			//tampilkan data buku
                for(int i = 0; i < n; i++){
                    if(data[i].tahunterbit == caribuku){
                    cout << "judul  : " << data[i].judul << endl;
                    cout << "pengarang : " << data[i].pengarang << endl;
                    cout << "tahun terbit : " << data[i].tahunterbit << endl;
                    cout << "harga : " << data[i].harga << endl;
                    ditemukan = true;
                    }
                }

                if(!ditemukan){
                cout << "tidak ada buku yang terbit pada tahun tersebut/n/n";
                }
            }
            break;
        }
        case 6 :
            cout << "sampai jumpa!\n\n";
            menu = false;
            break;
        default :
            cout << "pilihan anda tidak valid!\n\n";
            break;
        }
    }
    
return 0;
}
