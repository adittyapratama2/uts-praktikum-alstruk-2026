#include <iostream>
#include <string>
#include <iomanip> // Diperlukan untuk merapikan tabel (setw)

using namespace std;

// PERTANYAAN A: Deklarasi Struct
struct Mahasiswa {
    string nim;
    string nama;
    int semester;
    float ipk;
};

int main() {
    // Array of struct dengan kapasitas maksimal 5
    Mahasiswa daftarMhs[5];
    int jumlah;

    cout << "=== Sistem Pengelolaan Data Mahasiswa ===\n" << endl;

    // Input jumlah mahasiswa dengan validasi (1-5)
    do {
        cout << "Masukkan jumlah mahasiswa (1-5): ";
        cin >> jumlah;
        if (jumlah < 1 || jumlah > 5) {
            cout << "Peringatan: Jumlah mahasiswa harus antara 1 sampai 5!" << endl;
        }
    } while (jumlah < 1 || jumlah > 5);

    // Input data mahasiswa
    for (int i = 0; i < jumlah; i++) {
        cout << "\nInput Data Mahasiswa ke-" << i + 1 << endl;
        cout << "NIM      : "; cin >> daftarMhs[i].nim;
        cin.ignore(); // Membersihkan buffer agar getline tidak terlewati
        cout << "Nama     : "; getline(cin, daftarMhs[i].nama);
        cout << "Semester : "; cin >> daftarMhs[i].semester;
        cout << "IPK      : "; cin >> daftarMhs[i].ipk;
    }

    // Menampilkan data dalam format tabel
    cout << "\nNo | " << left << setw(12) << "NIM" 
         << " | " << setw(18) << "Nama" 
         << " | " << setw(8) << "Semester" 
         << " | " << "IPK" << endl;
    cout << "---|--------------|--------------------|----------|------" << endl;

    for (int i = 0; i < jumlah; i++) {
        cout << left << setw(2) << i + 1 << " | " 
             << setw(12) << daftarMhs[i].nim << " | " 
             << setw(18) << daftarMhs[i].nama << " | " 
             << right << setw(8) << daftarMhs[i].semester << " | " 
             << fixed << setprecision(2) << daftarMhs[i].ipk << endl;
    }

    // PERTANYAAN B: Pencarian & Statistik
    cout << "\n" << string(55, '=') << endl;
    
    float totalIpk = 0;
    int indexTertinggi = 0;

    for (int i = 0; i < jumlah; i++) {
        // Mencari IPK tertinggi
        if (daftarMhs[i].ipk > daftarMhs[indexTertinggi].ipk) {
            indexTertinggi = i;
        }
        // Menjumlahkan IPK untuk rata-rata
        totalIpk += daftarMhs[i].ipk;
    }

    // 1. Tampilkan IPK Tertinggi
    cout << "Mahasiswa dengan IPK Tertinggi:" << endl;
    cout << "NIM: " << daftarMhs[indexTertinggi].nim 
         << ", Nama: " << daftarMhs[indexTertinggi].nama 
         << ", IPK: " << daftarMhs[indexTertinggi].ipk << endl;

    // 2. Hitung Rata-rata
    cout << "\nRata-rata IPK seluruh mahasiswa: " << fixed << setprecision(2) << totalIpk / jumlah << endl;

    // 3. Pencarian berdasarkan Semester
    int cariSemester;
    bool ditemukan = false;
    cout << "\nMasukkan nomor semester yang ingin dicari: ";
    cin >> cariSemester;

    cout << "Daftar Mahasiswa Semester " << cariSemester << ":" << endl;
    for (int i = 0; i < jumlah; i++) {
        if (daftarMhs[i].semester == cariSemester) {
            cout << "- " << daftarMhs[i].nama << " (" << daftarMhs[i].nim << ")" << endl;
            ditemukan = true;
        }
    }

    if (!ditemukan) {
        cout << "Tidak ada mahasiswa pada semester tersebut." << endl;
    }

    return 0;
}

