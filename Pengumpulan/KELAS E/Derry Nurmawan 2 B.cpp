#include <iostream>
using namespace std;

const int MAX = 5;

string queuePelanggan[MAX];
int front = -1;
int rear = -1;

bool isEmpty() {
    return front == -1;
}

bool isFull() {
    return rear == MAX - 1;
}

void enqueue(string nama) {
    if (isFull()) {
        cout << "Queue penuh! Pelanggan " << nama 
             << " tidak dapat ditambahkan.\n";
    } else {
        if (isEmpty()) {
            front = 0;
        }

        rear++;
        queuePelanggan[rear] = nama;

        cout << "Enqueue: " << nama 
             << " masuk ke antrian.\n";
    }
}

void dequeue() {
    if (isEmpty()) {
        cout << "Queue kosong! Tidak ada pelanggan dalam antrian.\n";
    } else {
        cout << "Dequeue: " << queuePelanggan[front] 
             << " keluar dari antrian.\n";

        if (front == rear) {
            front = rear = -1;
        } else {
            front++;
        }
    }
}

void peek() {
    if (isEmpty()) {
        cout << "Queue kosong!\n";
    } else {
        cout << "Pelanggan terdepan: " 
             << queuePelanggan[front] << endl;
    }
}

void display() {
    if (isEmpty()) {
        cout << "Queue kosong.\n";
    } else {
        cout << "Isi queue saat ini:\n";
        for (int i = front; i <= rear; i++) {
            cout << queuePelanggan[i] << endl;
        }
    }

    cout << endl;
}

int main() {

    enqueue("Budi");
    display();

    enqueue("Sari");
    display();

    enqueue("Eko");
    display();

    peek();

    cout << endl;

    dequeue();
    display();

    enqueue("Dewi");
    display();

    return 0;
}
