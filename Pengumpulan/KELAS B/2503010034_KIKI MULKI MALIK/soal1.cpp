#include <iostream>
#include <iomanip>
using namespace std;

struct DataMahasiswa {
    string nomorInduk;
    string namaLengkap;
    int semesterAktif;
    float nilaiIPK;
};

int main() {

    DataMahasiswa daftarMhs[5];

    int banyakData;

    do {
        cout << "Masukkan jumlah mahasiswa (1-5): ";
        cin >> banyakData;

        if (banyakData < 1 || banyakData > 5) {
            cout << "Jumlah harus antara 1 sampai 5!\n";
        }

    } while (banyakData < 1 || banyakData > 5);

    cin.ignore();

    for (int i = 0; i < banyakData; i++) {

        cout << "\nData Mahasiswa ke-" << i + 1 << endl;

        cout << "NIM       : ";
        getline(cin, daftarMhs[i].nomorInduk);

        cout << "Nama      : ";
        getline(cin, daftarMhs[i].namaLengkap);

        cout << "Semester  : ";
        cin >> daftarMhs[i].semesterAktif;

        cout << "IPK       : ";
        cin >> daftarMhs[i].nilaiIPK;

        cin.ignore();
    }

    cout << "\n===== DATA MAHASISWA =====\n";

    cout << left
         << setw(5)  << "No"
         << setw(15) << "NIM"
         << setw(25) << "Nama"
         << setw(12) << "Semester"
         << setw(8)  << "IPK" << endl;

    cout << "---------------------------------------------------------------\n";

    for (int i = 0; i < banyakData; i++) {

        cout << left
             << setw(5)  << i + 1
             << setw(15) << daftarMhs[i].nomorInduk
             << setw(25) << daftarMhs[i].namaLengkap
             << setw(12) << daftarMhs[i].semesterAktif
             << fixed << setprecision(2)
             << setw(8) << daftarMhs[i].nilaiIPK
             << endl;
    }

    int posisiTertinggi = 0;

    for (int i = 1; i < banyakData; i++) {

        if (daftarMhs[i].nilaiIPK > daftarMhs[posisiTertinggi].nilaiIPK) {
            posisiTertinggi = i;
        }
    }

    cout << "\n===== MAHASISWA DENGAN IPK TERTINGGI =====\n";

    cout << "NIM       : "
         << daftarMhs[posisiTertinggi].nomorInduk << endl;

    cout << "Nama      : "
         << daftarMhs[posisiTertinggi].namaLengkap << endl;

    cout << "Semester  : "
         << daftarMhs[posisiTertinggi].semesterAktif << endl;

    cout << "IPK       : "
         << fixed << setprecision(2)
         << daftarMhs[posisiTertinggi].nilaiIPK << endl;

    float totalNilai = 0;

    for (int i = 0; i < banyakData; i++) {
        totalNilai += daftarMhs[i].nilaiIPK;
    }

    float rataRataIPK = totalNilai / banyakData;

    cout << "\nRata-rata IPK seluruh mahasiswa = "
         << fixed << setprecision(2)
         << rataRataIPK << endl;

    int semesterCari;
    bool dataKetemu = false;

    cout << "\nMasukkan semester yang ingin dicari: ";
    cin >> semesterCari;

    cout << "\n===== DATA MAHASISWA SEMESTER "
         << semesterCari << " =====\n";

    for (int i = 0; i < banyakData; i++) {

        if (daftarMhs[i].semesterAktif == semesterCari) {

            cout << "NIM   : "
                 << daftarMhs[i].nomorInduk << endl;

            cout << "Nama  : "
                 << daftarMhs[i].namaLengkap << endl;

            cout << "IPK   : "
                 << fixed << setprecision(2)
                 << daftarMhs[i].nilaiIPK << endl;

            cout << "-----------------------------\n";

            dataKetemu = true;
        }
    }

    if (!dataKetemu) {
        cout << "Tidak ada mahasiswa pada semester tersebut.\n";
    }

    return 0;
}
