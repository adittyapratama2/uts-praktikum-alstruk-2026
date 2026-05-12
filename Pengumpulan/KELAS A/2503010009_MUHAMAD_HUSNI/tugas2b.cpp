#include <iostream>
using namespace std;

#define MAX 5

string antrian[MAX];
int front = 0;
int rear = -1;

bool isEmpty() {
    return rear < front;
}

bool isFull() {
    return rear == MAX - 1;
}

void enqueue(string data) {
    if(isFull()) {
        cout << "Queue penuh\n";
    } else {
        antrian[++rear] = data;
        cout << data << " masuk ke antrian\n";
    }
}

void dequeue() {
    if(isEmpty()) {
        cout << "Queue kosong\n";
    } else {
        cout << antrian[front] << " keluar dari antrian\n";
        front++;
    }
}

void peek() {
    if(isEmpty()) {
        cout << "Queue kosong\n";
    } else {
        cout << "Antrian depan : " << antrian[front] << endl;
    }
}

void tampil() {
    if(isEmpty()) {
        cout << "Queue kosong\n";
    } else {
        cout << "\nIsi Antrian:\n";

        for(int i = front; i <= rear; i++) {
            cout << antrian[i] << endl;
        }
    }
}

int main() {

    enqueue("Budi");
    enqueue("Sari");
    enqueue("Eko");

    peek();

    dequeue();

    enqueue("Dewi");

    tampil();

    return 0;
}
