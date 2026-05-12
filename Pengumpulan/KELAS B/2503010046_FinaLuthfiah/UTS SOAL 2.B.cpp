#include<iostream>
using namespace std;

const int MAX = 5;

string anggota[MAX];

int front = -1;
int rear = -1;

// cek kosong
bool isEmpty(){
	return front == -1;
}


// cek penuh
bool isFull(){
	return rear == MAX - 1;
}


// tambah antrian
void enqueue(string nama){
	
	if(isFull()){
		
		cout << "Queue penuh!" << endl;
	}
	else{
		
		if(front == -1){
			
			front = 0;
		}
		
		rear++;
		anggota[rear] = nama;
		
		cout << nama
		     << " masuk antrian"
		     << endl;
	}
}


// hapus antrian
void dequeue(){
	
	if(isEmpty()){
		
		cout << "Queue kosong!" << endl;
	}
	else{
		
		cout << anggota[front]
		     << " keluar dari antrian"
		     << endl;
		     
		if(front == rear){
			
			front = rear = -1;
		}
		else{
			
			front++;
		}
	}
}


// lihat antrian depan
void peek(){
	
	if(isEmpty()){
		
		cout << "Queue kosong!" << endl;
	}
	else{
		
		cout << "Antrian depan : "
		     << anggota[front]
		     << endl;
	}
}


// tampil queue
void tampil(){
	
	if(isEmpty()){
		
		cout << "Queue kosong!" << endl;
	}
	else{
		
		cout << "\nIsi queue :" << endl;
		
		for(int i = front; i <= rear; i++){
			
			cout << " - "
			     << anggota[i]
			     << endl;
		}
	}
}


int main(){
	
	enqueue("Reza  ");
	enqueue("Mia   ");
	enqueue("Hendra");
	
	tampil();
	
	peek();
	
	dequeue();
	
	tampil();
	
	enqueue("Putri ");
	
	tampil();
	
	return 0;
}
