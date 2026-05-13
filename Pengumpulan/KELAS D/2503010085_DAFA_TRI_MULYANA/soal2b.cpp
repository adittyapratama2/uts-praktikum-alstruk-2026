#include <iostream>
using namespace std;

const int MAX = 5;

string queuePelanggan[MAX];
int front = -1;
int rear = -1;

// Cek kosong
bool isEmpty() {
    return front == -1;
}

// Cek penuh
bool isFull() {
    return rear == MAX - 1;
}

// Enqueue
void enqueue(string nama) {
    if (isFull()) {
        cout << "Queue penuh! Tidak bisa menambah pelanggan.\n";
    } else {
        if (isEmpty()) {
            front = 0;
        }

        rear++;
        queuePelanggan[rear] = nama;

        cout << nama << " masuk ke antrian.\n";
    }
}

// Dequeue
void dequeue() {
    if (isEmpty()) {
        cout << "Queue kosong! Tidak ada pelanggan.\n";
    } else {
        cout << queuePelanggan[front]
             << " keluar dari antrian.\n";

        if (front == rear) {
            front = rear = -1;
        } else {
            front++;
        }
    }
}

// Peek
void peek() {
    if (isEmpty()) {
        cout << "Queue kosong.\n";
    } else {
        cout << "Pelanggan terdepan: "
             << queuePelanggan[front] << endl;
    }
}

// Tampilkan queue
void tampilQueue() {
    if (isEmpty()) {
        cout << "Queue kosong.\n";
    } else {
        cout << "\nIsi Queue:\n";
        for (int i = front; i <= rear; i++) {
            cout << queuePelanggan[i] << endl;
        }
    }
}

int main() {

    // Enqueue 3 pelanggan
    enqueue("Dafa");
    enqueue("Rega");
    enqueue("khusaeri");

    tampilQueue();

    // Peek
    peek();

    // Dequeue 1 pelanggan
    dequeue();

    tampilQueue();

    // Enqueue pelanggan baru
    enqueue("Rifki");

    tampilQueue();

    return 0;
}