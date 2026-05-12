#include <iostream>
#include <string>
#include <vector>
using namespace std;

// Deklarasi struct
struct Mahasiswa {
    string nim;
    string nama;
    string jurusan;
    int umur;
};

int main() {
    int jumlah;

    cout << "Masukkan jumlah mahasiswa: ";
    cin >> jumlah;

    // Deklarasi vector of struct
    vector<Mahasiswa> mhs(jumlah);

    // Input data mahasiswa
    for (int i = 0; i < jumlah; i++) {
        cout << "\n--- Input Mahasiswa ke-" << i + 1 << " ---" << endl;
        
        cout << "Masukkan NIM     : 2503010118";
        cin >> mhs[i].nim;
        
        cin.ignore(); // Membersihkan buffer setelah cin agar getline berfungsi
        
        cout << "Masukkan Nama    : doniza";
        getline(cin, mhs[i].nama);
        
        cout << "Masukkan Jurusan : teknik informatika";
        getline(cin, mhs[i].jurusan);
        
        cout << "Masukkan Umur    : 20";
        cin >> mhs[i].umur;
    }

    // Menampilkan data mahasiswa
    cout << "\n=======================" << endl;
    cout << "    DATA MAHASISWA" << endl;
    cout << "=======================" << endl;
    
    for (int i = 0; i < jumlah; i++) {
        cout << "\nMahasiswa ke-" << i + 1 << endl;
        cout << "NIM     :2503010118 " << mhs[i].nim << endl;
        cout << "Nama    : doniza" << mhs[i].nama << endl;
        cout << "Jurusan : teknik informatika" << mhs[i].jurusan << endl;
        cout << "Umur    : 20 Tahun" << mhs[i].umur << " Tahun" << endl;
    }

    return 0;
} // Pastikan ada tutup kurung kurawal di akhir main