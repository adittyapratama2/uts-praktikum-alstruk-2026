#include <iostream>
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
    int n;

    cout << "Masukkan jumlah mahasiswa (1-5): ";
    cin >> n;
    cin.ignore();

    for(int i = 0; i < n; i++) {
        cout << "\nData Mahasiswa ke-" << i+1 << endl;

        cout << "NIM       : ";
        getline(cin, mhs[i].nim);

        cout << "Nama      : ";
        getline(cin, mhs[i].nama);

        cout << "Semester  : ";
        cin >> mhs[i].semester;

        cout << "IPK       : ";
        cin >> mhs[i].ipk;
        cin.ignore();
    }

    cout << "\nData Mahasiswa\n";
    cout << left << setw(5) << "No"
         << setw(15) << "NIM"
         << setw(20) << "Nama"
         << setw(10) << "Semester"
         << setw(10) << "IPK" << endl;

    for(int i = 0; i < n; i++) {
        cout << left << setw(5) << i+1
             << setw(15) << mhs[i].nim
             << setw(20) << mhs[i].nama
             << setw(10) << mhs[i].semester
             << setw(10) << mhs[i].ipk << endl;
    }

    return 0;
}