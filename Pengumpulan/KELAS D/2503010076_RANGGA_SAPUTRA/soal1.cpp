#include <iostream>
#include <string>

using namespace std;

// Deklarasi Struct
struct Mahasiswa {
    string nim;
    string nama;
    int semester;
    float ipk;
};

int main() {
    Mahasiswa mhs[5];
    int jumlah;

    cout << "=== PROGRAM DATA MAHASISWA ===\n\n";
    
    // Minta input jumlah mahasiswa
    do {
        cout << "Masukkan jumlah mahasiswa (1-5): ";
        cin >> jumlah;
        if (jumlah < 1 || jumlah > 5) {
            cout << "Input tidak valid! Harap masukkan angka 1 hingga 5.\n";
        }
    } while (jumlah < 1 || jumlah > 5);

    cin.ignore(); 

    // Input data tiap mahasiswa
    for (int i = 0; i < jumlah; i++) {
        cout << "\nInput Data Mahasiswa Ke-" << i + 1 << endl;
        cout << "NIM      : ";
        getline(cin, mhs[i].nim);
        cout << "Nama     : ";
        getline(cin, mhs[i].nama);
        cout << "Semester : ";
        cin >> mhs[i].semester;
        cout << "IPK      : ";
        cin >> mhs[i].ipk;
        cin.ignore(); 
    }

    // Menampilkan format tabel TANPA iomanip (menggunakan Tab \t)
    cout << "\n========================================================\n";
    cout << "No\t| NIM\t\t| Nama\t\t\t| Sem\t| IPK\n";
    cout << "========================================================\n";
    for (int i = 0; i < jumlah; i++) {
        cout << i + 1 << "\t| " 
             << mhs[i].nim << "\t| " 
             << mhs[i].nama << "\t\t| " 
             << mhs[i].semester << "\t| " 
             << mhs[i].ipk << "\n";
    }
    cout << "========================================================\n";

    // --- PROSES STATISTIK & PENCARIAN (BAGIAN B) ---
    
    float totalIPK = 0;
    int idxTertinggi = 0;

    for (int i = 0; i < jumlah; i++) {
        totalIPK += mhs[i].ipk;
        if (mhs[i].ipk > mhs[idxTertinggi].ipk) {
            idxTertinggi = i; 
        }
    }

    cout << "\n=== STATISTIK MAHASISWA ===\n";
    cout << "1. Mahasiswa dengan IPK Tertinggi:\n";
    cout << "   - Nama : " << mhs[idxTertinggi].nama << "\n";
    cout << "   - NIM  : " << mhs[idxTertinggi].nim << "\n";
    cout << "   - IPK  : " << mhs[idxTertinggi].ipk << "\n";
    cout << "2. Rata-rata IPK Seluruh Mahasiswa: " << (totalIPK / jumlah) << "\n";

    // Pencarian Berdasarkan Semester
    int cariSemester;
    bool ada = false;
    
    cout << "\n=== PENCARIAN DATA ===\n";
    cout << "Masukkan nomor semester yang dicari: ";
    cin >> cariSemester;

    cout << "Daftar mahasiswa di semester " << cariSemester << ":\n";
    for (int i = 0; i < jumlah; i++) {
        if (mhs[i].semester == cariSemester) {
            cout << "- " << mhs[i].nama << " (NIM: " << mhs[i].nim << ", IPK: " << mhs[i].ipk << ")\n";
            ada = true;
        }
    }

    if (!ada) {
        cout << "Tidak ada mahasiswa pada semester tersebut.\n";
    }

    return 0;
}
