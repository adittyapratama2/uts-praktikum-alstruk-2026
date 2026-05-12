	#include <iostream>
#include <iomanip>
using namespace std;

// Deklarasi struct
struct Mahasiswa {
    string nim;
    string nama;
    int semester;
    float ipk;
};

int main() {
    int jumlah;

    // Array struct maksimal 5 data
    Mahasiswa mhs[5];

    // Input jumlah mahasiswa
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

    // Menampilkan seluruh data
    cout << "\nDATA MAHASISWA" << endl;
    cout << "----------------------------------------------------------" << endl;

    cout << left
         << setw(5)  << "No"
         << setw(15) << "NIM"
         << setw(20) << "Nama"
         << setw(12) << "Semester"
         << setw(5)  << "IPK" << endl;

    cout << "----------------------------------------------------------" << endl;

    for (int i = 0; i < jumlah; i++) {
        cout << left
             << setw(5)  << i + 1
             << setw(15) << mhs[i].nim
             << setw(20) << mhs[i].nama
             << setw(12) << mhs[i].semester
             << fixed << setprecision(2)
             << mhs[i].ipk << endl;
    }

    // Mencari IPK tertinggi
    int indeksTertinggi = 0;

    for (int i = 1; i < jumlah; i++) {
        if (mhs[i].ipk > mhs[indeksTertinggi].ipk) {
            indeksTertinggi = i;
        }
    }

    cout << "\nMAHASISWA DENGAN IPK TERTINGGI" << endl;
    cout << "NIM       : " << mhs[indeksTertinggi].nim << endl;
    cout << "Nama      : " << mhs[indeksTertinggi].nama << endl;
    cout << "Semester  : " << mhs[indeksTertinggi].semester << endl;
    cout << "IPK       : " << mhs[indeksTertinggi].ipk << endl;

    // Menghitung rata-rata IPK
    float total = 0;

    for (int i = 0; i < jumlah; i++) {
        total += mhs[i].ipk;
    }

    float rata = total / jumlah;

    cout << "\nRata-rata IPK : " << fixed << setprecision(2) << rata << endl;

    // Pencarian berdasarkan semester
    int cariSemester;
    bool ditemukan = false;

    cout << "\nMasukkan semester yang dicari : ";
    cin >> cariSemester;

    cout << "\nMahasiswa Semester " << cariSemester << endl;

    for (int i = 0; i < jumlah; i++) {
        if (mhs[i].semester == cariSemester) {
            cout << "NIM  : " << mhs[i].nim << endl;
            cout << "Nama : " << mhs[i].nama << endl;
            cout << "IPK  : " << mhs[i].ipk << endl;
            cout << "------------------------" << endl;

            ditemukan = true;
        }
    }

    if (!ditemukan) {
        cout << "Tidak ada mahasiswa pada semester tersebut." << endl;
    }

    return 0;
}
