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

    cout << "\n===== DATA MAHASISWA =====\n";

    cout << left << setw(5) << "No"
         << setw(15) << "NIM"
         << setw(20) << "Nama"
         << setw(10) << "Semester"
         << setw(5) << "IPK" << endl;

    for (int i = 0; i < jumlah; i++) {
        cout << left << setw(5) << i + 1
             << setw(15) << mhs[i].nim
             << setw(20) << mhs[i].nama
             << setw(10) << mhs[i].semester
             << setw(5) << mhs[i].ipk << endl;
    }

    // Mencari IPK tertinggi
    int maxIndex = 0;

    for (int i = 1; i < jumlah; i++) {
        if (mhs[i].ipk > mhs[maxIndex].ipk) {
            maxIndex = i;
        }
    }

    cout << "\n===== MAHASISWA DENGAN IPK TERTINGGI =====\n";
    cout << "NIM       : " << mhs[maxIndex].nim << endl;
    cout << "Nama      : " << mhs[maxIndex].nama << endl;
    cout << "Semester  : " << mhs[maxIndex].semester << endl;
    cout << "IPK       : " << mhs[maxIndex].ipk << endl;

    // Menghitung rata-rata IPK
    float total = 0;

    for (int i = 0; i < jumlah; i++) {
        total += mhs[i].ipk;
    }

    float rata = total / jumlah;

    cout << "\nRata-rata IPK : " << rata << endl;

    // Cari berdasarkan semester
    int cariSemester;
    bool ditemukan = false;

    cout << "\nMasukkan semester yang dicari : ";
    cin >> cariSemester;

    cout << "\n===== DATA MAHASISWA SEMESTER "
         << cariSemester << " =====\n";

    for (int i = 0; i < jumlah; i++) {
        if (mhs[i].semester == cariSemester) {
            cout << "NIM  : " << mhs[i].nim << endl;
            cout << "Nama : " << mhs[i].nama << endl;
            cout << "IPK  : " << mhs[i].ipk << endl;
            cout << endl;

            ditemukan = true;
        }
    }

    if (!ditemukan) {
        cout << "Tidak ada mahasiswa pada semester tersebut." << endl;
    }

    return 0;
}