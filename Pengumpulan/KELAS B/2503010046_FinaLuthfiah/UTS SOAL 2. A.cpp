#include<iostream>
using namespace std;

const int MAX = 5;

string buku[MAX];
int top = -1;

// cek kosong
bool isEmpty(){
	return top == -1;
}

//cek penuh
bool isFull(){
	return top == MAX - 1;
}


// tambah buku
void push(string judul){
	
	if(isFull()){
		
	    cout << "Stack penuh!" << endl;
	}
	else{
		
		top++;
		buku[top] = judul;
		
		cout << judul 
		     << " berhasil ditambahkan " 
		     << endl;
	}
}


// hapus buku
void pop(){
	
	if(isEmpty()){
		
		cout << "Stack kosong!" << endl;
	}
	else{
		
		cout << buku[top] 
		     << " dihapus dari stack" 
		     << endl;
		     
		top--;
	}
}


// lihat data teratas
void peek(){
	
	if(isEmpty()){
		
	   cout << "Stack kosong!" << endl;
	}
	else{
		
		cout << " Buku paling atas : "
		     << buku[top] << endl;
	}
}


// tampil isi stack
void tampil(){
	
	if(isEmpty()){
		
	   cout << "Stack kosong!" << endl;
	}
	else{
		
		cout << "\nIsi stack :" << endl;
		
		for(int i = top; i >= 0; i--){
	    	cout << " - "
			     << buku[i]
			     << endl;
		}
	}
}


int main(){
	
	push(" Fisika Dasar ");
	push(" Kalkulus     ");
	push(" Algoritma    ");
	push(" Jaringan     ");
	
	peek();
	
	pop();
	pop();
	
	tampil();
	
	return 0;
}
