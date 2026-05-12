#include <iostream>
using namespace std;

struct Mahasiswa {
    string nim;
    string nama;
    int semester;
    float ipk;
};

int main() {
    Mahasiswa mhs[5] = {
        {"202401", "Andi", 2, 3.7},
        {"202402", "Budi", 3, 3.9},
        {"202403", "Citra", 2, 3.5},
        {"202404", "Dina", 4, 3.8},
        {"202405", "Eko", 3, 3.6}
    };

    int n = 5;

    int maxIndex = 0;
    float total = 0;

    for(int i = 0; i < n; i++) {
        total += mhs[i].ipk;
        if(mhs[i].ipk > mhs[maxIndex].ipk)
            maxIndex = i;
    }

    cout << "Mahasiswa dengan IPK tertinggi:\n";
    cout << mhs[maxIndex].nama << " - " << mhs[maxIndex].ipk << endl;

    cout << "\nRata-rata IPK: " << total/n << endl;

    int cariSemester;
    cout << "\nMasukkan semester yang dicari: ";
    cin >> cariSemester;

    bool ditemukan = false;

    cout << "\nMahasiswa Semester " << cariSemester << ":\n";

    for(int i = 0; i < n; i++) {
        if(mhs[i].semester == cariSemester) {
            cout << mhs[i].nama << endl;
            ditemukan = true;
        }
    }

    if(!ditemukan)
        cout << "Tidak ada mahasiswa pada semester tersebut.\n";

    return 0;
}