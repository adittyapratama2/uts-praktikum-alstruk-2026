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
    cin.ignore();

    // Input data mahasiswa
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

    // Tampilkan data
    cout << "\nDATA MAHASISWA\n";
    cout << "-----------------------------------------------------------------\n";

    cout << left << setw(5) << "No"
         << setw(15) << "NIM"
         << setw(25) << "Nama"
         << setw(10) << "Semester"
         << setw(5) << "IPK" << endl;

    cout << "-----------------------------------------------------------------\n";

    for (int i = 0; i < jumlah; i++) {

        cout << left << setw(5) << i + 1
             << setw(15) << mhs[i].nim
             << setw(25) << mhs[i].nama
             << setw(10) << mhs[i].semester
             << setw(5) << mhs[i].ipk << endl;
    }

    // =====================================
    // Pertanyaan B
    // Cari mahasiswa dengan IPK tertinggi
    // =====================================

    float ipkTertinggi = mhs[0].ipk;
    int posisi = 0;

    for (int i = 1; i < jumlah; i++) {

        if (mhs[i].ipk >= ipkTertinggi) {

            ipkTertinggi = mhs[i].ipk;
            posisi = i;
        }
    }

    cout << "\n=====================================\n";
    cout << "MAHASISWA DENGAN IPK TERTINGGI\n";
    cout << "=====================================\n";

    cout << "NIM       : " << mhs[posisi].nim << endl;
    cout << "Nama      : " << mhs[posisi].nama << endl;
    cout << "Semester  : " << mhs[posisi].semester << endl;
    cout << "IPK       : " << mhs[posisi].ipk << endl;

    return 0;
}
