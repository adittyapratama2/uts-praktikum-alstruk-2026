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
//Ilham maulana 2503010011



