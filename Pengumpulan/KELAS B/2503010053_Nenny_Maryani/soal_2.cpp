#include<iostream>
using namespace std;

// ------ stack ------
#define max_stack 5

string stackArr[max_stack];
int top  = -1;

// cek kosong
bool isEmpty() {
	return top == - 1;
}

// cek penuh
bool isFull() {
	return top == max_stack - 1;
}

// tambah(push)
void push(string no_transaksi) {
	if(!isFull()) {
		top++;
		stackArr[top] = no_transaksi;
		cout << "Transaksi masuk : " << no_transaksi << endl;
	} else {
		cout << "Stack penuh!" <<endl;
	}
}
// hapus(pop)
void pop() {
	if(!isEmpty()) {
		cout << "Transaksi hapus : " << stackArr[top] << endl;
		top--;
	} else {
		cout << "Stack kosong!" <<endl;
	}
}

// nilai teratas(peek)
void peek() {
	if(!isEmpty()) {
		cout << "Transaksi teratas : " << stackArr[top] << endl;
	} else {
		cout << "Stack kosong!" <<endl;
	}
}

// display
void display() {
	if(!isEmpty()) {
		cout << "Isi stack : " << endl;
		for(int i = top; i >= 0; i--) {
			cout << stackArr[i] << " " << endl;
		}
		
		cout << endl;
	} else {
		cout << "Stack kosong!" << endl;
	}
}

// ------ queue ------
#define max_queue 5

string queueArr[max_queue];
int front = -1, rear = -1;

// cek kosong
bool queueIsEmpty() {
	return front == -1;
}

// cek penuh
bool queueIsFull() {
	return rear == max_queue - 1;
}

// tambah(enqueue)
void enqueue(string nama) {
	if(!queueIsFull()) {
		if(queueIsEmpty()) {
			front = 0;
		}
		
		rear++;
		queueArr[rear] = nama;
		cout << "Pelanggan masuk : " << nama << endl;
	} else {
		cout << "Queue penuh!" << endl;
	}
}

// hapus(dequeue)
void dequeue() {
	if(!queueIsEmpty()) {
		cout << "Pelanggan dilayani : " << queueArr[front] << endl;
		
		if(front == rear) {
			front = rear = -1;
		} else {
			front ++;
		}
			
	} else {
		cout << "Queue kosong!" << endl;
	}
}

// nilai terdepan(peek)
void queuePeek() {
	if(!queueIsEmpty()) {
		cout << "Pelanggan terdepan : " << queueArr[front] << endl;
	} else {
		cout << "Queue kosong!" << endl;
	}
}

// display
void queue_display() {
	if(!queueIsEmpty()) {
		cout << "Isi queue : " << endl;
		for(int i = front; i <= rear; i++) {
			cout << queueArr[i] << " " << endl;
		}
		
		cout << endl;
	} else {
		cout << "Queue kosong!" << endl;
	}
}


int main() {
	cout << "====== STACK ======" << endl;
	push("T001");
	push("T002");
	push("T003");
	push("T004");
	
	peek();
	
	display();
	
	pop();
	pop();
	
	peek();
	
	display();
	
	cout << "====== QUEUE ======" << endl;
	enqueue("Budi");
	enqueue("Sari");
	enqueue("Eko");
	
	queuePeek();
	queue_display();
	
	dequeue();
	
	enqueue("Dewi");
	
	queuePeek();
	queue_display();
	
	return 0;
}
