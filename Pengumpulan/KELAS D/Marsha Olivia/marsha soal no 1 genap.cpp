#include <iostream>
#include <string>
#include <iomanip> 

using namespace std;

// a struck 
struct Mahasiswa {
    string nim;
    string nama;
    int semester;
    float ipk;
};

int main() {
    // Kapasitas maksimal sesuai soal
    Mahasiswa daftarMhs[5];
    int jumlah;

    cout << "=== PROGRAM PENGELOLA DATA MAHASISWA ===" << endl;
    
    // kapasitas max 
    do {
        cout << "Berapa banyak mahasiswa yang ingin diinput (1-5)? ";
        cin >> jumlah;
        if (jumlah < 1 || jumlah > 5) {
            cout << "[!] Mohon masukkan angka antara 1 sampai 5 saja ya.\n";
        }
    } while (jumlah < 1 || jumlah > 5);

    
    for (int i = 0; i < jumlah; i++) {
        cout << "\n--- Mengisi Data Mahasiswa Ke-" << i + 1 << " ---" << endl;
        cout << "NIM      : "; cin >> daftarMhs[i].nim;
        cin.ignore(); // Membersihkan buffer setelah input NIM
        cout << "Nama     : "; getline(cin, daftarMhs[i].nama);
        cout << "Semester : "; cin >> daftarMhs[i].semester;
        cout << "IPK      : "; cin >> daftarMhs[i].ipk;
    }

    // Menampilkan Tabel 
    cout << "\n===========================================================" << endl;
    cout << "No | NIM          | Nama                | Semester | IPK  " << endl;
    cout << "-----------------------------------------------------------" << endl;
    for (int i = 0; i < jumlah; i++) {
        cout << i + 1 << "  | ";
        cout << left << setw(12) << daftarMhs[i].nim << " | ";
        cout << setw(19) << daftarMhs[i].nama << " | ";
        cout << setw(8) << daftarMhs[i].semester << " | ";
        cout << fixed << setprecision(2) << daftarMhs[i].ipk << endl;
    }
    cout << "-----------------------------------------------------------" << endl;

    // B Perhitungan 
    
    // 1. Mencari IPK Tertinggi
    int indeksTertinggi = 0;
    float totalIpk = 0;

    for (int i = 0; i < jumlah; i++) {
        // Cek IPK tertinggi
        if (daftarMhs[i].ipk > daftarMhs[indeksTertinggi].ipk) {
            indeksTertinggi = i;
        }
        // Tambahkan ke total untuk rata-rata nanti
        totalIpk += daftarMhs[i].ipk;
    }

    cout << "\n[INFO] Mahasiswa dengan IPK tertinggi diraih oleh:" << endl;
    cout << "Nama: " << daftarMhs[indeksTertinggi].nama << " dengan IPK " << daftarMhs[indeksTertinggi].ipk << endl;

    // Hitung Rata rata 
    float rataRata = totalIpk / jumlah;
    cout << "[INFO] Rata-rata IPK seluruh mahasiswa: " << fixed << setprecision(2) << rataRata << endl;


    int cariSemester;
    bool ketemu = false;
    cout << "\nIngin melihat daftar mahasiswa semester berapa? ";
    cin >> cariSemester;

    cout << "Hasil pencarian di semester " << cariSemester << ":" << endl;
    for (int i = 0; i < jumlah; i++) {
        if (daftarMhs[i].semester == cariSemester) {
            cout << "- " << daftarMhs[i].nama << " (NIM: " << daftarMhs[i].nim << ")" << endl;
            ketemu = true;
        }
    }

    if (!ketemu) {
        cout << "Tidak ada mahasiswa pada semester tersebut." << endl;
    }

    cout << "\n==========================================" << endl;
    cout << "      Program Selesai, Terima Kasih!      " << endl;

    return 0;
}
