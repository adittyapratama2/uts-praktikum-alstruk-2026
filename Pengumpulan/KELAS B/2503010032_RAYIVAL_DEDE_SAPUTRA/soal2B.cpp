#include <iostream>
using namespace std;

#define MAX 5

class Queue{

	int front, rear;
	string arr[MAX];

public:

	Queue(){

		front = -1;
		rear = -1;
	}

	bool isEmpty(){

		return front == -1 || front > rear;
	}

	bool isFull(){

		return rear == MAX - 1;
	}

	// tambah antrian
	void enqueue(string nama){

		if(isFull()){

			cout << "Queue penuh!\n";
		}
		else{

			if(front == -1){

				front = 0;
			}

			arr[++rear] = nama;

			cout << nama
				 << " masuk antrian\n";
		}
	}

	// hapus antrian depan
	void dequeue(){

		if(isEmpty()){

			cout << "Queue kosong!\n";
		}
		else{

			cout << arr[front]
				 << " keluar dari antrian\n";

			front++;
		}
	}

	// lihat antrian depan
	void peek(){

		if(isEmpty()){

			cout << "Queue kosong!\n";
		}
		else{

			cout << "Antrian depan : "
				 << arr[front]
				 << endl;
		}
	}

	// tampil queue
	void display(){

		if(isEmpty()){

			cout << "Queue kosong!\n";
		}
		else{

			cout << "Isi Queue : ";

			for(int i = front; i <= rear; i++){
				cout << arr[i];
				if(i < rear){
					
					cout << ", ";
				}
			}

			cout << endl;
		}
	}
};

int main(){

	Queue q;

	q.enqueue("Reza");
	q.display();

	q.enqueue("Mia");
	q.display();

	q.enqueue("Hendra");
	q.display();

	q.peek();

	q.dequeue();
	q.display();

	q.enqueue("Putri");
	q.display();

	return 0;
}