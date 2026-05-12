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
    Mahasiswa mhs[5];
    int jumlah;

    // Input jumlah mahasiswa
    cout << "Masukkan jumlah mahasiswa (1-5): ";
    cin >> jumlah;

    // Validasi jumlah
    while (jumlah < 1 || jumlah > 5) {
        cout << "Jumlah harus 1 sampai 5!\n";
        cout << "Masukkan jumlah mahasiswa lagi: ";
        cin >> jumlah;
    }

    // Input data mahasiswa
    for (int i = 0; i < jumlah; i++) {
        cout << "\nData Mahasiswa ke-" << i + 1 << endl;

        cout << "NIM 	  : ";
        cin >> mhs[i].nim;

        cin.ignore();

        cout << "Nama  	  : ";
        getline(cin, mhs[i].nama);

        cout << "Semester  : ";
        cin >> mhs[i].semester;

        cout << "IPK       : ";
        cin >> mhs[i].ipk;
    }

    // Menampilkan tabel data mahasiswa
    cout << "\n==================== DATA MAHASISWA ====================\n";

    cout << left
         << setw(5)  << "No"
         << setw(15) << "NIM"
         << setw(20) << "Nama"
         << setw(10) << "Semester"
         << setw(10) << "IPK" << endl;

    cout << "---------------------------------------------------------\n";

    for (int i = 0; i < jumlah; i++) {
        cout << left
             << setw(5)  << i + 1
             << setw(15) << mhs[i].nim
             << setw(20) << mhs[i].nama
             << setw(10) << mhs[i].semester
             << setw(10) << mhs[i].ipk << endl;
    }

    // Mencari nilai tertinggi
    int indeksTertinggi = 0;

    for (int i = 1; i < jumlah; i++) {
        if (mhs[i].ipk > mhs[indeksTertinggi].ipk) {
            indeksTertinggi = i;
        }
    }

    cout << "\n========== MAHASISWA DENGAN NILAI TERTINGGI ==========\n";
    cout << "Nama     : " << mhs[indeksTertinggi].nama << endl;
    cout << "NIM      : " << mhs[indeksTertinggi].nim << endl;
    cout << "Semester : " << mhs[indeksTertinggi].semester << endl;
    cout << "IPK   	 : " << mhs[indeksTertinggi].ipk << endl;

    // Menghitung rata-rata nilai
    float total = 0;

    for (int i = 0; i < jumlah; i++) {
        total += mhs[i].ipk;
    }

    float rataRata = total / jumlah;

    cout << "\nRata-rata IPK mahasiswa = " << rataRata << endl;

    // Cari mahasiswa berdasarkan kelas
    int cariSemester;
    bool ditemukan = false;

    cin.ignore();

    cout << "\nMasukkan Nomor Semester yang ingin dicari: ";
    cin >> cariSemester;

    cout << "\n===== DATA MAHASISWA SEMESTER " << cariSemester << " =====\n";

    for (int i = 0; i < jumlah; i++) {
        if (mhs[i].semester == cariSemester) {
            cout << "NIM      : " << mhs[i].nim << endl;
            cout << "Nama     : " << mhs[i].nama << endl;
            cout << "Semester : " << mhs[i].semester << endl;
            cout << "-----------------------------------\n";

            ditemukan = true;
        }
    }

    if (!ditemukan) {
        cout << "Tidak ada mahasiswa Pada Semester tersebut.\n";
    }

    return 0;
}
