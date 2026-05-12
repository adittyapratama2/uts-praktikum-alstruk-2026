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
    Mahasiswa data[5];
    int n;

    cout << "Masukkan jumlah mahasiswa (1-5): ";
    cin >> n;
    if (n < 1 || n > 5) {
        cout << "Jumlah tidak valid!" << endl;
        return 1;
    }
    cin.ignore();

    for (int i = 0; i < n; i++) {
        cout << "\n--- Mahasiswa ke-" << i+1 << " ---" << endl;
        cout << "NIM    : "; getline(cin, data[i].nim);
        cout << "Nama   : "; getline(cin, data[i].nama);
        cout << "Semester: "; cin >> data[i].semester;
        cout << "IPK    : "; cin >> data[i].ipk;
        cin.ignore();
    }

    // tabel
    cout << "\nNo | NIM        | Nama           | Semester |  IPK" << endl;
    cout << "---|------------|----------------|----------|------" << endl;
    for (int i = 0; i < n; i++) {
        cout << setw(2) << i+1 << " | "
             << setw(10) << left << data[i].nim << " | "
             << setw(14) << left << data[i].nama << " | "
             << setw(8) << right << data[i].semester << " | "
             << fixed << setprecision(2) << data[i].ipk << endl;
    }

    // IPK tertinggi
    int idxMaks = 0;
    for (int i = 1; i < n; i++) {
        if (data[i].ipk > data[idxMaks].ipk)
            idxMaks = i;
    }
    cout << "\n=== Mahasiswa dengan IPK Tertinggi ===" << endl;
    cout << "NIM      : " << data[idxMaks].nim << endl;
    cout << "Nama     : " << data[idxMaks].nama << endl;
    cout << "Semester : " << data[idxMaks].semester << endl;
    cout << "IPK      : " << fixed << setprecision(2) << data[idxMaks].ipk << endl;

    // rata-rata IPK
    float total = 0;
    for (int i = 0; i < n; i++) total += data[i].ipk;
    cout << "\nRata-rata IPK: " << fixed << setprecision(2) << total/n << endl;

    // mahasiswa berdasarkan semester
    int cariSem;
    cout << "\nMasukkan semester yang dicari: ";
    cin >> cariSem;

    bool ketemu = false;
    cout << "\n=== Mahasiswa Semester " << cariSem << " ===" << endl;
    for (int i = 0; i < n; i++) {
        if (data[i].semester == cariSem) {
            cout << "- " << data[i].nama << " (" << data[i].nim << "), IPK: " 
                 << fixed << setprecision(2) << data[i].ipk << endl;
            ketemu = true;
        }
    }
    if (!ketemu)
        cout << "Tidak ada mahasiswa pada semester tersebut." << endl;

    return 0;
}