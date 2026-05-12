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

// ── Tampilkan tabel ──────────────────────────────────────────
void tampilkanTabel(Mahasiswa mhs[], int n) {
    cout << "\n"
         << left
         << setw(4)  << "No"
         << "| " << setw(11) << "NIM"
         << "| " << setw(16) << "Nama"
         << "| " << setw(9)  << "Semester"
         << "| IPK\n"
         << string(3,'-')  << "|" << string(12,'-') << "|"
         << string(16,'-') << "|" << string(10,'-') << "|"
         << string(6,'-')  << "\n";

    for (int i = 0; i < n; i++) {
        cout << left  << setw(4)  << (i + 1)
             << "| " << setw(11) << mhs[i].nim
             << "| " << setw(16) << mhs[i].nama
             << "| " << right << setw(8) << mhs[i].semester
             << " | " << fixed << setprecision(2) << mhs[i].ipk << "\n";
    }
}

// ── IPK tertinggi ────────────────────────────────────────────
void cariIPKTertinggi(Mahasiswa mhs[], int n) {
    int idx = 0;
    for (int i = 1; i < n; i++)
        if (mhs[i].ipk > mhs[idx].ipk) idx = i;

    cout << "\n=== MAHASISWA DENGAN IPK TERTINGGI ===\n"
         << "NIM      : " << mhs[idx].nim      << "\n"
         << "Nama     : " << mhs[idx].nama     << "\n"
         << "Semester : " << mhs[idx].semester << "\n"
         << "IPK      : " << fixed << setprecision(2) << mhs[idx].ipk << "\n";
}

// ── Rata-rata IPK ────────────────────────────────────────────
void hitungRataRata(Mahasiswa mhs[], int n) {
    float total = 0;
    for (int i = 0; i < n; i++) total += mhs[i].ipk;
    cout << "\n=== RATA-RATA IPK ===\n"
         << "Rata-rata IPK: " << fixed << setprecision(2) << (total / n) << "\n";
}

// ── Cari per semester ────────────────────────────────────────
void cariPerSemester(Mahasiswa mhs[], int n) {
    int sem;
    cout << "\n=== CARI MAHASISWA PER SEMESTER ===\n"
         << "Masukkan nomor semester: ";
    cin >> sem;

    bool ditemukan = false;
    cout << "\nMahasiswa pada Semester " << sem << ":";

    // Kumpulkan yang cocok ke array sementara
    Mahasiswa hasil[5];
    int k = 0;
    for (int i = 0; i < n; i++)
        if (mhs[i].semester == sem) hasil[k++] = mhs[i];

    if (k == 0) {
        cout << "\nTidak ada mahasiswa pada semester tersebut.\n";
    } else {
        tampilkanTabel(hasil, k);
    }
}

// ── Main ─────────────────────────────────────────────────────
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

    cariIPKTertinggi(mhs, n);
    hitungRataRata(mhs, n);
    cariPerSemester(mhs, n);

    return 0;
}