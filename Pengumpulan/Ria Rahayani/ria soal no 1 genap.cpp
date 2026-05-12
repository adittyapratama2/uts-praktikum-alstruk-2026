#include <iostream>
#include <string>

using namespace std;

// Pertanyaan A:
struct Mahasiswa {
    string nim;
    string nama;
    int semester;
    float ipk;
};

int main() {
    Mahasiswa mhs[5];
    int n;

    cout << "Masukkan jumlah mahasiswa (1-5): ";
    cin >> n;

    // Input Data
    for (int i = 0; i < n; i++) {
        cout << "\nData ke-" << i + 1 << endl;
        cout << "NIM      : "; cin >> mhs[i].nim;
        cin.ignore(); 
        cout << "Nama     : "; getline(cin, mhs[i].nama);
        cout << "Semester : "; cin >> mhs[i].semester;
        cout << "IPK      : "; cin >> mhs[i].ipk;
    }

    // Tampilan Tabel
    cout << "\nNo | NIM | Nama | Semester | IPK" << endl;
    cout << "------------------------------------" << endl;
    for (int i = 0; i < n; i++) {
        cout << i + 1 << " | " << mhs[i].nim << " | " << mhs[i].nama << " | " << mhs[i].semester << " | " << mhs[i].ipk << endl;
    }

    // Pertanyaan B:
    
    // 1. IPK Tertinggi
    int tertinggi = 0;
    float total = 0;
    for (int i = 0; i < n; i++) {
        if (mhs[i].ipk > mhs[tertinggi].ipk) {
            tertinggi = i;
        }
        total += mhs[i].ipk;
    }

    cout << "\nIPK Tertinggi: " << mhs[tertinggi].nama << " (" << mhs[tertinggi].ipk << ")" << endl;

    // 2. Rata-rata
    cout << "Rata-rata IPK: " << total / n << endl;

    // 3. Cari Semester
    int cari;
    bool ada = false;
    cout << "\nCari Semester: ";
    cin >> cari;

    for (int i = 0; i < n; i++) {
        if (mhs[i].semester == cari) {
            cout << "- " << mhs[i].nama << endl;
            ada = true;
        }
    }

    if (!ada) {
        cout << "Tidak ada mahasiswa pada semester tersebut." << endl;
    }

    return 0;
}
