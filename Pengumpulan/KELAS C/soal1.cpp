#include <iostream>
using namespace std;

struct mahasiswa {
    string nim, nama; 
    int semester;
    float ipk;
};

int main() {
    mahasiswa mhs[5];
    int x;

    cout << "masukan jumlah mahasiswa 1-5: ";
    cin >> x;

    
    for (int i = 0; i < x; i++) {
        cout << "\ndata ke-" << i + 1 << endl;
        cout << "masukan nama: ";
        cin >> mhs[i].nim;
        cout << "masukan nim: ";
        cin >> mhs[i].nama;
        cout << "masukan semester: ";
        cin >> mhs[i].semester;
        cout << "masukan nilai (IPK): ";
        cin >> mhs[i].ipk;
    }

    
    cout << "\n--- Data Mahasiswa ---" << endl;
    for (int i = 0; i < x; i++) {
        cout << mhs[i].nim << "\t" << mhs[i].nama << "\t" 
             << mhs[i].semester << "\t" << mhs[i].ipk << endl;
    }


    int tinggi = 0;
    for (int i = 1; i < x; i++) {
        if (mhs[i].ipk > mhs[tinggi].ipk) {  
            tinggi = i;
        }
    }
    cout << "\nMahasiswa dengan nilai tertinggi: " << endl;
    cout << mhs[tinggi].nim << "\t" << mhs[tinggi].nama << "\t" << mhs[tinggi].ipk << endl;


    float total = 0; 
    for (int i = 0; i < x; i++) {
        total += mhs[i].ipk;
    }
    cout << "nilai rata-rata: " << (total / x) << endl;

    
    int cari; 
    cout << "\nmasukan semester yang ingin dicari: ";
    cin >> cari;
    
    bool manggih = false;
    for (int i = 0; i < x; i++) {
        if (mhs[i].semester == cari) { 
            cout << mhs[i].nim << "\t" << mhs[i].nama << "\t" << mhs[i].ipk << endl;
            manggih = true;
        }
    }

    if (!manggih) {
        cout << "semester tidak ada!" << endl;
    }

    return 0;
}