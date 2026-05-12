#include <iostream>
#include <string>
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
    int n;

    cout << "Masukkan jumlah mahasiswa (1-5): ";
    cin >> n;

    if (n < 1 || n > 5) {
        return 0;
    }

    for (int i = 0; i < n; i++) {
        cout << "\nData Mahasiswa ke-" << i + 1 << endl;
        cout << "NIM      : "; cin >> mhs[i].nim;
        cin.ignore();
        cout << "Nama     : "; getline(cin, mhs[i].nama);
        cout << "Semester : "; cin >> mhs[i].semester;
        cout << "IPK      : "; cin >> mhs[i].ipk;
    }

    cout << "\n-------------------------------------------------------------" << endl;
    cout << left << setw(4) << "No" << " | " << setw(12) << "NIM" << " | " << setw(18) << "Nama" << " | " << setw(8) << "Semester" << " | " << "IPK" << endl;
    cout << "-------------------------------------------------------------" << endl;
    for (int i = 0; i < n; i++) {
        cout << left << setw(4) << i + 1 << " | " << setw(12) << mhs[i].nim << " | " << setw(18) << mhs[i].nama << " | " << setw(8) << mhs[i].semester << " | " << mhs[i].ipk << endl;
    }

    int idxTertinggi = 0;
    float totalIPK = 0;
    for (int i = 0; i < n; i++) {
        if (mhs[i].ipk > mhs[idxTertinggi].ipk) {
            idxTertinggi = i;
        }
        totalIPK += mhs[i].ipk;
    }

    cout << "\n=== HASIL ANALISIS DATA (SOAL 1B) ===" << endl;
    cout << "1. Mahasiswa IPK Tertinggi: " << mhs[idxTertinggi].nama << " (" << mhs[idxTertinggi].ipk << ")" << endl;
    cout << "2. Rata-rata IPK: " << totalIPK / n << endl;

    int cariSem;
    bool ditemukan = false;
    cout << "\n3. Masukkan Semester yang ingin dicari: ";
    cin >> cariSem;
    cout << "Hasil pencarian mahasiswa semester " << cariSem << ":" << endl;
    for (int i = 0; i < n; i++) {
        if (mhs[i].semester == cariSem) {
            cout << "- " << mhs[i].nama << " (NIM: " << mhs[i].nim << ")" << endl;
            ditemukan = true;
        }
    }

    if (!ditemukan) {
        cout << "Tidak ada mahasiswa di semester tersebut." << endl;
    }

    return 0;
}