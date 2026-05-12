#include <iostream>
#include <iomanip>
using namespace std;

struct Mahasiswa {
    string nim, nama;
    int semester;
    float ipk;
};

int main() {
    Mahasiswa mhs[5];
    int jumlah;

    cout << "Masukkan jumlah mahasiswa (1-5): ";
    cin >> jumlah;

    if (jumlah < 1 || jumlah > 5) {
        cout << "Jumlah mahasiswa tidak valid!" << endl;
        return 0;
    }

    cin.ignore();

    for (int i = 0; i < jumlah; i++) {
        cout << "\nData Mahasiswa ke-" << i + 1 << endl;

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

    cout << "\nDATA MAHASISWA" << endl;
    cout << left << setw(5) << "No"
         << setw(15) << "NIM"
         << setw(20) << "Nama"
         << setw(12) << "Semester"
         << setw(10) << "IPK" << endl;

    cout << "--------------------------------------------------------------" << endl;

    for (int i = 0; i < jumlah; i++) {
        cout << left << setw(5) << i + 1
             << setw(15) << mhs[i].nim
             << setw(20) << mhs[i].nama
             << setw(12) << mhs[i].semester
             << setw(10) << fixed << setprecision(2) << mhs[i].ipk
             << endl;
    }

    return 0;
}
