#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

struct Mahasiswa {
    string nama;
    string nim;
    int semester;
    float ipk;
};

int main() {
    Mahasiswa mhs[5];
    int n;

    cout << "Masukkan jumlah mahasiswa (1-5): ";
    cin >> n;

    if (n < 1 || n > 5) {
        cout << "Jumlah tidak valid!" << endl;
        return 0;
    }

    for (int i = 0; i < n; i++) {
        cout << "\nData Mahasiswa ke-" << i + 1 << endl;
        
        
        cin.ignore(1000, '\n'); 
        
        cout << "Nama     : "; 
        getline(cin, mhs[i].nama); 
        
        cout << "NIM      : "; 
        cin >> mhs[i].nim; 
        
        cout << "Semester : "; 
        cin >> mhs[i].semester;
        
        cout << "IPK      : "; 
        cin >> mhs[i].ipk;
    }


    cout << "\n" << setfill('=') << setw(65) << "" << endl;
    cout << setfill(' ');
    cout << left << setw(4) << "No" 
         << setw(20) << "| Nama" 
         << setw(15) << "| NIM" 
         << setw(12) << "| Semester" 
         << "| IPK" << endl;
    cout << setfill('-') << setw(65) << "" << endl;
    cout << setfill(' ');

    for (int i = 0; i < n; i++) {
        cout << left << setw(4) << i + 1 
             << "| " << setw(18) << mhs[i].nama
             << "| " << setw(13) << mhs[i].nim
             << "| " << setw(10) << mhs[i].semester 
             << "| " << fixed << setprecision(2) << mhs[i].ipk << endl;
    }
    cout << "-----------------------------------------------------------------" << endl;

    
    int indexTertinggi = 0;
    float totalIPK = 0;

    for (int i = 0; i < n; i++) {
        if (mhs[i].ipk > mhs[indexTertinggi].ipk) {
            indexTertinggi = i;
        }
        totalIPK += mhs[i].ipk;
    }

    cout << "\n>>> Mahasiswa dengan IPK Tertinggi <<<" << endl;
    cout << "Nama: " << mhs[indexTertinggi].nama << " (" << mhs[indexTertinggi].ipk << ")" << endl;

    float rataRata = totalIPK / n;
    cout << "Rata-rata IPK Seluruh Mahasiswa: " << fixed << setprecision(2) << rataRata << endl;

    int cariSemester;
    bool ditemukan = false;
    cout << "\nMasukkan nomor semester yang ingin dicari: ";
    cin >> cariSemester;

    cout << "Hasil pencarian mahasiswa semester " << cariSemester << ":" << endl;
    for (int i = 0; i < n; i++) {
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
