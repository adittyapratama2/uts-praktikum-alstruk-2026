#include <iostream>
#include <string>
#include <iomanip> 
using namespace std;

struct Buku {
    string judul;
    string pengarang;
    int tahunTerbit;
    float harga;
};

int main() {
    int jumlah;
    Buku book[5]; 

    cout << "=== Program Data Buku ===" << endl;
    cout << "Masukkan jumlah buku (1-5): ";
    cin >> jumlah;

   
    if (jumlah < 1 || jumlah > 5) {
        cout << "Jumlah tidak valid!" << endl;
        return 0;
    }

    
    for (int i = 0; i < jumlah; i++) {
        cout << "\nData Buku ke-" << i + 1 << endl;
        cin.ignore();
		cout << "Judul: "; getline (cin, book[i].judul);
        cout << "Pengarang: "; getline(cin, book[i].pengarang);
        cout << "Tahun Terbit: "; cin>>book[i].tahunTerbit;
        cout << "harga: "; cin >> book[i].harga;
    }

    cout << endl<<string(80, '=') << endl;
    cout << left << setw(5) << "No" 
         << setw(27) << "| Judul" 
         << setw(23) << "| Pengarang" 
         << setw(11) << "| Tahun" 
         << "| Harga" << endl;
    cout <<string(80, '-')<<endl;

    float totalHarga = 0;
    int hargaTertinggi = 0;

    for (int i = 0; i < jumlah; i++) {
        cout << left << setw(5) << i + 1 
             << "| " << setw(25) << book[i].judul
             << "| " << setw(21) << book[i].pengarang
             << "| " << setw(9)  << book[i].tahunTerbit
             << "| " << fixed <<setprecision(2)<< book[i].harga << endl;
        
        totalHarga += book[i].harga;
        if (book[i].harga > book[hargaTertinggi].harga) {
            hargaTertinggi = i;
        }
    }
    cout << string(80, '-')<<endl;    
 
    cout << "1. Buku Harga Tertinggi" << endl;
    cout << "- Judul Buku    : " << book[hargaTertinggi].judul << endl;
    cout << "- Pengarang     : " << book[hargaTertinggi].pengarang << endl;
    cout << "- Tahun Terbit  : " << book[hargaTertinggi].tahunTerbit << endl;
    cout << "- Harga         : Rp" << fixed << setprecision(0) << book[hargaTertinggi].harga << endl;
    cout << "-------------------------------------------" << endl;

    float rataRata = totalHarga / jumlah;
    cout << "2. Rata-rata Harga Seluruh Buku: Rp" << fixed << setprecision(2) << rataRata << endl;


    int cariTahun;
    bool ketemu = false;
    cout << "\nMasukan Tahun terbit: ";
    cin >> cariTahun;

    cout << "\n>>> Hasil Pencarian Buku Tahun Terbit " << cariTahun << " <<<" << endl;
    for (int i = 0; i < jumlah; i++) {
        if (book[i].tahunTerbit == cariTahun) {
            cout << "Detail Buku Ditemukan:" << endl;
            cout << "- Judul Buku    : " << book[i].judul << endl;
            cout << "- Pengarang     : " << book[i].pengarang << endl;
            cout << "- Harga         : Rp" << fixed << setprecision(0) << book[i].harga << endl;
            cout << "-------------------------------------------" << endl;
            ketemu = true;
        }
    }

    if (!ketemu) {
        cout << "Pesan: Tidak ada buku yang terbit pada tahun " << cariTahun << "." << endl;
    }

    return 0;
}
//Ilham maulana 2503010011
