#include <iostream>
#include <iomanip>
using namespace std;

struct mahasiswa{
    string nama;
    string nim;
    int semester;    
    float ipk;
};

int main () {

    int jumlh;
    float ratarata = 0;
    float totalipk = 0;
    int ipktertinggi = 0;

    cout << "Masukan Jumlah Mahasiswa (1-5) : ";
    cin >> jumlh;

    mahasiswa mhs[jumlh];

    for (int a = 0; a < jumlh; a++) {

        cout << "\nMasukan Mahasiswa Ke-" << a + 1 << endl;

        cin.ignore();

        cout << "Masukan NIM : ";
        cin >> mhs[a].nim;

        cin.ignore();

        cout << "Masukan Nama : ";
        getline(cin, mhs[a].nama);

        cout << "Masukan Semester : ";
        cin >> mhs[a].semester;

        cout << "Masukan IPK : ";
        cin >> mhs[a].ipk;
    }

    // output table
    cout << "\n================ DATA MAHASISWA ================\n";

    cout << "| "
         << left << setw(15) << "NIM"
         << "| " << setw(25) << "Nama"
         << "| " << setw(10) << "Semester"
         << "| " << setw(8) << "IPK"
         << "|" << endl;

    cout << "---------------------------------------------------------------\n";

    for (int a = 0; a < jumlh; a++) {

        cout << "| "
             << left << setw(15) << mhs[a].nim
             << "| " << setw(25) << mhs[a].nama
             << "| " << setw(10) << mhs[a].semester
             << "| " << setw(8) << fixed << setprecision(2) << mhs[a].ipk
             << "|" << endl;

        // total IPK
        totalipk += mhs[a].ipk;

        // cek IPK tertinggi
        if (mhs[a].ipk > mhs[ipktertinggi].ipk) {
            ipktertinggi = a;
        }
    }

    // rata-rata
    ratarata = totalipk / jumlh;

    cout << "\nRata-rata IPK : "
     << ratarata << endl;

    cout << "\nMahasiswa dengan IPK Tertinggi : " <<endl;
    cout << "NIM: " << mhs[ipktertinggi].nim <<endl;
    cout << "Nama: " << mhs[ipktertinggi].nama <<endl;
    cout << "Semester: " << mhs[ipktertinggi].semester <<endl;
    cout << "IPK: " << fixed <<setprecision(2) <<mhs[ipktertinggi].ipk <<endl;

    int cariSemester;
    bool ditemukan = false;

    cout << "\nMasukan nomor semester yang dicari : ";
    cin >> cariSemester;

    cout << "\nMahasiswa pada semester " << cariSemester << " :\n";

    for (int a = 0; a < jumlh; a++) {

        if (mhs[a].semester == cariSemester) {

            ditemukan = true;

            cout << "--------------------------\n";
            cout << "NIM      : " << mhs[a].nim << endl;
            cout << "Nama     : " << mhs[a].nama << endl;
            cout << "Semester : " << mhs[a].semester << endl;
            cout << "IPK      : " << mhs[a].ipk << endl;
        }
    }

    if (ditemukan == false) {
        cout << "Tidak ada mahasiswa pada semester tersebut." << endl;
    }

    return 0;
}