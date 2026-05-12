#include <iostream>
#include <iomanip>
using namespace std;

// Struct Mahasiswa
struct Mahasiswa {
    string nim;
    string nama;
    int semester;
    float ipk;
};

int main() {
    // Array of struct maksimal 5 data
    Mahasiswa mhs[5];

    int jumlah;

    // Input jumlah mahasiswa
    cout << "Masukkan jumlah mahasiswa (1-5): ";
    cin >> jumlah;

    // Validasi jumlah
    while (jumlah < 1 || jumlah > 5) {
        cout << "Jumlah harus antara 1 sampai 5!\n";
        cout << "Masukkan jumlah mahasiswa: ";
        cin >> jumlah;
    }

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

    // Tampilkan data mahasiswa
    cout << "\n================ DATA MAHASISWA ================\n";

    cout << left
         << setw(5)  << "No"
         << setw(15) << "NIM"
         << setw(25) << "Nama"
         << setw(12) << "Semester"
         << setw(10) << "IPK" << endl;

    cout << "---------------------------------------------------------------\n";

    for (int i = 0; i < jumlah; i++) {
        cout << left
             << setw(5)  << i + 1
             << setw(15) << mhs[i].nim
             << setw(25) << mhs[i].nama
             << setw(12) << mhs[i].semester
             << setw(10) << fixed << setprecision(2) << mhs[i].ipk
             << endl;
    }

    // Cari IPK tertinggi
    int indexTertinggi = 0;

    for (int i = 1; i < jumlah; i++) {
        if (mhs[i].ipk > mhs[indexTertinggi].ipk) {
            indexTertinggi = i;
        }
    }

    cout << "\n=========== MAHASISWA DENGAN IPK TERTINGGI ===========\n";
    cout << "NIM       : " << mhs[indexTertinggi].nim << endl;
    cout << "Nama      : " << mhs[indexTertinggi].nama << endl;
    cout << "Semester  : " << mhs[indexTertinggi].semester << endl;
    cout << "IPK       : " << fixed << setprecision(2)
         << mhs[indexTertinggi].ipk << endl;

    // Hitung rata-rata IPK
    float totalIPK = 0;

    for (int i = 0; i < jumlah; i++) {
        totalIPK += mhs[i].ipk;
    }

    float rataIPK = totalIPK / jumlah;

    cout << "\nRata-rata IPK Mahasiswa : "
         << fixed << setprecision(2)
         << rataIPK << endl;

    // Cari mahasiswa berdasarkan semester
    int cariSemester;
    bool ditemukan = false;

    cout << "\nMasukkan semester yang ingin dicari: ";
    cin >> cariSemester;

    cout << "\n===== MAHASISWA SEMESTER " << cariSemester << " =====\n";

    for (int i = 0; i < jumlah; i++) {
        if (mhs[i].semester == cariSemester) {

            cout << "NIM  : " << mhs[i].nim << endl;
            cout << "Nama : " << mhs[i].nama << endl;
            cout << "IPK  : " << fixed << setprecision(2)
                 << mhs[i].ipk << endl;

            cout << "-----------------------------------\n";

            ditemukan = true;
        }
    }

    // Jika tidak ditemukan
    if (!ditemukan) {
        cout << "Tidak ada mahasiswa pada semester tersebut.\n";
    }

    return 0;
}