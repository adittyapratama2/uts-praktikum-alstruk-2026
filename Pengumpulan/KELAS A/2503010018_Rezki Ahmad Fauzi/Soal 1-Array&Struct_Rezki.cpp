#include <iostream>
using namespace std;

struct Mahasiswa {
    string nim, nama;
    int semester;
    float ipk;
};

int main() {
    Mahasiswa mhs[5];
    int n;

    cout << "Jumlah mahasiswa (1-5): ";
    cin >> n;

    // Input data
    for (int i = 0; i < n; i++) {
        cout << "\nData Mahasiswa ke-" << i + 1 << endl;

        cout << "NIM       : ";
        cin >> mhs[i].nim;

        cin.ignore();

        cout << "Nama      : ";
        getline(cin, mhs[i].nama);

        cout << "Semester  : ";
        cin >> mhs[i].semester;

        cout << "IPK       : ";
        cin >> mhs[i].ipk;
    }

    // Tabel data mahasiswa
    cout << "\n=== Data Mahasiswa ===\n";
    
    cout << "\n==============================================================\n";
    cout << "No\tNIM\t\tNama\t\tSemester\tIPK\n";
    cout << "==============================================================\n";

    for (int i = 0; i < n; i++) {
        cout << "| " << i + 1 << "\t"
             << "| " << mhs[i].nim << "\t"
             << "| " << mhs[i].nama << "\t\t"
             << "| " << mhs[i].semester << "\t\t"
             << "| " << mhs[i].ipk << endl;
    }

    // Cari IPK tertinggi
    int max = 0;

    for (int i = 1; i < n; i++) {
        if (mhs[i].ipk > mhs[max].ipk) {
            max = i;
        }
    }

    cout << "\n=== MAHASISWA DENGAN IPK TERTINGGI ===\n";
    cout << "Nama : " << mhs[max].nama << endl;
    cout << "NIM  : " << mhs[max].nim << endl;
    cout << "IPK  : " << mhs[max].ipk << endl;

    // Rata-rata IPK
    float total = 0;

    for (int i = 0; i < n; i++) {
        total += mhs[i].ipk;
    }

    cout << "\nRata-rata IPK = " << total / n << endl;

    // Cari berdasarkan semester
    int cari;
    bool ketemu = false;

    cout << "\nMasukkan semester yang dicari: ";
    cin >> cari;

    cout << "\nData Mahasiswa Semester " << cari << endl;

    for (int i = 0; i < n; i++) {
        if (mhs[i].semester == cari) {
            cout << mhs[i].nama
                 << " | " << mhs[i].nim
                 << " | IPK : " << mhs[i].ipk << endl;

            ketemu = true;
        }
    }

    // Hasil pencarian
    if (ketemu) {
        cout << "\nAda mahasiswa di semester tersebut.\n";
    } else {
        cout << "\nTidak ada mahasiswa di semester tersebut.\n";
    }

    return 0;
}
