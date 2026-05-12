#include <iostream>
#include <iomanip>
using namespace std;

//deklarasi struct
struct Mahasiswa {
	string nim;
    string nama;
    int semester;
    float ipk;
};

int main() {
    Mahasiswa mhs[5];
    int n;

    // Input jumlah mahasiswa
    cout << "Masukkan jumlah mahasiswa (1-5): ";
    cin >> n;
    cin.ignore();
    
    // Input data mahasiswa
    for (int i = 0; i < n; i++) {
        cout << "\nData Mahasiswa ke-" << i+1 << endl;
        cout << "NIM      : "; getline(cin, mhs[i].nim);
        cout << "Nama     : "; getline(cin, mhs[i].nama);
        cout << "Semester : "; cin >> mhs[i].semester;
        cout << "IPK      : "; cin >> mhs[i].ipk;
        cin.ignore();
        
	}
	
	// Tampilkan data dalam bentuk tabel
    cout << "\nData Mahasiswa:\n";
    cout << "No | NIM        | Nama           | Semester | IPK\n";
    cout << "-----------------------------------------------------\n";

    for (int i = 0; i < n; i++) {
        cout << i+1 << "  | "
             << setw(10) << mhs[i].nim << " | "
             << setw(13) << mhs[i].nama << " | "
             << setw(8) << mhs[i].semester << " | "
             << mhs[i].ipk << endl;
    }
    
    // ========================
    // PERTANYAAN B
    // ========================

    // 1. Cari IPK tertinggi
    float maxIPK = mhs[0].ipk;
    int indexMax = 0;

    for (int i = 1; i < n; i++) {
        if (mhs[i].ipk > maxIPK) {
            maxIPK = mhs[i].ipk;
            indexMax = i;
        }
    }
    
    cout << "\nMahasiswa dengan IPK tertinggi:\n";
    cout << "NIM      : " << mhs[indexMax].nim << endl;
    cout << "Nama     : " << mhs[indexMax].nama << endl;
    cout << "Semester : " << mhs[indexMax].semester << endl;
    cout << "IPK      : " << mhs[indexMax].ipk << endl;

    // 2. Hitung rata-rata IPK
    float total = 0;
    for (int i = 0; i < n; i++) {
        total += mhs[i].ipk;
    }
    float rata = total / n;

    cout << "\nRata-rata IPK: " << rata << endl;
    
    // 3. Cari berdasarkan semester
    int cariSemester;
    bool ditemukan = false;

    cout << "\nMasukkan semester yang ingin dicari: ";
    cin >> cariSemester;

    cout << "\nMahasiswa di semester " << cariSemester << ":\n";

    for (int i = 0; i < n; i++) {
        if (mhs[i].semester == cariSemester) {
            cout << mhs[i].nim << " | "
                 << mhs[i].nama << " | "
                 << mhs[i].ipk << endl;
            ditemukan = true;
        }
    }

    if (!ditemukan) {
        cout << "Tidak ada mahasiswa pada semester tersebut.\n";
    }

    return 0;
}

