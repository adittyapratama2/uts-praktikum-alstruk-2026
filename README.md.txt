
# 2503010137 - ARSY AGUNG NURMAWAN

## Informasi Pribadi
- **Kelas** : A
- *NIM* : 2503010137
- *Nama* : ARSY AGUNG NURMAWAN
- *Kelas* : A

## Informasi Ujian
- **Mata Kuliah** : Praktikum Algoritma dan Struktur Data
- **Semester** : Genap 2025/2026
- **Media Submit** : GitHub Pull Request
- **Bahasa** : C++
- **IDE** : Dev C++
- *Mata Kuliah* : Praktikum Algoritma dan Struktur Data
- *Semester* : Genap 2025/2026
- *Media Submit* : GitHub Pull Request
- *Bahasa* : C++
- *IDE* : Dev C++

---

## ANALISIS & PEMBAHASAN SOAL

### Soal 1
*Analisis:*
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

Suggested fix
 ### Soal 1
 *Analisis:*
+```cpp
 `#include` <iostream>
 `#include` <string>
 `#include` <iomanip> 
 using namespace std;
 ...
 return 0;
 }
 //ARSY AGUNG NURMAWAN 2503010137
+```

 *Pembahasan:*

 ### Soal 2
 *Analisis:*
+```cpp
 `#include` <iostream>
 `#include` <string>
 using namespace std;
 ...
 return 0;
 }
 // 2503010137 ARSY AGUNG NURMAWAN
+```


//ARSY AGUNG NURMAWAN 2503010137


*Pembahasan:*

...(uraikan analisis dan pembahasan soal 1)...

### Soal 2
*Analisis:*
#include <iostream>
#include <string>
using namespace std;

#define max 5

struct riwayatTransaksi {
	int top;
	string data[max];
};

void init (riwayatTransaksi &s){
	s.top = -1;
}

bool isFull (riwayatTransaksi s){
	return s.top == max -1;
}
bool isEmpty (riwayatTransaksi s){
	return s.top == -1;
}

void push (riwayatTransaksi &s, string transaksi){
	if (isFull(s)){
		cout<<"Stack Penuh!"<<endl;
	}else {
		s.top++;
		s.data[s.top]= transaksi;
		cout<<"Menambahkan Data Transaksi: "<<transaksi<<endl;
	}
}

void pop(riwayatTransaksi &s){
	if(isEmpty(s)){
		cout<<"Data Kosong!"<<endl;
	}else {
		cout<<"Menghapus data Teratas dilakukan: "<<s.data[s.top]<<endl;
		s.top--;
	}
}

void peek (riwayatTransaksi s){
	if(!isEmpty(s)){
		cout<<"Data Teratas: "<<s.data[s.top]<<endl;
	}else {
		cout<<"Data Kosong!";
	}
}

void display (riwayatTransaksi s){
	if(isEmpty(s)){
		cout<<"Data Kosong!"<<endl;
	}else {
		cout<<"Data Transaksi: "<<endl;
	for (int i = s.top; i >= 0; i--){
   		 cout << "[" << s.data[i] <<"]"<< endl;
		}
	}
}

...(uraikan analisis dan pembahasan soal 2)...
//Bagian Queue
string data[max];
int front = -1;
int rear = -1;

bool isFull (){
	return rear == max -1;
}
bool isEmpty (){
	return front == -1;
}

void enqueue (string antrian){
	if(isFull()){
		cout<<"Antrian Penuh!"<<endl;
	}else{
		if(isEmpty()){
			front = 0;
		}
		rear++;
		data[rear]= antrian;
		cout<<"Masuk Antrian: "<<antrian<<endl;
	}
}

void dequeue (){
	if(isEmpty()){
		cout<<"Antrian Kosong!"<<endl;
	}else {
		cout<<"\nAntrian Depan Keluar: "<<data[front]<<endl;
		if(front == rear){
			front = rear = -1;
		}else{
			front++;
		}
	}
}

void peek (){
	if(!isEmpty()){
		cout<<"Antrian Terdepan: "<<data[front]<<endl;
	}else {
		cout<<"Antrian Tosong!"<<endl;
	}
}

void display (){
	if(isEmpty()){
		cout<<"Antrian Kosong!"<<endl;
	}else{
		cout<<"Daftar Antrian: ";
		for(int i =front; i<= rear; i++){
			cout<<"["<<data[i]<<"]";
		}
		cout<<endl;
	}
}

int main (){
	riwayatTransaksi tumpukan;
	init (tumpukan);
	cout<<"=====STACK====="<<endl;
	push(tumpukan, "T001");
	push(tumpukan, "T002");	
	push(tumpukan, "T003");
	push(tumpukan, "T004");
	
	cout<<endl;
	peek(tumpukan);
	
	cout<<endl;
	pop(tumpukan);
	pop(tumpukan);
	
	cout<<endl;
	display(tumpukan);
	
	
	cout<<"\n=====QUEUE====="<<endl<<endl;
	enqueue("Budi");
	enqueue("Sari");
	enqueue("Eko");
	
	cout<<endl;
	peek();
	
	dequeue();
	display();
	
	cout<<endl;
	enqueue("Dewi");
	
	display();

	return 0;
}
// 2503010137 ARSY AGUNG NURMAWAN
