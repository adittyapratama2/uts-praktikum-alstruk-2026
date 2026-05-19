#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

// Deklarasi Struct (Pertanyaan A)
struct Mahasiswa {
    string nim;
    string nama;
    int semester;
    float ipk;
};

int main() {
    int n;
    Mahasiswa mhs[5]; // Array of struct kapasitas maks 5
    float totalIPK = 0;

    // Input Data
    cout << "Masukkan jumlah mahasiswa (1-5): ";
    cin >> n;
    cin.ignore(); // Membersihkan buffer

    for (int i = 0; i < n; i++) {
        cout << "\nData Mahasiswa ke-" << i + 1 << endl;
        cout << "NIM      : "; getline(cin, mhs[i].nim);
        cout << "Nama     : "; getline(cin, mhs[i].nama);
        cout << "Semester : "; cin >> mhs[i].semester;
        cout << "IPK      : "; cin >> mhs[i].ipk;
        cin.ignore();
        totalIPK += mhs[i].ipk;
    }

    // Menampilkan Tabel (Pertanyaan A)
    cout << "\n-------------------------------------------------------" << endl;
    cout << left << setw(4) << "No" << "| " << setw(12) << "NIM" << "| " << setw(15) << "Nama" << "| " << setw(10) << "Semester" << "| " << "IPK" << endl;
    cout << "-------------------------------------------------------" << endl;
    for (int i = 0; i < n; i++) {
        cout << left << setw(4) << i + 1 
             << "| " << setw(12) << mhs[i].nim 
             << "| " << setw(15) << mhs[i].nama 
             << "| " << setw(10) << mhs[i].semester 
             << "| " << fixed << setprecision(2) << mhs[i].ipk << endl;
    }

    // Pertanyaan B - Pencarian & Statistik
    // 1. IPK Tertinggi
    int indexTertinggi = 0;
    for (int i = 1; i < n; i++) {
        if (mhs[i].ipk > mhs[indexTertinggi].ipk) {
            indexTertinggi = i;
        }
    }
    cout << "\nMahasiswa dengan IPK Tertinggi:" << endl;
    cout << "Nama: " << mhs[indexTertinggi].nama << " (IPK: " << mhs[indexTertinggi].ipk << ")" << endl;

    // 2. Rata-rata IPK
    cout << "Rata-rata IPK seluruh mahasiswa: " << totalIPK / n << endl;

    // 3. Filter Semester
    int cariSmstr;
    bool ditemukan = false;
    cout << "\nMasukkan nomor semester yang dicari: ";
    cin >> cariSmstr;
    cout << "Daftar mahasiswa semester " << cariSmstr << ":" << endl;
    for (int i = 0; i < n; i++) {
        if (mhs[i].semester == cariSmstr) {
            cout << "- " << mhs[i].nama << " (" << mhs[i].nim << ")" << endl;
            ditemukan = true;
        }
    }
    if (!ditemukan) cout << "Tidak ada mahasiswa pada semester tersebut." << endl;

    return 0;
}
