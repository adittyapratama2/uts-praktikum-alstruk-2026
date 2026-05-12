#include <iostream>
#include <string>

using namespace std;

struct Mahasiswa {
    string nim;
    string nama;
    int semester;
    float ipk;
};

int main() {
    
    Mahasiswa mhs[5];
    int jumlah;

    
    cout << "Masukkan jumlah mahasiswa (1-5): ";
    cin >> jumlah;

    
    for (int i = 0; i < jumlah; i++) {
        cout << "\nData Mahasiswa ke-" << i + 1 << endl;
		cout << "NIM      : "; 
		cin >> mhs[i].nim;
        cout << "Nama     : "; 
		cin >> mhs[i].nama; 
        cout << "Semester : "; 
		cin >> mhs[i].semester;    
        cout << "IPK      : "; 
		cin >> mhs[i].ipk;
    }

    cout << "\nNo | NIM        | Nama           | Semester | IPK" << endl;
    cout << "---|------------|----------------|----------|------" << endl;
    for (int i = 0; i < jumlah; i++) {
        cout << i + 1 << "  | " 
             << mhs[i].nim << " 	| " 
             << mhs[i].nama << "   	  	 | " 
             << mhs[i].semester << "	    | " 
             << mhs[i].ipk << endl;
    }
 
    
    float totalIpk = 0;
    float ipkTertinggi = mhs[0].ipk;
    int indexTertinggi = 0;

    for (int i = 0; i < jumlah; i++) {
        totalIpk = totalIpk + mhs[i].ipk; 

        if (mhs[i].ipk > ipkTertinggi) {
            ipkTertinggi = mhs[i].ipk;
            indexTertinggi = i;
        }
    }

    cout << "\n--- Statistik Data ---" << endl;
    
    cout << "Mahasiswa dengan IPK Tertinggi:" << endl;
    cout << "NIM      : " << mhs[indexTertinggi].nim << endl;
    cout << "Nama     : " << mhs[indexTertinggi].nama << endl;
    cout << "Semester : " << mhs[indexTertinggi].semester << endl;
    cout << "IPK      : " << mhs[indexTertinggi].ipk << endl;
    
    cout << "\nRata-rata IPK Seluruh Mahasiswa: " << totalIpk / jumlah << endl;

    
    int cariSemester;
    cout << "\nMasukkan nomor semester yang ingin dicari: ";
    cin >> cariSemester;

    int ditemukan = 0;
    cout << "Daftar mahasiswa semester " << cariSemester << ":" << endl;
    for (int i = 0; i < jumlah; i++) {
        if (mhs[i].semester == cariSemester) {
            cout << "- " << mhs[i].nama << " (NIM: " << mhs[i].nim << ")" << endl;
            ditemukan = 1;
        }
    }

    if (ditemukan == 0) {
        cout << "Tidak ada mahasiswa pada semester tersebut." << endl;
    }

    return 0;
}
