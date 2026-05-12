#include <iostream>
using namespace std;

// mendefinisikan dari stack
int stack[5];
int top = -1;

// mengecek apakah dari stack itu kosong
bool isEmpty() {
	return top == -1;
}

// apakah stack penuh
bool isFull() {
	return top == 4;
}

// tambahkan transaksi
void push(int noTransaksi) {
	// jika transaksi penuh
	if(isFull()) {
		cout << "Transaksi penuh! transaksi tidak bisa ditambhkan" << endl;
	} else {
		top++;
		stack[top] = noTransaksi;
		cout << "Push transaksi T00" << noTransaksi << " berhasil" << endl;
	}
}

// menghapus transaksi teratas
void pop() {
	// jika transaksi kosong
	if(isEmpty()){
		cout << "Transaksi kosong! tidak ada transaksi yang bisa dihapus" << endl;
	} else {
		cout << "Pop transaksi T00" << stack[top] << " berhasil" << endl;
		top--;
	}
}

// melihat transaksi teratas
void peek() {
	if(isEmpty()) {
		cout << "Stack kosong" << endl;
	} else {
		cout << "Transaksi teratas: T00" << stack[top] << endl;
	}
}

// tampilka seluruh isi stack
void viewStack() {
	if(isEmpty()) {
		cout << "Stack kosong!" << endl;
	} else {
		cout << "Isi stack : ";
		for(int i = top; i >= 0; i--){
			cout << "T00" << stack[i];
			if(i > 0) cout << " -> ";
		}
		cout << endl;
	}
}

int main() {
	cout << "====== STACK: RIWAYAT TRANSAKSI =======" << endl;
	
	push(1); // untuk T001
	push(2); // untuk T002
	push(3); // untuk T003
	push(4); // untuk T004
	
	cout << endl;
	peek();
	
	cout << endl;
	pop();
	pop();
	
	cout << endl;
	viewStack();
	
	return 0;
}