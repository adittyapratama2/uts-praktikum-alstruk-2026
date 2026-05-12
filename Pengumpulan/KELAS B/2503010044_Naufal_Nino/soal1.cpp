#include <iostream>
#include <iomanip>

using namespace std;

struct Mahasiswa {
    string nim;
    string nama;
    int semester;
    float ipk;
};

int main() {
    Mahasiswa data[5];
    int pilihan;

    for (int i = 0; i < 5; i++) {
        cout << "Masukan data mahasiswa ke-" << i + 1 << endl;
        cout << "Masukan NIM : ";
        cin >> data[i].nim;
        cout << "Masukan Nama : ";
        cin >> data[i].nama;
        cout << "Masukan Semester : ";
        cin >> data[i].semester;
        cout << "Masukan IPK : ";
        cin >> data[i].ipk;
        cout << endl;
    }

    cout << "Data Mahasiswa yang telah dimasukan" << endl;
    cout << left
     << setw(4)  << "No" << "| "
     << setw(12) << "NIM" << "| "
     << setw(18) << "Nama" << "| "
     << setw(9)  << "Semester" << "| "
     << setw(5)  << "IPK" << "\n";

    cout << "----|------------|------------------|----------|-------|\n";
    for (int i = 0; i < 5; i++) {   
        cout << left
         << setw(4)  << i + 1 << "| "
         << setw(12) << data[i].nim << "| "
         << setw(18) << data[i].nama << "| "
         << setw(9)  << data[i].semester << "| "
         << setw(5)  << fixed << setprecision(2) << data[i].ipk << "\n";
         cout << "----|------------|------------------|----------|-------|\n";
    }

    do {
        cout << "\nMENU\n";
        cout << "1. Cari Mahasiswa dengan IPK Tertinggi\n";
        cout << "2. Hitung Rata-rata IPK\n";
        cout << "3. cari Mahasiswa dengan Semester Tertentu\n";
        cout << "4. Keluar\n";
        cout << "Pilih menu (1-4): ";
        cin >> pilihan;

        switch (pilihan)
        {
        case 1:
        {
            cout << "Cari Mahasiswa dengan IPK Tertinggi\n";
            float max_ipk = 0;
            Mahasiswa mahasiswa_tertinggi;
            for (int i = 0; i < 5; i++) {
                if (data[i].ipk > max_ipk) {
                    max_ipk = data[i].ipk;
                    mahasiswa_tertinggi = data[i];
                }
            }
            cout << "Mahasiswa dengan IPK tertinggi:\n";
            cout << "NIM: " << mahasiswa_tertinggi.nim << endl;
            cout << "Nama: " << mahasiswa_tertinggi.nama << endl;
            cout << "IPK: " << mahasiswa_tertinggi.ipk << endl;
        }
            break;
        case 2:
            {
                cout << "Hitung rata-rata IPK\n";
                float total_ipk = 0;
                for (int i = 0 ; i < 5; i++) {
                    total_ipk += data[i].ipk;
                }
                float rata_rata = total_ipk / 5;
                cout << "Rata-rata IPK: " << rata_rata << endl;
            }
            break;
        case 3:
            {
                cout << "Cari Mahasiswa berdasarkan Semester Tertentu\n";
                int semester_cari;
                cout << "Masukan Semester yang ingin dicari : ";
                cin >> semester_cari;
                cout << "Mahasiswa dengan Semester " << semester_cari << ":\n";
                for (int i = 0; i < 5; i++) {
                    if (data[i].semester == semester_cari) {
                        cout << "NIM: " << data[i].nim << endl;
                        cout << "Nama: " << data[i].nama << endl;
                        cout << "IPK: " << data[i].ipk << endl;
                        cout << "-----------------------------\n";
                    }
                }
            }
            break;
        case 4:
            {
                cout << "Keluar dari program. Terima kasih!\n";
                return 0;
            }
            break;
        
        default:
            cout << "Pilihan tidak valid. Silakan coba.\n";
            break;
        }
    } while (pilihan != 4);

    return 0;
}