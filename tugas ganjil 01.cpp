#include <iostream>
#include <string>
#include <vector>
#include <iomanip>

using namespace std;

struct Buku {
    string judul;
    string pengarang;
    int tahunTerbit;
    float harga;
};

int main() {
    
    Buku daftarBuku[5];
    int jumlah;

    cout << "Masukkan jumlah buku (1-5): ";
    cin >> jumlah;

    if (jumlah < 1 || jumlah > 5) {
        cout << "Jumlah tidak valid! Harap masukkan angka 1 hingga 5." << endl;
        return 1; 
    }


    cin.ignore();

    
    for (int i = 0; i < jumlah; i++) {
        cout << "\nData Buku ke-" << (i + 1) << endl;
        cout << "Judul      : ";
        getline(cin, daftarBuku[i].judul);
        cout << "Pengarang  : ";
        getline(cin, daftarBuku[i].pengarang);
        cout << "Tahun Terbit: ";
        cin >> daftarBuku[i].tahunTerbit;
        cout << "Harga      : ";
        cin >> daftarBuku[i].harga;
        cin.ignore();
    }

    cout << "\n" << string(70, '-') << endl;
    cout << left << setw(3) << "No" << " | " 
         << setw(20) << "Judul" << " | " 
         << setw(15) << "Pengarang" << " | " 
         << setw(6) << "Tahun" << " | " 
         << "Harga" << endl;
    cout << string(70, '-') << endl;

    for (int i = 0; i < jumlah; i++) {
        cout << left << setw(3) << (i + 1) << " | " 
             << setw(20) << daftarBuku[i].judul << " | " 
             << setw(15) << daftarBuku[i].pengarang << " | " 
             << setw(6) << daftarBuku[i].tahunTerbit << " | " 
             << fixed << setprecision(2) << daftarBuku[i].harga << endl;
    }
    cout << string(70, '-') << endl;
    
    int indekstertinggi = 0;
	for (int i=0;i<jumlah;i++){
		
		if (daftarBuku[i].harga > daftarBuku[indekstertinggi].harga){
			indekstertinggi = i;
			
		}
	}
	cout <<"\nharga tertinggi\n";
	cout <<"harga :"<<daftarBuku[indekstertinggi].harga<<endl;
	cout <<"judul  :"<<daftarBuku[indekstertinggi].judul<<endl;
	cout <<"pengarang :"<<daftarBuku[indekstertinggi].pengarang<<endl;
	cout <<"tahun terbit:"<<daftarBuku[indekstertinggi].tahunTerbit<<endl;
	
	float total = 0;

    for (int i = 0; i < jumlah; i++) {
        total += daftarBuku[i].harga;
    }

    float rataRata = total / jumlah;

    cout << "\nRata-rata nilai buku = "
         << rataRata << endl;
         
           
    int cariTahun;
    bool ditemukan = false;

    cout << "\n" << string(30, '=') << endl;
    cout << "PENCARIAN BUKU" << endl;
    cout << "Masukkan tahun terbit yang dicari: ";
    cin >> cariTahun;

    cout << "\nHasil Pencarian Tahun " << cariTahun << ":" << endl;
    cout << string(70, '-') << endl;
    
    for (int i = 0; i < jumlah; i++) {
        if (daftarBuku[i].tahunTerbit == cariTahun) {
            cout << "- " << left << setw(25) << daftarBuku[i].judul 
                 << " | " << daftarBuku[i].pengarang << endl;
            ditemukan = true;
        }
    }

    if (!ditemukan) {
        cout << "Tidak ada buku yang terbit pada tahun tersebut." << endl;
    }
    cout << string(70, '-') << endl;

    return 0;
}
