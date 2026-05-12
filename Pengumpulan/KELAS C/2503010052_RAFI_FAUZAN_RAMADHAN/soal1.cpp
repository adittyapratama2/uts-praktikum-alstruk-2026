#include <iostream>
using namespace std;
 
struct Mahasiswa {
    string Nim, Nama;
    int Semester;
    float Ipk;
};
 
int main() {
 
    int n;
    cout << "Masukan 1-5 = ";
    cin >> n;
 
    Mahasiswa mhs[5];
 
    for (int i = 0; i < n; i++) {
        cout << "Data Mahasiswa ke-" << i + 1 << endl;
        cout << "Nim      = "; cin >> mhs[i].Nim;
        cout << "Nama     = "; cin >> mhs[i].Nama;
        cout << "Semester = "; cin >> mhs[i].Semester;
        cout << "Ipk      = "; cin >> mhs[i].Ipk;
    }
 
    cout << "No\t" << " Nim \t" << "\tNama\t" << "\tSemester\t" << "Nilai\t" << endl;
    for (int i = 0; i < n; i++) {
    	cout << i+1 <<"\t";
        cout << mhs[i].Nim      << "\t";
        cout << mhs[i].Nama     << "\t\t";
        cout << mhs[i].Semester << "\t\t";
        cout << mhs[i].Ipk      << endl;
    }
 
    
    int Tinggi = 0;
    for (int i = 0; i < n; i++) {
        if (mhs[i].Ipk > mhs[Tinggi].Ipk) {
            Tinggi = i;
        }
    }
    cout << "\nIpk Tertinggi : " << mhs[Tinggi].Ipk << endl;
 
    
    float Rata = 0;
    for (int i = 0; i < n; i++) {
        Rata += mhs[i].Ipk;
    }
    cout << "Rata-rata Ipk  : " << (Rata / n) << endl;
 
    
    int Cari;
    cout << "\nCari Semester = ";
    cin >> Cari;
    bool Temukan = false;
    for (int i = 0; i < n; i++) {
        if (mhs[i].Semester == Cari) {
            cout << mhs[i].Nim      << "\t";
            cout << mhs[i].Nama     << "\t\t";
            cout << mhs[i].Semester << "\t\t";
            cout << mhs[i].Ipk      << endl;
            Temukan = true;
        }
    }
 
    if (!Temukan)
        cout << "Semester tidak ada" << endl;
 
    return 0;
}
