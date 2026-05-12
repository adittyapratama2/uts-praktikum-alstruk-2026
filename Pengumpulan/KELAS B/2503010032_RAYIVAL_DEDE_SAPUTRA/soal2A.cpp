#include <iostream>
using namespace std;

#define MAX 5

string stackData[MAX];

int top = -1;

// cek stack kosong
bool isEmpty(){

	return top == -1;
}

// cek stack penuh
bool isFull(){

	return top == MAX - 1;
}

// push buku
void push(string judul){

	if(isFull()){

		cout << "Stack penuh\n";
	}
	else{

		top++;

		stackData[top] = judul;

		cout << judul
			 << " ditambahkan ke stack\n";
	}
}

// pop buku
void pop(){

	if(isEmpty()){

		cout << "Stack kosong\n";
	}
	else{

		cout << stackData[top]
			 << " dihapus dari stack\n";

		top--;
	}
}

// melihat buku paling atas
void peek(){

	if(isEmpty()){

		cout << "Stack kosong\n";
	}
	else{

		cout << "Buku paling atas : "
			 << stackData[top]
			 << endl;
	}
}

// tampil isi stack
void tampil(){

	cout << "\nIsi Stack:\n";

	for(int i = top; i >= 0; i--){

		cout << stackData[i] << endl;
	}
}

int main(){

	push("Fisika Dasar");
	push("Kalkulus");
	push("Algoritma");
	push("Jaringan");

	peek();

	pop();
	pop();

	tampil();

	return 0;
}