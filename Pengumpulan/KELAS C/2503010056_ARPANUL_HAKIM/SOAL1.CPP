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
        cout << "Maaf, jumlah data cuma bisa 1 sampai 5." << endl;
        return 0;
    }

    for(int i = 0; i < jumlah; i++) {
        cout << "\n--- Data Mahasiswa ke-" << i + 1 << " ---" << endl;
        cout << "NIM      : ";
        cin >> mhs[i].nim;

        cin.ignore(); 

        cout << "Nama     : ";
        getline(cin, mhs[i].nama);

        cout << "Semester : ";
        cin >> mhs[i].semester;

        cout << "IPK      : ";
        cin >> mhs[i].ipk;
    }

    cout << "\n====================================================================\n";
    cout << left << setw(4) << "No" 
         << "| " << setw(15) << "NIM" 
         << "| " << setw(25) << "Nama" 
         << "| " << setw(10) << "Semester" 
         << "| " << "IPK" << endl;
    cout << "----|----------------|--------------------------|-----------|-------\n";

    for(int i = 0; i < jumlah; i++) {
        cout << left << setw(4) << i + 1 
             << "| " << setw(15) << mhs[i].nim 
             << "| " << setw(25) << mhs[i].nama 
             << "| " << setw(10) << mhs[i].semester 
             << "| " << mhs[i].ipk << endl;
    }
    cout << "\n\n================ STATISTIK & PENCARIAN ================\n";

    int idxTertinggi = 0; 
    for(int i = 1; i < jumlah; i++) {
        if(mhs[i].ipk > mhs[idxTertinggi].ipk) {
            idxTertinggi = i;
        }
    }
    
    cout << "\n1. Mahasiswa dengan IPK Tertinggi:" << endl;
    cout << "   NIM      : " << mhs[idxTertinggi].nim << endl;
    cout << "   Nama     : " << mhs[idxTertinggi].nama << endl;
    cout << "   Semester : " << mhs[idxTertinggi].semester << endl;
    cout << "   IPK      : " << mhs[idxTertinggi].ipk << endl;


    float totalIPK = 0;
    for(int i = 0; i < jumlah; i++) {
        totalIPK = totalIPK + mhs[i].ipk; 
    }
    float rataRata = totalIPK / jumlah; 
    
    cout << "\n2. Rata-rata IPK seluruh mahasiswa : " << rataRata << endl;

    int cariSemester;
    bool ketemu = false; 

    cout << "\n3. Masukkan nomor semester yang ingin dicari: ";
    cin >> cariSemester;

    cout << "   Hasil pencarian mahasiswa semester " << cariSemester << ":" << endl;
    
    for(int i = 0; i < jumlah; i++) {
        if(mhs[i].semester == cariSemester) {
            cout << "   - " << mhs[i].nama << " (NIM: " << mhs[i].nim << ", IPK: " << mhs[i].ipk << ")" << endl;
            ketemu = true; // Penanda diubah jadi true karena data ketemu
        }
    }

    if(ketemu == false) {
        cout << "   Tidak ada mahasiswa pada semester tersebut." << endl;
    }
    
    return 0;
}