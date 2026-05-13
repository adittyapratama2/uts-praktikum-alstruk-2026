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

    while (!(cin >> jumlah) || jumlah < 1 || jumlah > 5) {
        cout << "Input tidak valid! Masukkan angka 1-5: ";

        cin.clear();
        cin.ignore(1000, '\n');
    }

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

    // Tampilkan data mahasiswa
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
             << setw(5) << fixed << setprecision(2) << mhs[i].ipk
             << endl;
    }

    // ===============================
    // PERTANYAAN B
    // ===============================

    // 1. Cari mahasiswa dengan IPK tertinggi
    int indexMax = 0;

    for (int i = 1; i < jumlah; i++) {
        if (mhs[i].ipk > mhs[indexMax].ipk) {
            indexMax = i;
        }
    }

    cout << "\n===== MAHASISWA DENGAN IPK TERTINGGI =====\n";
    cout << "NIM       : " << mhs[indexMax].nim << endl;
    cout << "Nama      : " << mhs[indexMax].nama << endl;
    cout << "Semester  : " << mhs[indexMax].semester << endl;
    cout << "IPK       : " << fixed << setprecision(2)
         << mhs[indexMax].ipk << endl;

    // 2. Hitung rata-rata IPK
    float totalIPK = 0;

    for (int i = 0; i < jumlah; i++) {
        totalIPK += mhs[i].ipk;
    }

    float rataIPK = 0;

    if (jumlah > 0) {
        rataIPK = totalIPK / jumlah;
    }

    cout << "\nRata-rata IPK seluruh mahasiswa : "
         << fixed << setprecision(2)
         << rataIPK << endl;

    // 3. Cari mahasiswa berdasarkan semester
    int cariSemester;
    bool ditemukan = false;

    cout << "\nMasukkan semester yang ingin dicari: ";
    cin >> cariSemester;

    cout << "\n===== MAHASISWA SEMESTER "
         << cariSemester << " =====\n";

    for (int i = 0; i < jumlah; i++) {
        if (mhs[i].semester == cariSemester) {
            ditemukan = true;

            cout << "NIM  : " << mhs[i].nim << endl;
            cout << "Nama : " << mhs[i].nama << endl;
            cout << "IPK  : " << fixed << setprecision(2)
                 << mhs[i].ipk << endl;
            cout << "--------------------------\n";
        }
    }

    if (!ditemukan) {
        cout << "Tidak ada mahasiswa pada semester tersebut.\n";
    }

    return 0;
}
