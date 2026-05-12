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

    Mahasiswa mahasiswa[5];
    int n;

    do{
        cout << "Masukkan jumlah mahasiswa (1-5): ";
        cin >> n;
    }while(n < 1 || n > 5);

    cin.ignore();

    for(int i = 0; i < n; i++){

        cout << "\nData Mahasiswa ke-" << i + 1 << endl;
        cout << "NIM       : ";
        getline(cin, mahasiswa[i].nim);
        cout << "Nama      : ";
        getline(cin, mahasiswa[i].nama);
        cout << "Semester  : ";
        cin >> mahasiswa[i].semester;
        cout << "IPK       : ";
        cin >> mahasiswa[i].ipk;
        cin.ignore();
    }

    cout << "\n================ DATA MAHASISWA ================\n";

    cout << left
         << setw(5)  << "No"
         << setw(15) << "NIM"
         << setw(25) << "Nama"
         << setw(12) << "Semester"
         << setw(10) << "IPK" << endl;

    for(int i = 0; i < n; i++){

        cout << left
             << setw(5)  << i + 1
             << setw(15) << mahasiswa[i].nim
             << setw(25) << mahasiswa[i].nama
             << setw(12) << mahasiswa[i].semester
             << setw(10) << fixed << setprecision(2)
             << mahasiswa[i].ipk << endl;
    }

    int idxMax = 0;

    for(int i = 1; i < n; i++){

        if(mahasiswa[i].ipk > mahasiswa[idxMax].ipk){
            idxMax = i;
        }
    }

    cout << "\nMahasiswa dengan IPK tertinggi:\n";
    cout << "NIM       : " << mahasiswa[idxMax].nim << endl;
    cout << "Nama      : " << mahasiswa[idxMax].nama << endl;
    cout << "Semester  : " << mahasiswa[idxMax].semester << endl;
    cout << "IPK       : " << mahasiswa[idxMax].ipk << endl;

    float total = 0;

    for(int i = 0; i < n; i++){
        total += mahasiswa[i].ipk;
    }

    cout << "\nRata-rata IPK : "
         << total / n << endl;
         
    int cariSemester;
    bool ditemukan = false;
    
    cout << "\nMasukkan semester yang dicari : ";
    cin >> cariSemester;
    cout << "\nMahasiswa semester "
         << cariSemester << ":\n";

    for(int i = 0; i < n; i++){

        if(mahasiswa[i].semester == cariSemester){

            cout << mahasiswa[i].nama
                 << " | IPK : "
                 << mahasiswa[i].ipk << endl;

            ditemukan = true;
        }
    }

    if(!ditemukan){
        cout << "Tidak ada mahasiswa pada semester tersebut.\n";
    }

    return 0;
}
