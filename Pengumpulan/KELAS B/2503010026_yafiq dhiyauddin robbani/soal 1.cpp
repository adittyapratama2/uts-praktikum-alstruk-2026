#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

// Struktur data mahasiswa
struct mahasiswa {
    string nama;
    string nim;
    string kelas; // Bisa dianggap representasi semester/kelas
    int semester; // Menambahkan variabel semester sesuai soal
    float nilai;  // Dalam konteks ini diasumsikan sebagai IPK
};

int main() {
    mahasiswa mhs[5];
    int jumlah;

    cout << "masukan jumlah mahasiswa 1-5 :";
    cin >> jumlah;
    if (jumlah < 1 || jumlah > 5) {
        cout << "jumlah tidak validd!! program berakhir" << endl;
        return 0;
    }

    float totalNilai = 0; // Digunakan untuk menghitung rata-rata

    for (int i = 0; i < jumlah; i++) {
        cout << "\ndata mahasiswa ke-" << i + 1 << endl;
        cin.ignore();

        cout << "nim         :";
        getline(cin, mhs[i].nim);

        cout << "nama        :";
        getline(cin, mhs[i].nama);

        cout << "semester    :";
        cin >> mhs[i].semester;

        cout << "nilai (IPK) :";
        cin >> mhs[i].nilai;

        // Akumulasi nilai untuk rata-rata
        totalNilai += mhs[i].nilai;
    }

    // --- Menampilkan Tabel Data ---
    cout << "\n-----------------------------------------------------------\n";
    cout << left << setw(4) << "No" 
         << "| " << setw(10) << "NIM" 
         << "| " << setw(15) << "Nama" 
         << "| " << setw(10) << "Semester" 
         << "| " << setw(5) << "IPK" << endl;
    cout << "-----------------------------------------------------------\n";

    for (int i = 0; i < jumlah; i++) {
        cout << left << setw(4) << i + 1 
             << "| " << setw(10) << mhs[i].nim 
             << "| " << setw(15) << mhs[i].nama 
             << "| " << setw(10) << mhs[i].semester 
             << "| " << setw(5) << fixed << setprecision(2) << mhs[i].nilai << endl;
    }
    cout << "-----------------------------------------------------------\n";

    // 1. Menampilkan Rata-rata IPK (Poin B.2)
    float rataRata = totalNilai / jumlah;
    cout << "\n[STATISTIK]" << endl;
    cout << "Rata-rata IPK seluruh mahasiswa: " << fixed << setprecision(2) << rataRata << endl;

    // 2. Mencari Mahasiswa dengan IPK Tertinggi (Poin B.1)
    int indeksTertinggi = 0;
    for (int i = 1; i < jumlah; i++) {
        if (mhs[i].nilai > mhs[indeksTertinggi].nilai) {
            indeksTertinggi = i;
        }
    }
    cout << "Mahasiswa IPK Tertinggi: " << mhs[indeksTertinggi].nama 
         << " (NIM: " << mhs[indeksTertinggi].nim 
         << ", IPK: " << mhs[indeksTertinggi].nilai << ")" << endl;

    // 3. Pencarian berdasarkan Semester (Poin B.3)
    int cariSemester;
    bool ditemukan = false;
    cout << "\nMasukkan nomor semester yang ingin dicari: ";
    cin >> cariSemester;

    cout << "\n--- Hasil Pencarian Semester " << cariSemester << " ---\n";
    for (int i = 0; i < jumlah; i++) {
        if (mhs[i].semester == cariSemester) {
            cout << "- Nama: " << mhs[i].nama << " | NIM: " << mhs[i].nim << " | IPK: " << mhs[i].nilai << endl;
            ditemukan = true;
        }
    }

    if (!ditemukan) {
        cout << "Pesan: Tidak ada mahasiswa pada semester tersebut." << endl;
    }

    return 0;
}
