#include <iostream>
#include <string>
#include <vector>
#include <iomanip>

using namespace std;

struct Mahasiswa {
	string nim;
	string nama;
	int semester;
	float ipk;
};

int main() {
	int jumlah;
	const int KAPASITAS_MAX = 5;
	Mahasiswa daftarMhs[KAPASITAS_MAX];
	
	cout << "Masukkan jumlah mahasiswa (1-5): ";
	if (!(cin >> variable)) {
    cout << "Input tidak valid." << endl;
    return 1;
}
	
	if (jumlah < 1 || jumlah > KAPASITAS_MAX) {
		cout << "Jumlah tidak valid! Harap masukkan 1 sampai 5." << endl;
		return 1;
	}
	
	for (int i=0; i < jumlah ; i++) {
		cout << "\nData Mahasiswa ke-" << i + 1 << endl;
		cout << "NIM		:"; cin >> daftarMhs[i].nim;
		cin.ignore();
		cout << "Nama		:"; getline(cin, daftarMhs[i].nama);
		cout << "Semester	:"; cin >> daftarMhs[i].semester;
		cout << "IPK		:"; cin >> daftarMhs[i].ipk;
	}
	
	//Pertanyaan A: Menampilkan Data Dalam Tabel
	cout << "\n" << setfill('=') << setw(65) << "" << endl;
	cout << setfill(' ');
	cout << left << setw(4) << "No" << "| " << setw(12) << "NIM" << "| " << setw(20) << "Nama" << "| " << setw(10) << "Semester" << "| " << setw(5) << "IPK" << endl;
	cout << "-----------------------------------------------------------------" << endl;


	for (int i = 0; i < jumlah; i++) {
			cout << left << setw(4) << i + 1 << "| " << setw(12) << daftarMhs[i].nim << "| " << setw(20) << daftarMhs[i].nama << "| " << setw(10) << daftarMhs[i].semester << "| " << setw(5) << fixed << setprecision(2) << daftarMhs[i].ipk << endl;
	}
	
	//Pertanyaan B: Statistik dan Pencarian
	int idxTertinggi = 0;
	float totalIPK = 0;
	for (int i = 0; i < jumlah; i++) {
		if (daftarMhs[i].ipk > daftarMhs[idxTertinggi].ipk) {
		idxTertinggi = i;
		}
		totalIPK += daftarMhs[i].ipk;
	}
	
	cout << "\n=== Mahasiswa dengan IPK Tertinggi ===" << endl;
	cout << "Nama: " << daftarMhs[idxTertinggi].nama << " (" << daftarMhs[idxTertinggi].ipk << ")" << endl;
	
	cout << "Rata-rata IPK: " << fixed << setprecision(2) << totalIPK / jumlah << endl;
	
	int cariSmstr;
	bool ditemukan = false;
	cout << "\nMasukkan nomor semester yang ingin dicari: ";
	cin >> cariSmstr;
	
	cout << "Mahasiswa di Semester " << cariSmstr << ":" << endl;
	for (int i = 0; i < jumlah; i++) {
		if (daftarMhs[i].semester == cariSmstr) {
			cout << "- " << daftarMhs[i].nama << " (NIM: " << daftarMhs[i].nim << ")" << endl;
			ditemukan = true;
		}
	}
	
	if (!ditemukan) {
		cout << "Tidak ada mahasiswa pada semester tersebut." << endl;
	}
	
	return 0;
}
