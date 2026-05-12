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
    int jumlah;

    // Array  struct maksimal 5 data
    Mahasiswa mhs[5];

    cout << "Masukkan jumlah mahasiswa (1-5) : ";
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

    // Menampilkan data
    cout << "\nDATA MAHASISWA" << endl;
    cout << "-------------------------------------------------------------" << endl;

    cout << left
         << setw(5)  << "No"
         << setw(15) << "NIM"
         << setw(20) << "Nama"
         << setw(12) << "Semester"
         << setw(5)  << "IPK" << endl;

    cout << "-------------------------------------------------------------" << endl;

    for (int i = 0; i < jumlah; i++) {
        cout << left
             << setw(5)  << i + 1
             << setw(15) << mhs[i].nim
             << setw(20) << mhs[i].nama
             << setw(12) << mhs[i].semester
             << setw(5)  << fixed << setprecision(2) << mhs[i].ipk
             << endl;
    }

    return 0;
}
