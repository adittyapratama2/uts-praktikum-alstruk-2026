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
    int jumlah;

    cout << "Masukkan jumlah mahasiswa (1-5): ";
    cin >> jumlah;

    // Input data mahasiswa
    for (int i = 0; i < jumlah; i++) {
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

    // Tampilkan tabel
    cout << "\nDATA MAHASISWA\n";
    cout << "-----------------------------------------------------------\n";
    cout << left << setw(5) << "No"
         << setw(15) << "NIM"
         << setw(25) << "Nama"
         << setw(10) << "Semester"
         << "IPK" << endl;

    cout << "-----------------------------------------------------------\n";

    for (int i = 0; i < jumlah; i++) {
        cout << left << setw(5) << i + 1
             << setw(15) << mhs[i].nim
             << setw(25) << mhs[i].nama
             << setw(10) << mhs[i].semester
             << mhs[i].ipk << endl;
    }

    return 0;
}
