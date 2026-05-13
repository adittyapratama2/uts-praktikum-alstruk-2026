#include <iostream>
#include<string>
using namespace std;

string namapelanggan[5];
int front = 0;
int rear = -1;

bool isfull(){
	return rear == 4;
}

bool isempty(){
	return rear == -1;
}
//implementasi queue
void enqueue (string nama){
	if(isfull()){
		cout<<"antrian penuh";
	}else {
		rear ++;
		namapelanggan[rear] = nama;
	}
}
void dequeue (){
	if (isempty()){
		cout << "antrean kosong!\n";
	}else{
		  cout << namapelanggan[front] << " dihapus!\n";
        front++;
    }
}
void peek(){
	if (isempty()){
		cout << "antrean kosong!\n";
	}else{
	cout<<namapelanggan[front];
}
}

int main() {
	enqueue("budi");
	enqueue("sari");
	enqueue("eko");
	peek();
	cout<<endl;
	dequeue();
	enqueue("dewi");
	
	for(int i = front; i <= rear; i++)
	cout<< namapelanggan[i]<<endl;
	
}
