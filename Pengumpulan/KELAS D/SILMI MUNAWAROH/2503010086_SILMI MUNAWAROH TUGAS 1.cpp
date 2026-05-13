#include <iostream>
#include <iomanip>
using namespace std;

struct mahasiswa {
    string nim;
    string nama;
    string semester;
    float ipk;
};

int main () {

    mahasiswa mhs[5];
    int n;

    cout << "masukan jumlah mahasiswa: ";
    cin >> n;

    for (int i=0; i<n; i++) {

        cout << "\nData Mahasiswa ke-" << i+1 << endl;

        cout << "NIM: ";
        cin >> mhs[i].nim;
        cin.ignore();

        cout << "Nama: ";
        getline(cin, mhs[i].nama);

        cout << "Semester: ";
        cin >> mhs[i].semester;

        cout << "IPK: ";
        cin >> mhs[i].ipk;
    }

    cout << "\n===== Data Mahasiswa =====\n";
    cout << "------------------------------\n";

    cout << left << setw(5) << "No"
         << setw(15) << "NIM"
         << setw(20) << "Nama"
         << setw(10) << "Semester"
         << setw(10) << "IPK" << endl;

    for(int i=0; i<n; i++) {

        cout << left << setw(5) << i+1
             << setw(15) << mhs[i].nim
             << setw(20) << mhs[i].nama
             << setw(10) << mhs[i].semester
             << setw(10) << mhs[i].ipk
             << endl;
    }

    int max = 0;
    float total = 0;

    for(int i=0; i<n; i++){
        total += mhs[i].ipk;

        if(mhs[i].ipk > mhs[max].ipk) {
            max = i;
        }
    }

    cout << "\n=== Mahasiswa IPK Tertinggi ===\n";

    cout << "NIM: " << mhs[max].nim << endl;

    cout << "Nama: " << mhs[max].nama << endl;

    cout << "Semester: " << mhs[max].semester << endl;

    cout << "IPK: " << mhs[max].ipk << endl;

    cout << "\nRata rata IPK: " << total/n
         << endl;

    string cariSemester;
    bool ditemukan = false;

    cout << "\nmasukan semester: ";
    cin >> cariSemester;

    cout << "\n=== Data Semester "
         << cariSemester << " ===\n";

    for (int i=0; i<n; i++) {

        if(mhs[i].semester == cariSemester){

            cout << mhs[i].nim << "|"
                 << mhs[i].nama << "|"
                 << mhs[i].ipk << endl;

            ditemukan = true;
        }
    }

    if(!ditemukan) {

        cout << "tidak ada mahasiswa pada semester tersebut!";
    }
return 0;
}
