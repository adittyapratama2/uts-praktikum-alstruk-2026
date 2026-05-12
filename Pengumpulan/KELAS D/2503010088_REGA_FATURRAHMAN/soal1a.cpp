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

void tampilkanTabel(Mahasiswa mhs[], int n) {
    cout << "\n";
    cout << left
         << setw(4)  << "No"
         << "| " << setw(11) << "NIM"
         << "| " << setw(16) << "Nama"
         << "| " << setw(9)  << "Semester"
         << "| " << "IPK" << "\n";
    cout << string(3,'-') << "|" << string(12,'-') << "|"
         << string(16,'-') << "|" << string(10,'-') << "|"
         << string(6,'-') << "\n";

    for (int i = 0; i < n; i++) {
        cout << left  << setw(4)  << (i + 1)
             << "| " << setw(11) << mhs[i].nim
             << "| " << setw(16) << mhs[i].nama
             << "| " << right << setw(8) << mhs[i].semester
             << " | " << fixed << setprecision(2) << mhs[i].ipk
             << "\n";
    }
}

int main() {
    const int MAX = 5;
    Mahasiswa mhs[MAX];
    int n;

    cout << "=== INPUT DATA MAHASISWA ===\n";
    do {
        cout << "Masukkan jumlah mahasiswa (1-5): ";
        cin >> n;
    } while (n < 1 || n > 5);

    cin.ignore();
    for (int i = 0; i < n; i++) {
        cout << "\n-- Mahasiswa ke-" << (i + 1) << " --\n";
        cout << "NIM      : "; getline(cin, mhs[i].nim);
        cout << "Nama     : "; getline(cin, mhs[i].nama);
        cout << "Semester : "; cin >> mhs[i].semester;
        cout << "IPK      : "; cin >> mhs[i].ipk;
        cin.ignore();
    }

    cout << "\n=== DATA MAHASISWA ===";
    tampilkanTabel(mhs, n);

    return 0;
}

