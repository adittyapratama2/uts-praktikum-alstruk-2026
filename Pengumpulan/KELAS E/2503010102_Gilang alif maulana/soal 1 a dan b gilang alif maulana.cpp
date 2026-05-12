#include <iostream>
#include <iomanip>
#include <string>
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

    if (jumlah < 1 || jumlah > 5) {
        cout << "Jumlah tidak valid!" << endl;
        return 0;
    }

    // Input data mahasiswa
    for (int i = 0; i < jumlah; i++) {
        cout << "\nData Mahasiswa ke-" << i+1 << endl;
        cout << "NIM       : ";
        cin >> mhs[i].nim;
        cin.ignore(); // untuk menghindari masalah getline
        cout << "Nama      : ";
        getline(cin, mhs[i].nama);
        cout << "Semester  : ";
        cin >> mhs[i].semester;
        cout << "IPK       : ";
        cin >> mhs[i].ipk;
    }

    // Tampilkan tabel data mahasiswa
    cout << "\nDaftar Mahasiswa:\n";
    cout << "No | NIM        | Nama            | Semester |  IPK\n";
    cout << "---|------------|-----------------|----------|------\n";
    for (int i = 0; i < jumlah; i++) {
        cout << setw(2) << i+1 << " | "
             << setw(10) << mhs[i].nim << " | "
             << setw(15) << mhs[i].nama << " | "
             << setw(8) << mhs[i].semester << " | "
             << setw(4) << fixed << setprecision(2) << mhs[i].ipk << endl;
    }

    // ---------------- Pertanyaan B ----------------
    // Cari mahasiswa dengan IPK tertinggi
    int idxMax = 0;
    for (int i = 1; i < jumlah; i++) {
        if (mhs[i].ipk > mhs[idxMax].ipk) {
            idxMax = i;
        }
    }
    cout << "\nMahasiswa dengan IPK tertinggi:\n";
    cout << "NIM       : " << mhs[idxMax].nim << endl;
    cout << "Nama      : " << mhs[idxMax].nama << endl;
    cout << "Semester  : " << mhs[idxMax].semester << endl;
    cout << "IPK       : " << mhs[idxMax].ipk << endl;

    // Hitung rata-rata IPK
    float totalIpk = 0;
    for (int i = 0; i < jumlah; i++) {
        totalIpk += mhs[i].ipk;
    }
    float rataIpk = totalIpk / jumlah;
    cout << "\nRata-rata IPK: " << fixed << setprecision(2) << rataIpk << endl;

    // Cari mahasiswa berdasarkan semester
    int cariSemester;
    cout << "\nMasukkan nomor semester yang ingin dicari: ";
    cin >> cariSemester;

    bool ditemukan = false;
    cout << "\nMahasiswa pada semester " << cariSemester << ":\n";
    for (int i = 0; i < jumlah; i++) {
        if (mhs[i].semester == cariSemester) {
            cout << "- " << mhs[i].nama << " (NIM: " << mhs[i].nim 
                 << ", IPK: " << mhs[i].ipk << ")" << endl;
            ditemukan = true;
        }
    }
    if (!ditemukan) {
        cout << "Tidak ada mahasiswa pada semester tersebut." << endl;
    }

    return 0;
}

