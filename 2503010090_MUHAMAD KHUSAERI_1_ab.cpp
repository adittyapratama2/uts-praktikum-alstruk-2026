#include<iostream>
#include<iomanip>
using namespace std;

struct Mahasiswa {
    string nim, nama;
    int semester;
    float ipk;
};

void tampilTabel(Mahasiswa data[], int jumlah){
    cout << "\n";
    cout << left
         << setw(4)  << "No"
         << setw(13) << "NIM"
         << setw(17) << "Nama"
         << setw(11) << "Semester"
         << setw(6)  << "IPK" << endl;

    cout << string(4,'-') << "+"
         << string(12,'-') << "+"
         << string(16,'-') << "+"
         << string(10,'-') << "+"
         << string(6,'-') << endl;

    for(int i = 0; i < jumlah; i++){
        cout << left
             << setw(4)  << i+1
             << setw(13) << data[i].nim
             << setw(17) << data[i].nama
             << setw(11) << data[i].semester
             << setw(6)  << fixed << setprecision(2) << data[i].ipk
             << endl;
    }
}

int main(){

    int jumlah;
    cout << "Masukan Jumlah Mahasiswa (1-5): ";
    cin >> jumlah;

    Mahasiswa data[5];

    for(int i = 0; i < jumlah; i++){
        cout << "\nMasukan Data ke-" << i+1 << endl;
        cout << "NIM      : "; cin >> data[i].nim;
        cout << "Nama     : "; cin.ignore(); getline(cin, data[i].nama);
        cout << "Semester : "; cin >> data[i].semester;
        cout << "IPK      : "; cin >> data[i].ipk;
    }

    cout << "\n===== DATA SELURUH MAHASISWA =====";
    tampilTabel(data, jumlah);


    cout << "\n===== IPK TERTINGGI =====\n";
    int max = 0;
    for(int i = 0; i < jumlah; i++){
        if(data[i].ipk > data[max].ipk) max = i;
    }
    cout << left
         << setw(13) << data[max].nim
         << setw(17) << data[max].nama
         << setw(11) << data[max].semester
         << setw(6)  << fixed << setprecision(2) << data[max].ipk
         << endl;

    
    cout << "\n===== RATA-RATA IPK =====\n";
    float total = 0;
    for(int i = 0; i < jumlah; i++) total += data[i].ipk;
    cout << "Rata-rata IPK: " << fixed << setprecision(2) << total/jumlah << endl;

    
    cout << "\n===== CARI BERDASARKAN SEMESTER =====\n";
    int cariSemester;
    cout << "Masukan Semester yang dicari: ";
    cin >> cariSemester;

    bool temukan = false;
    for(int i = 0; i < jumlah; i++){
        if(data[i].semester == cariSemester){
            if(!temukan){
                cout << "Mahasiswa semester " << cariSemester << ":\n";
                tampilTabel(data, 0); 
            }
            cout << left
                 << setw(4)  << i+1
                 << setw(13) << data[i].nim
                 << setw(17) << data[i].nama
                 << setw(11) << data[i].semester
                 << setw(6)  << fixed << setprecision(2) << data[i].ipk
                 << endl;
            temukan = true;
        }
    }
    if(!temukan) cout << "Tidak ada mahasiswa pada semester tersebut.\n";


    return 0;
}
