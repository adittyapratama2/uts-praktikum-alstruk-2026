#include <iostream>
using namespace std;

#define MAX 5 // max 5

string queuePelanggan[MAX];
int front = -1;
int rear = -1;

// cek apakah kosong
bool isEmpty() {
    return front == -1;
}

// cek apakah penuh
bool isFull() {
    return rear == MAX - 1;
}

// enqueue
void enqueue(string nama) {
    if (isFull()) {
        cout << "Queue penuh! Pelanggan tidak bisa ditambahkan.\n";
    } else {
        if (isEmpty()) {
            front = 0;
        }

        rear++;
        queuePelanggan[rear] = nama;

        cout << nama << " masuk ke antrian.\n";
    }
}

// dequeue
void dequeue() {
    if (isEmpty()) {
        cout << "Queue kosong! Tidak ada pelanggan.\n";
    } else {
        cout << queuePelanggan[front] << " keluar dari antrian.\n";

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
        cout << "Pelanggan terdepan: " << queuePelanggan[front] << endl;
    }
}

// tampil queue
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

    enqueue("Budi");
    enqueue("Sari");
    enqueue("Eko");

    tampilQueue();

    cout << endl;

    peek();

    cout << endl;

    dequeue();

    cout << endl;

    enqueue("Dewi");

    tampilQueue();

    return 0;
}