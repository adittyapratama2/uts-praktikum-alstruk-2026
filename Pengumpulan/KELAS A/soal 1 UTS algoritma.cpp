#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

struct Mahasiswa {
    string nim, nama, semester;
    float ipk;
};

int main() {
    Mahasiswa mhs[5];
    int jumlah;

    cout << "Masukkan jumlah mahasiswa (1-5): ";
    cin >> jumlah;

    for (int i = 0; i < jumlah; i++) {
        cout << "NIM      : "; 
		cin >> mhs[i].nim;
        cout << "Nama     : "; 
		cin >> mhs[i].nama;
        cout << "Semester : "; 
		cin >> mhs[i].semester;
        cout << "IPK      : "; 
		cin >> mhs[i].ipk;
        cout << endl;
    }

    cout << "============================================================\n";
	cout << "| No | NIM           | Nama               | Semester | IPK |\n";
	cout << "============================================================\n";

for (int i = 0; i < jumlah; i++) {
    cout << "| "
         << left << setw(2) << i + 1 << " | "
         << setw(13) << mhs[i].nim << " | "
         << setw(18) << mhs[i].nama << " | "
         << setw(8) << mhs[i].semester << " | "
         << setw(3) << mhs[i].ipk << " |\n";
	}

	cout << "============================================================\n";
    for (int i = 0; i < jumlah; i++) {
        cout << left << setw(5) << i + 1
             << setw(15) << mhs[i].nim
             << setw(20) << mhs[i].nama
             << setw(10) << mhs[i].semester
             << setw(10) << mhs[i].ipk << endl;
    }

    float total = 0;
    float tertinggi = mhs[0].ipk;
    int indexTertinggi = 0;

    for (int i = 0; i < jumlah; i++) {
        total = total + mhs[i].ipk; 
        
        if (mhs[i].ipk > tertinggi) {
            tertinggi = mhs[i].ipk;
            indexTertinggi = i;
        }
    }

    cout << "\nIPK Tertinggi: " << mhs[indexTertinggi].nama << endl;
    cout << "Rata-rata: " << total / jumlah << endl;

    string cari;
    cout << "\nCari Semester: "; 
	cin >> cari;
    
    int ketemu = 0;
    for (int i = 0; i < jumlah; i++) {
        if (mhs[i].semester == cari) {
            cout << "- " << mhs[i].nama << endl;
            ketemu = 1;
        }
    }

    if (ketemu == 0) {
        cout << "Data tidak ditemukan" << endl;
    }

    return 0;
}
