#include <iostream>
#include <string>
#include <iomanip> 

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


    if (jumlah < 1 || jumlah > 5) {
        cout << "Jumlah tidak valid!" << endl;
        return 1;
    }

    
    for (int i = 0; i < jumlah; i++) {
        cout << "\nData Mahasiswa ke-" << i + 1 << endl;
        cout << "NIM      : "; cin >> mhs[i].nim;
        cin.ignore(); 
        cout << "Nama     : "; getline(cin, mhs[i].nama);
        cout << "Semester : "; cin >> mhs[i].semester;
        cout << "IPK      : "; cin >> mhs[i].ipk;
    }

    
    cout << "\n-------------------------------------------------------------\n";
    cout << left << setw(4) << "No" << "| " << setw(15) << "NIM" << "| " << setw(20) << "Nama" << "| " << setw(10) << "Semester" << "| " << "IPK" << endl;
    cout << "-------------------------------------------------------------\n";
    for (int i = 0; i < jumlah; i++) {
        cout << left << setw(4) << i + 1 
             << "| " << setw(15) << mhs[i].nim 
             << "| " << setw(20) << mhs[i].nama 
             << "| " << setw(10) << mhs[i].semester 
             << "| " << fixed << setprecision(2) << mhs[i].ipk << endl;
    }
    cout << "-------------------------------------------------------------\n";

    
    int indexTertinggi = 0;
    float totalIPK = 0;
    for (int i = 0; i < jumlah; i++) {
        totalIPK += mhs[i].ipk;
        if (mhs[i].ipk > mhs[indexTertinggi].ipk) {
            indexTertinggi = i;
        }
    }

    cout << "\nMahasiswa dengan IPK Tertinggi:" << endl;
    cout << "Nama: " << mhs[indexTertinggi].nama << " (" << mhs[indexTertinggi].nim << ") dengan IPK: " << mhs[indexTertinggi].ipk << endl;

    
    float rataRata = totalIPK / jumlah;
    cout << "Rata-rata IPK seluruh mahasiswa: " << fixed << setprecision(2) << rataRata << endl;

    
    int cariSemester;
    bool ditemukan = false;
    cout << "\nMasukkan nomor semester yang dicari: ";
    cin >> cariSemester;

    cout << "Mahasiswa di semester " << cariSemester << ":" << endl;
    for (int i = 0; i < jumlah; i++) {
        if (mhs[i].semester == cariSemester) {
            cout << "- " << mhs[i].nama << " (" << mhs[i].nim << ")" << endl;
            ditemukan = true;
        }
    }

    if (!ditemukan) {
        cout << "Tidak ada mahasiswa pada semester tersebut." << endl;
    }

    return 0;
}