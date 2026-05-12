#include <iostream>
#include <iomanip> // library agar tabel rapi
using namespace std;

struct Mahasiswa {
    string nim;
    string nama;
    int semester;
    float ipk;
};

int main () {
    int jumlah;
    int cari;

    cout << "Masukan Jumlah Mahasiswa (1-5) : ";
    cin >> jumlah;

    // Validasi input
    if (jumlah <= 0) {
        cout << "Jumlah mahasiswa harus lebih dari 0!" << endl;
        return 1; // Menghentikan program dengan kode error 1
    }

    // Menggunakan array dinamis
    Mahasiswa* mhs = new Mahasiswa[jumlah]; 

    for (int i = 0; i < jumlah; i++) {
        cout << "\nMasukan mahasiswa ke - " << i + 1 << endl;

        cout << "Masukan NIM: ";
        cin >> mhs[i].nim; 
        cout << "Masukan Nama: ";
        cin.ignore(); 
        getline(cin, mhs[i].nama); 
        cout << "Masukan semester: ";
        cin >> mhs[i].semester;
        cout << "Masukan IPK: ";
        cin >> mhs[i].ipk;
    }

    // Header tabel
    cout << "\nNo | NIM        | Nama                      | Sem | IPK" << endl;
    cout << "---|------------|---------------------------|-----|------" << endl;

    // Inisialisasi awal 0
    float totalIpk = 0;
    float ratarata = 0;
    int ipkTertinggi = 0;

    for (int i = 0; i < jumlah; i++) {
        
        cout << right << setw(2) << i + 1 << " | ";
        cout << left << setw(10) << mhs[i].nim << " | ";
        cout << left << setw(25) << mhs[i].nama << " | ";
        cout << right << setw(3) << mhs[i].semester << " | ";
        cout << fixed << setprecision(2) << mhs[i].ipk << endl;

        // Logika mengumpulkan total IPK
        totalIpk += mhs[i].ipk;
        
        // Logika mencari indeks mahasiswa dengan IPK tertinggi
        if (mhs[i].ipk > mhs[ipkTertinggi].ipk){
            ipkTertinggi = i;
        }
    }

    // Logika rata-rata
    if (jumlah > 0) {
        ratarata = totalIpk / jumlah;
    }

    // Output mahasiswa IPK tertinggi
    cout << "\nMahasiswa dengan IPK tertinggi:" << endl;
    cout << "NIM: " << mhs[ipkTertinggi].nim << endl;
    cout << "Nama: " << mhs[ipkTertinggi].nama << endl;
    cout << "Semester: " << mhs[ipkTertinggi].semester << endl;
    cout << "IPK: " << fixed << setprecision(2) << mhs[ipkTertinggi].ipk << endl;

    // Output rata-rata
    cout << "\nRata Rata IPK seluruh Mahasiswa : " << fixed << setprecision(2) << ratarata << endl;
    cout << endl;

    // inputan untuk mencari nomor semester
    cout << "Masukan nomor semester: ";
    cin >> cari;

    cout << "\nData Mahasiswa Semester " << cari << ":" << endl;
    cout << "-----------------------------------" << endl;

    int no = 1;
    bool dataFound = false; 

    for (int i = 0; i < jumlah; i++)
    {
        if (mhs[i].semester == cari)
        {   
            cout << no << ". Nim  : " << mhs[i].nim << endl;
            cout << "   Nama : " << mhs[i].nama << endl;
            cout << "   Ipk  : " << fixed << setprecision(2) << mhs[i].ipk << endl;
            cout << "-----------------------------------" << endl;
            
            no++;           
            dataFound = true; 
        }   
    }

    if (!dataFound) 
    {
        cout << "Tidak ada Mahasiswa di semester " << cari << "." << endl;
    }

    return 0;
}