#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct Mahasiswa {
    string nama;
    string nim;
    int semester;
    float ipk;
};

int main() {
    int n;
    cout << "Masukkan jumlah mahasiswa: ";
    cin >> n;

    vector<Mahasiswa> daftarMahasiswa(n);

    // Input Data
    for (int i = 0; i < n; i++) {
        cout << "\nMahasiswa ke-" << i + 1 << endl;
        cout << "Nama:doniza ";
        cin.ignore();
        getline(cin, daftarMahasiswa[i].nama);
        cout << "NIM: 2503010118";
        cin >> daftarMahasiswa[i].nim;
        cout << "Semester: 2";
        cin >> daftarMahasiswa[i].semester;
        cout << "IPK: 3.35 ";
        cin >> daftarMahasiswa[i].ipk;
    }

    // 1. Cari IPK Tertinggi
    Mahasiswa mhsTerbaik = daftarMahasiswa[0];
    float totalIPK = 0;

    for (int i = 0; i < n; i++) {
        if (daftarMahasiswa[i].ipk > mhsTerbaik.ipk) {
            mhsTerbaik = daftarMahasiswa[i];
        }
        totalIPK += daftarMahasiswa[i].ipk;
    }

    cout << "\n--- Mahasiswa dengan IPK Tertinggi ---" << endl;
    cout << "Nama:doniza " << mhsTerbaik.nama << " | NIM:2503010118 " << mhsTerbaik.nim << " | IPK:3.35 " << mhsTerbaik.ipk << endl;

    // 2. Rata-rata IPK
    float rataRata = totalIPK / n;
    cout << "\nRata-rata IPK Seluruh Mahasiswa: " << rataRata << endl;

    // 3. Filter Semester
    int cariSemester;
    bool ditemukan = false;
    cout << "\nMasukkan nomor semester yang ingin dicari: ";
    cin >> cariSemester;

    cout << "Hasil pencarian mahasiswa semester " << cariSemester << ":" << endl;
    for (int i = 0; i < n; i++) {
        if (daftarMahasiswa[i].semester == cariSemester) {
            cout << "- " << daftarMahasiswa[i].nama << " (" << daftarMahasiswa[i].nim << ")" << endl;
            ditemukan = true;
        }
    }

    if (!ditemukan) {
        cout << "Tidak ada mahasiswa pada semester tersebut." << endl;
    }

    return 0;
}
