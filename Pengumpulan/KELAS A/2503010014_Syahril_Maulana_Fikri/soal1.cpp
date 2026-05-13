#include<iostream>
#include<string>
#include<iomanip>
using namespace std;

int main(){

    struct mahasiswa{
    string nim,nama;
    int semester;
    float ipk;
    };

    int pilihan;
    int n = 0;
    bool menu = true;
    mahasiswa data[5];

    while(menu){
        cout << "1.input data mahasiswa\n";
        cout << "2.tampilkan data mahasiswa\n";
        cout << "3.tampilkan IPK mahasiswa tertinggi\n";
        cout << "4.tampilkan rata-rata IPK seluruh mahasiswa\n";
        cout << "5.lihat semester mahasiswa\n";
        cout << "6.keluar\n";

        cout << "pilih menu (1-6) : ";
        cin >> pilihan;

        switch(pilihan){
        case 1 :
            do{
                cout << "Masukan Jumlah Mahasiswa (1-5) : ";
                cin >> n;

                if(n < 1 || n > 5){
                    cout << "Angka yang kamu masukan tidak valid!\n\n";
                }
            }while(n < 1 || n > 5);

            for(int i = 0; i < n ; i++){
                cout << "data mahasiswa ke " << i+1 << endl ;

                cout << "masukan nim mahasiswa   : ";
                cin >> data[i].nim;

                cout << "masukan nama mahasiswa  : ";
                cin.ignore();
                getline(cin, data[i].nama);

                cout << "masukan semester mahasiswa : ";
                cin >> data[i].semester;

                cout << "masukan IPK mahasiswa : ";
                cin >> data[i].ipk;

                cout << "data berhasil disimpan!\n\n";
            }
            break;
        case 2 :
            if(n == 0){
                cout << "wah, data masih kosong! input dulu di menu 1 ya!\n\n";
                break;
            }else{
                cout << "DAFTAR DATA MAHASISWA\n";
                cout << string(62, '=') << endl;
                cout << "| " << left << setw(4)  << "NO"
                     << "| " << left << setw(12) << "NIM"
                     << "| " << left << setw(18) << "NAMA"
                     << "| " << left << setw(10) << "SEMESTER"
                     << "| " << left << setw(6)  << "IPK" << " |" << endl;
                cout << string(62, '=') << endl;

                for(int i = 0; i < n; i++){
                    cout << "| " << left << setw(4) << i + 1
                         << "| " << left << setw(12) << data[i].nim
                         << "| " << left << setw(18) << data[i].nama
                         << "| " << left << setw(10) << data[i].semester
                         << "| " << left << setw(6)  << fixed << setprecision(1) << data[i].ipk << " |" << endl;
                }
                cout << string(62, '=') << "\n\n";
            }
            break;
        case 3 : {
            if(n == 0){
                cout << "wah, data masih kosong! input dulu di menu 1 ya!\n\n";
                break;
            }else{
                int ipkTertinggi = 0;
                for(int i = 0; i < n; i++){
                if(data[i].ipk > data[ipkTertinggi].ipk){
                    ipkTertinggi = i;
                    }
                }
                cout << "mahasiswa dengan IPK tertinggi\n";
                cout << "nim      : " << data[ipkTertinggi].nim << endl;
                cout << "nama     : " << data[ipkTertinggi].nama << endl;
                cout << "semester : " << data[ipkTertinggi].semester << endl;
                cout << "nilai    : " << data[ipkTertinggi].ipk << "\n\n";
            }
            break;
        }
        case 4 : {
            if(n == 0){
                cout << "wah, datanya masih kosong! input dulu di menu 1 ya!\n\n";
                break;
            }else{
                float totalIpk = 0;
                for(int i = 0; i < n; i++){
                totalIpk += data[i].ipk;
                }
                float rataRataIpk = totalIpk / n;
                cout << "Rata-Rata IPK mahasiswa\n";
                cout << "rata rata IPK Mahasiswa : " << rataRataIpk << "\n\n";
            }
            break;
        }
        case 5 : {
            if(n == 0){
                cout << "wah, datanya masih kosong! input dulu di menu 1 ya!\n\n";
                break;
            }else{
                int cariSemester;
                bool ditemukan  = false;

                cout << "input Semester : ";
                cin >> cariSemester;

                for(int i = 0; i < n; i++){
                    if(data[i].semester == cariSemester){
                    cout << "nim      : " << data[i].nim << endl;
                    cout << "nama     : " << data[i].nama << endl;
                    cout << "Semester : " << data[i].semester << endl;
                    cout << "IPK      : " << data[i].ipk << "\n\n";
                    ditemukan = true;
                    }
                }

                if(!ditemukan){
                cout << "tidak ada data mahasiswa pada semester tersebut\n\n";
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


