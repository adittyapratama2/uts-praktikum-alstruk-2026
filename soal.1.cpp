#include <iostream>
#include <string>
#include <iomanip> 

using namespace std;


struct Mahasiswa {
    string nama;
    string nim;
    int semester;
    float ipk;
};

int main() {
    
    Mahasiswa daftarMhs[5];
    int jumlah;

    
    cout << "Masukkan jumlah mahasiswa (1-5): ";
    cin >> jumlah;

    
    if (jumlah < 1 || jumlah > 5) {
        cout << "Jumlah tidak valid. Harap masukkan angka 1-5." << endl;
        return 0;
    }

    
    for (int i = 0; i < jumlah; i++) {
        cout << "\nData Mahasiswa ke-" << i + 1 << endl;
        cout << "NIM      : ";
        cin >> daftarMhs[i].nim;
        cin.ignore(); 
        cout << "Nama     : ";
        getline(cin, daftarMhs[i].nama);
        cout << "Semester : ";
        cin >> daftarMhs[i].semester;
        cout << "IPK      : ";
        cin >> daftarMhs[i].ipk;
    }

    
    cout << "\n" << setfill('=') << setw(65) << "" << endl;
    cout << setfill(' ');
    cout << setw(3) << "No" << " | " 
         << left << setw(12) << "NIM" << " | " 
         << setw(20) << "Nama" << " | " 
         << setw(8) << "Semester" << " | " 
         << setw(5) << "IPK" << endl;
    cout << setfill('-') << setw(65) << "" << endl;
    cout << setfill(' ');

    for (int i = 0; i < jumlah; i++) {
        cout << setw(3) << i + 1 << " | " 
             << left << setw(12) << daftarMhs[i].nim << " | " 
             << setw(20) << daftarMhs[i].nama << " | " 
             << right << setw(8) << daftarMhs[i].semester << " | " 
             << fixed << setprecision(2) << setw(5) << daftarMhs[i].ipk << endl;
    }
    cout << setfill('-') << setw(65) << "" << endl;
    
    int indeksTertinggi = 0;
    float totalIPK = 0;

    for (int i = 0; i < jumlah; i++) {
        
        if (daftarMhs[i].ipk > daftarMhs[indeksTertinggi].ipk) {
            indeksTertinggi = i;
        }
        
        totalIPK += daftarMhs[i].ipk;
    }

    cout << "\n=======================================" << endl;
    cout << "MAHASISWA DENGAN IPK TERTINGGI" << endl;
    cout << "NIM      : " << daftarMhs[indeksTertinggi].nim << endl;
    cout << "Nama     : " << daftarMhs[indeksTertinggi].nama << endl;
    cout << "Semester : " << daftarMhs[indeksTertinggi].semester << endl;
    cout << "IPK      : " << daftarMhs[indeksTertinggi].ipk << endl;

    // 2. Hitung Rata-rata IPK
    float rataRata = totalIPK / jumlah;
    cout << "---------------------------------------" << endl;
    cout << "Rata-rata IPK Seluruh Mahasiswa: " << fixed << setprecision(2) << rataRata << endl;
    cout << "=======================================" << endl;

    // 3. Cari Berdasarkan Semester
    int cariSemester;
    bool ditemukan = false;
    cout << "\nMasukkan nomor semester yang ingin dicari: ";
    cin >> cariSemester;

    cout << "\nMahasiswa di Semester " << cariSemester << ":" << endl;
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
