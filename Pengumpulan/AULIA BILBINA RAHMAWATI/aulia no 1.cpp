#include <iostream>
#include <string>
#include <vector>
#include <iomanip> // Untuk merapikan format tabel dan desimal

using namespace std;

// Deklarasi Struct Buku (Pertanyaan A)
struct Buku {
    string judul;
    string pengarang;
    int tahunTerbit;
    float harga;
};

int main() {
    int jumlah;
    Buku daftarBuku[5]; // Array of struct dengan kapasitas maksimal 5

    // Input Data (Pertanyaan A)
    cout << "Masukkan jumlah buku (1-5): ";
    cin >> jumlah;

    // Validasi input agar tidak melebihi kapasitas array
    if (jumlah > 5 || jumlah < 1) {
        cout << "Jumlah tidak valid!" << endl;
        return 0;
    }

    cin.ignore(); // Membersihkan buffer setelah input angka agar getline berfungsi

    for (int i = 0; i < jumlah; i++) {
        cout << "\nData Buku ke-" << i + 1 << endl;
        cout << "Judul        : "; getline(cin, daftarBuku[i].judul);
        cout << "Pengarang    : "; getline(cin, daftarBuku[i].pengarang);
        cout << "Tahun Terbit : "; cin >> daftarBuku[i].tahunTerbit;
        cout << "Harga        : "; cin >> daftarBuku[i].harga;
        cin.ignore(); 
    }

    // Menampilkan Tabel (Pertanyaan A)
    cout << "\n" << setfill('=') << setw(70) << "" << endl;
    cout << setfill(' ');
    cout << left << setw(4) << "No" 
         << "| " << setw(20) << "Judul" 
         << "| " << setw(15) << "Pengarang" 
         << "| " << setw(6) << "Tahun" 
         << "| Harga" << endl;
    cout << "----|---------------------|----------------|-------|----------" << endl;

    for (int i = 0; i < jumlah; i++) {
        cout << left << setw(4) << i + 1 
             << "| " << setw(20) << daftarBuku[i].judul 
             << "| " << setw(15) << daftarBuku[i].pengarang 
             << "| " << setw(6) << daftarBuku[i].tahunTerbit 
             << "| " << fixed << setprecision(2) << daftarBuku[i].harga << endl;
    }

    // --- Statistik & Pencarian (Pertanyaan B) ---

    // 1. Mencari buku dengan harga tertinggi
    int indexTermahal = 0;
    float totalHarga = 0;

    for (int i = 0; i < jumlah; i++) {
        if (daftarBuku[i].harga > daftarBuku[indexTermahal].harga) {
            indexTermahal = i;
        }
        totalHarga += daftarBuku[i].harga;
    }

    cout << "\n--- Statistik & Pencarian ---" << endl;
    cout << "Buku Termahal: " << daftarBuku[indexTermahal].judul 
         << " (Harga: " << daftarBuku[indexTermahal].harga << ")" << endl;

    // 2. Menghitung rata-rata harga
    float rataRata = totalHarga / jumlah;
    cout << "Rata-rata Harga Buku: " << fixed << setprecision(2) << rataRata << endl;

    // 3. Pencarian berdasarkan tahun
    int cariTahun;
    bool ditemukan = false;
    cout << "\nMasukkan tahun terbit yang ingin dicari: ";
    cin >> cariTahun;

    cout << "Hasil pencarian tahun " << cariTahun << ":" << endl;
    for (int i = 0; i < jumlah; i++) {
        if (daftarBuku[i].tahunTerbit == cariTahun) {
            cout << "- " << daftarBuku[i].judul << " (" << daftarBuku[i].pengarang << ")" << endl;
            ditemukan = true;
        }
    }

    if (!ditemukan) {
        cout << "Tidak ada buku yang terbit pada tahun tersebut." << endl;
    }

    return 0;
}
