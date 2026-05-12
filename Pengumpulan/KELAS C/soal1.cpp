#include <iostream>
using namespace std;

// Deklarasi Struct
struct Mahasiswa {
    string nim;
    string nama;
    int semester;
    float ipk;
};

int main() {

    // Array of Struct
    Mahasiswa mhs[5];

    int jumlah;

    // Input jumlah mahasiswa
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

    // Menampilkan tabel data mahasiswa
    cout << "\n===== DATA MAHASISWA =====\n";

    cout << "No\tNIM\t\tNama\t\tSemester\tIPK\n";
    cout << "-------------------------------------------------------------\n";

    for (int i = 0; i < jumlah; i++) {

        cout << i + 1 << "\t"
             << mhs[i].nim << "\t"
             << mhs[i].nama << "\t\t"
             << mhs[i].semester << "\t\t"
             << mhs[i].ipk << endl;
    }

    // ====================================
    // Mencari IPK tertinggi
    // ====================================

    int tertinggi = 0;

    for (int i = 1; i < jumlah; i++) {

        if (mhs[i].ipk > mhs[tertinggi].ipk) {
            tertinggi = i;
        }
    }

    cout << "\n===== MAHASISWA DENGAN IPK TERTINGGI =====\n";

    cout << "NIM       : " << mhs[tertinggi].nim << endl;
    cout << "Nama      : " << mhs[tertinggi].nama << endl;
    cout << "Semester  : " << mhs[tertinggi].semester << endl;
    cout << "IPK       : " << mhs[tertinggi].ipk << endl;

    // ====================================
    // Menghitung rata-rata IPK
    // ====================================

    float total = 0;

    for (int i = 0; i < jumlah; i++) {

        total = total + mhs[i].ipk;
    }

    float rata = total / jumlah;

    cout << "\nRata-rata IPK : " << rata << endl;

    // ====================================
    // Cari berdasarkan semester
    // ====================================

    int cariSemester;
    bool ditemukan = false;

    cout << "\nMasukkan semester yang dicari : ";
    cin >> cariSemester;

    cout << "\n===== DATA MAHASISWA SEMESTER "
         << cariSemester << " =====\n";

    for (int i = 0; i < jumlah; i++) {

        if (mhs[i].semester == cariSemester) {

            cout << "NIM       : " << mhs[i].nim << endl;
            cout << "Nama      : " << mhs[i].nama << endl;
            cout << "IPK       : " << mhs[i].ipk << endl;
            cout << "-----------------------------\n";

            ditemukan = true;
        }
    }

    // Jika tidak ditemukan
    if (ditemukan == false) {

        cout << "Tidak ada mahasiswa pada semester tersebut." << endl;
    }

    return 0;
}