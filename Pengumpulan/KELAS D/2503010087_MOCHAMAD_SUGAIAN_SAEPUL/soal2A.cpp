#include <iostream>
#include <string>
using namespace std;

#define MAX 5 //Maksimal tumpukan

struct stack {
	int  top;
	string stackTransaksi[MAX];
};

//Inisialisasi stack
void init(stack &s) {
	s.top = -1;
}

//Cek apakah stack penuh
bool isFull(stack s) {
	return s.top == MAX - 1;
}

//Cek apakah stack kosong
bool isEmpty(stack s) {
	return s.top == -1;
}

//Fungsi push(tambah)
void push(stack &s, string noTransaksi) {
	if(isFull(s)) {
		cout << "Stack penuh! Transaksi tidak dapat ditambahkan.\n";
	} else {
		s.top++;
		s.stackTransaksi[s.top] = noTransaksi;
        cout << "Transaksi " << noTransaksi
             << " berhasil ditambahkan ke stack.\n";
	}
}

//Fungsi pop(hapus)
void pop(stack &s) {
	if(isEmpty(s)) {
		cout << "Stack kosong! Tidak ada transaksi yang dapat dihapus.\n";
	} else {
		cout << "Transaksi " << s.stackTransaksi[s.top]
             << " berhasil dihapus dari stack.\n";
		s.top--;
	}
}

// Fungsi peek
void peek(stack s) {
    if (isEmpty(s)) {
        cout << "Stack kosong!\n";
    } else {
        cout << "Transaksi teratas: "
             << s.stackTransaksi[s.top] << endl;
    }
}

// Fungsi menampilkan stack
void tampilStack(stack s) {
    if (isEmpty(s)) {
        cout << "Stack kosong.\n";
    } else {
        cout << "\nIsi Stack:\n";
        for (int i = s.top; i >= 0; i--) {
            cout << s.stackTransaksi[i] << endl;
        }
    }
}

int main() {
	stack transaksi;
	init(transaksi);

    // Push 4 transaksi
    string kode;
	
	cout << "Masukkan 4 nomor transaksi:\n";
	
	for(int i = 0; i < 4; i++) {
	    cout << "Transaksi ke-" << i + 1 << " : ";
	    cin >> kode;
	
	    push(transaksi, kode);
	}

    // Tampilkan isi stack
    tampilStack(transaksi);

    // Peek
    cout << endl;
    peek(transaksi);

    // Pop 2 transaksi
    cout << endl;
    pop(transaksi);
    pop(transaksi);

    // Tampilkan isi stack setelah pop
    tampilStack(transaksi);

    return 0;
}
