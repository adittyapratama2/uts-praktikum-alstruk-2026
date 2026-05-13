#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

// Deklarasi Struct & Input Data (Bagian Soal A)
struct Mahasiswa
{
    string nim;
    string nama;
    int semester;
    float ipk;
};

int main()
{
    Mahasiswa mhs[5];
    int n;

    do
    {
        cout << "Masukkan jumlah mahasiswa [1-5]: ";
        cin >> n;
    } while (n < 1 || n > 5);

    cout << "\n--- INPUT DATA MAHASISWA ---\n";
    for (int i = 0; i < n; i++)
    {
        cout << "Data Mahasiswa ke-" << i + 1 << endl;
        cout << "NIM\t\t: ";
        cin >> mhs[i].nim;
        cin.ignore();
        cout << "Nama\t\t: ";
        getline(cin, mhs[i].nama);
        cout << "Semester\t: ";
        cin >> mhs[i].semester;
        cout << "IPK\t\t: ";
        cin >> mhs[i].ipk;
        cout << endl;
    }

        cout << "\n--- DATA MAHASISWA ---\n";
        cout << left << setw(4) << "No"
            << setw(12) << "NIM"
            << setw(18) << "Nama"
            << setw(10) << "Semester"
            << "IPK" << endl;
    for (int i = 0; i < n; i++)
    {
            cout << left << setw(4) << i + 1 << "| "
                << setw(12) << mhs[i].nim << "| "
                << setw(18) << mhs[i].nama << "| "
                << setw(10) << mhs[i].semester << "| "
                << fixed << setprecision(2) << mhs[i].ipk << endl;
    }

    // Pencarian & Statistik (Bagian Soal B)
    cout << "\n--- STATISTIK & PENCARIAN ---\n";

    int idxMax = 0;
    float sumIpk = 0;
    for (int i = 0; i < n; i++)
    {
        if (mhs[i].ipk > mhs[idxMax].ipk)
        {
            idxMax = i;
        }
        sumIpk += mhs[i].ipk;
    }

        cout << right << "1. Mahasiswa dengan IPK Tertinggi:\n";
        cout << left << setw(10) << "NIM        : " << mhs[idxMax].nim << endl
             << left << setw(10) << "Nama       : " << mhs[idxMax].nama << endl
             << left << setw(10) << "Semester   : " << mhs[idxMax].semester << endl
             << left << setw(10) << "IPK        : " << mhs[idxMax].ipk << endl;

        float rataIpk = sumIpk / n;
        cout << "2. Rata-rata IPK seluruh mahasiswa: [" << rataIpk << "]" << endl;

        int cariSemester;
        bool ditemukan = false;
        cout << "\nMasukkan nomor semester yang dicari: ";
        cin >> cariSemester;

        cout << "Hasil pencarian mahasiswa di semester " << cariSemester << ":\n";
        for (int i = 0; i < n; i++)
        {
            if (mhs[i].semester == cariSemester)
            {
                cout << "- " << mhs[i].nama << " (NIM: " << mhs[i].nim << ")\n";
                ditemukan = true;
            }
    }

    if (!ditemukan)
    {
        cout << "Tidak ada mahasiswa pada semester tersebut.\n";
    }

    return 0;
}