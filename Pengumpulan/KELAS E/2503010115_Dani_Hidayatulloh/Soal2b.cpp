#include <iostream>
using namespace std;

const int MAX = 5;

string queue[MAX];
int front = -1;
int rear = -1;

bool isEmpty() {
    return front == -1 || front > rear;
}

bool isFull() {
    return rear == MAX - 1;
}

void enqueue(string nama) {
    if (isFull()) {
        cout << "Queue penuh! "
             << nama
             << " tidak dapat masuk antrian."<<endl;
    } else {

        if (front == -1) {
            front = 0;
        }

        rear++;
        queue[rear] = nama;

        cout << nama
             << " berhasil masuk antrian."<<endl;
    }
}

void dequeue() {
    if (isEmpty()) {
        cout << "Queue kosong! Tidak ada pelanggan keluar."<<endl;
    } else {

        cout << queue[front]
             << " keluar dari antrian."<<endl;

        front++;
    }
}

void peek() {
    if (isEmpty()) {
        cout << "Queue kosong."<<endl;
    } else {
        cout << "Pelanggan terdepan : "
             << queue[front]
             << endl;
    }
}

void tampilQueue() {
    if (isEmpty()) {
        cout << "Queue kosong."<<endl;
    } else {

        cout << "Isi Queue:"<<endl;

        for (int i = front; i <= rear; i++) {
            cout << queue[i] << endl;
        }
    }
}

int main() {
	
	cout<< "======Antrian Pelanggan======"<<endl;
    enqueue("Rian");
    enqueue("Gilang");
    enqueue("Bayu");
    tampilQueue();
    peek();
    dequeue();
    tampilQueue();
    enqueue("Adit");
    tampilQueue();

    return 0;
}
