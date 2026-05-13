#include <iostream>
#include <string>

using namespace std;

#define MAX 5

// Pertanyaan A: Deklarasi Struct sesuai instruksi
struct Mahasiswa {
    string nim;
    string nama;
    int semester;
    float ipk;
};

// Fungsi untuk menampilkan data dalam format tabel tanpa iomanip
void tampilkanTabel(Mahasiswa data[], int n) {
    cout << "\nNo | NIM        | Nama            | Semester | IPK" << endl;
    cout << "------------------------------------------------------" << endl;
    for (int i = 0; i < n; i++) {
        cout << i + 1 << "  | " 
             << data[i].nim << "\t| " 
             << data[i].nama << "\t  | " 
             << data[i].semester << "\t     | " 
             << data[i].ipk << endl;
    }
}

// Pertanyaan B: Mencari mahasiswa dengan IPK tertinggi
void tampilkanTertinggi(Mahasiswa data[], int n) {
    int idx = 0;
    for (int i = 1; i < n; i++) {
        if (data[i].ipk > data[idx].ipk) {
            idx = i;
        }
    }
    cout << "\nMahasiswa dengan IPK Tertinggi:" << endl;
    cout << "Nama     : " << data[idx].nama << " (IPK: " << data[idx].ipk << ")" << endl;
}

// Pertanyaan B: Hitung rata-rata IPK
void tampilkanRataRata(Mahasiswa data[], int n) {
    float total = 0;
    for (int i = 0; i < n; i++) {
        total += data[i].ipk;
    }
    cout << "Rata-rata IPK: " << total / n << endl;
}

// Pertanyaan B: Cari mahasiswa berdasarkan semester
void cariBerdasarkanSemester(Mahasiswa data[], int n) {
    int sem;
    bool ditemukan = false;
    cout << "\nMasukkan nomor semester yang ingin dicari: ";
    cin >> sem;

    cout << "Daftar Mahasiswa Semester " << sem << ":" << endl;
    for (int i = 0; i < n; i++) {
        if (data[i].semester == sem) {
            cout << "- " << data[i].nama << " (" << data[i].nim << ")" << endl;
            ditemukan = true;
        }
    }
    if (!ditemukan) {
        // Pesan error sesuai instruksi soal
        cout << "Tidak ada mahasiswa pada semester tersebut." << endl;
    }
}

int main() {
    Mahasiswa mhs[MAX];
    int n;

    // Input jumlah mahasiswa (1-5)
    cout << "Masukkan jumlah mahasiswa (1-5): ";
    cin >> n;

    if (n < 1 || n > MAX) {
        cout << "Jumlah tidak valid!" << endl;
        return 0;
    }

    // Input data tiap mahasiswa
    for (int i = 0; i < n; i++) {
        cout << "\nInput Data Mahasiswa ke-" << i + 1 << endl;
        cout << "NIM      : "; cin >> mhs[i].nim;
        cin.ignore(); 
        cout << "Nama     : "; getline(cin, mhs[i].nama);
        cout << "Semester : "; cin >> mhs[i].semester;
        cout << "IPK      : "; cin >> mhs[i].ipk;
    }

    // Eksekusi fungsi sesuai instruksi soal
    tampilkanTabel(mhs, n);
    tampilkanTertinggi(mhs, n);
    tampilkanRataRata(mhs, n);
    cariBerdasarkanSemester(mhs, n);

    return 0;
}
