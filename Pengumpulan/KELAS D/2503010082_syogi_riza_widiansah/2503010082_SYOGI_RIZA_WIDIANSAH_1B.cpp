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


    int indeksMax = 0;

    for (int i = 1; i < jumlah; i++) {
        if (mhs[i].ipk > mhs[indeksMax].ipk) {
            indeksMax = i;
        }
    }

    cout << "\nMahasiswa dengan IPK tertinggi:\n";
    cout << "NIM       : " << mhs[indeksMax].nim << endl;
    cout << "Nama      : " << mhs[indeksMax].nama << endl;
    cout << "Semester  : " << mhs[indeksMax].semester << endl;
    cout << "IPK       : " << mhs[indeksMax].ipk << endl;


    float total = 0;

    for (int i = 0; i < jumlah; i++) {
        total += mhs[i].ipk;
    }

    float rata = total / jumlah;

    cout << "\nRata-rata IPK: " << rata << endl;


    int cariSemester;
    bool ditemukan = false;

    cout << "\nMasukkan semester yang dicari: ";
    cin >> cariSemester;

    cout << "\nMahasiswa Semester " << cariSemester << ":\n";

    for (int i = 0; i < jumlah; i++) {
        if (mhs[i].semester == cariSemester) {
            cout << "- " << mhs[i].nama
                 << " (" << mhs[i].nim << ")"
                 << " IPK: " << mhs[i].ipk << endl;

            ditemukan = true;
        }
    }

    if (!ditemukan) {
        cout << "Tidak ada mahasiswa pada semester tersebut.\n";
    }

    return 0;
}
