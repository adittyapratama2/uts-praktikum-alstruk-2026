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
    cin >> jumlah;


    if (jumlah < 1 || jumlah > 5) {
        cout << "Jumlah mahasiswa tidak valid!" << endl;
        return 0;
    }

    cin.ignore();


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

    cout << "\nDATA MAHASISWA\n" << endl;

    cout << left
         << setw(5) << "No"
         << setw(15) << "NIM"
         << setw(20) << "Nama"
         << setw(12) << "Semester"
         << setw(10) << "IPK"
         << endl;

    cout << "------------------------------------------------------------"
         << endl;

    for (int i = 0; i < jumlah; i++) {

        cout << left
             << setw(5) << i + 1
             << setw(15) << mhs[i].nim
             << setw(20) << mhs[i].nama
             << setw(12) << mhs[i].semester
             << setw(10) << fixed
             << setprecision(2)
             << mhs[i].ipk
             << endl;
    }


    int tertinggi = 0;

    for (int i = 1; i < jumlah; i++) {

        if (mhs[i].ipk > mhs[tertinggi].ipk) {
            tertinggi = i;
        }
    }

    cout << "\nMAHASISWA DENGAN IPK TERTINGGI"
         << endl;

    cout << "Nama      : "
         << mhs[tertinggi].nama
         << endl;

    cout << "NIM       : "
         << mhs[tertinggi].nim
         << endl;

    cout << "Semester  : "
         << mhs[tertinggi].semester
         << endl;

    cout << "IPK       : "
         << mhs[tertinggi].ipk
         << endl;

  
    float total = 0;

    for (int i = 0; i < jumlah; i++) {
        total += mhs[i].ipk;
    }

    float rata = total / jumlah;

    cout << "\nRata-rata IPK : "
         << rata
         << endl;

    
    int cariSemester;
    bool ditemukan = false;

    cout << "\nMasukkan semester yang dicari : ";
    cin >> cariSemester;

    cout << "\nMahasiswa Semester "
         << cariSemester
         << " :"
         << endl;

    for (int i = 0; i < jumlah; i++) {

        if (mhs[i].semester == cariSemester) {

            cout << "- "
                 << mhs[i].nama
                 << " ("
                 << mhs[i].nim
                 << ")"
                 << endl;

            ditemukan = true;
        }
    }

    if (!ditemukan) {

        cout << "Tidak ada mahasiswa pada semester tersebut."
             << endl;
    }

    return 0;
}
