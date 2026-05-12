#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

// Deklarasi struct untuk data mahasiswa
struct Mahasiswa {
    string nim;
    string nama;
    int semester;
    float ipk;
};

int main() {
    // Array untuk menyimpan data mahasiswa maksimal 5
    Mahasiswa mhs[5];
    int jumlah;
    
    cout << "=== PROGRAM MANAJEMEN DATA MAHASISWA ===" << endl;
    cout << endl;
    
    // Input jumlah mahasiswa
    cout << "Masukkan jumlah mahasiswa (1-5): ";
    cin >> jumlah;
    
    // Validasi input jumlah
    if (jumlah < 1 || jumlah > 5) {
        cout << "Jumlah mahasiswa harus antara 1-5!" << endl;
        return 0;
    }
    
    cout << endl;
    
    // Input data setiap mahasiswa
    for (int i = 0; i < jumlah; i++) {
        cout << "Data Mahasiswa ke-" << (i + 1) << endl;
        cout << "NIM        : ";
        cin >> mhs[i].nim;
        cin.ignore(); // Bersihkan buffer sebelum getline
        cout << "Nama       : ";
        getline(cin, mhs[i].nama);
        cout << "Semester   : ";
        cin >> mhs[i].semester;
        cout << "IPK        : ";
        cin >> mhs[i].ipk;
        cout << endl;
    }
    
    // Menampilkan data dalam bentuk tabel
    cout << "\n=== DATA SELURUH MAHASISWA ===" << endl;
    cout << setfill('=') << setw(75) << "=" << endl;
    cout << setfill(' ');
    cout << left << setw(15) << "NIM" 
         << setw(25) << "Nama" 
         << setw(10) << "Semester" 
         << setw(10) << "IPK" << endl;
    cout << setfill('=') << setw(75) << "=" << endl;
    cout << setfill(' ');
    
    for (int i = 0; i < jumlah; i++) {
        cout << left << setw(15) << mhs[i].nim
             << setw(25) << mhs[i].nama
             << setw(10) << mhs[i].semester
             << setw(10) << fixed << setprecision(2) << mhs[i].ipk << endl;
    }
    cout << setfill('=') << setw(75) << "=" << endl;
    cout << setfill(' ');
    int indexTertinggi = 0;
    for (int i = 1; i < jumlah; i++) {
        if (mhs[i].ipk > mhs[indexTertinggi].ipk) {
            indexTertinggi = i;
        }
    }
    
    cout << "\n=== MAHASISWA DENGAN IPK TERTINGGI ===" << endl;
    cout << "Nama     : " << mhs[indexTertinggi].nama << endl;
    cout << "NIM      : " << mhs[indexTertinggi].nim << endl;
    cout << "Semester : " << mhs[indexTertinggi].semester << endl;
    cout << "IPK      : " << fixed << setprecision(2) << mhs[indexTertinggi].ipk << endl;
  
    float totalIPK = 0;
    for (int i = 0; i < jumlah; i++) {
        totalIPK += mhs[i].ipk;
    }
    float rataIPK = totalIPK / jumlah;
    
    cout << "\n=== RATA-RATA IPK ===" << endl;
    cout << "Rata-rata IPK seluruh mahasiswa: " << fixed << setprecision(2) << rataIPK << endl;
    
    int cariSemester;
    cout << "\n=== PENCARIAN MAHASISWA BERDASARKAN SEMESTER ===" << endl;
    cout << "Masukkan nomor semester yang dicari: ";
    cin >> cariSemester;
    
    bool ditemukan = false;
    cout << "\nMahasiswa pada semester " << cariSemester << ":" << endl;
    
    for (int i = 0; i < jumlah; i++) {
        if (mhs[i].semester == cariSemester) {
            cout << "- " << mhs[i].nama << " (NIM: " << mhs[i].nim 
                 << ", IPK: " << fixed << setprecision(2) << mhs[i].ipk << ")" << endl;
            ditemukan = true;
        }
    }
    
    if (!ditemukan) {
        cout << "Tidak ada mahasiswa pada semester tersebut." << endl;
    }
    
    return 0;
}
