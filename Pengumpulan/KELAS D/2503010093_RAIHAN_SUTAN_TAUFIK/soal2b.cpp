#include <iostream>
using namespace std;

const int MAX = 5;

// Deklarasi queue
string queuePelanggan[MAX];
int front = -1;
int rear = -1;

// Fungsi cek kosong
bool isEmpty() {
    return front == -1;
}

// Fungsi cek penuh
bool isFull() {
    return rear == MAX - 1;
}

// Fungsi enqueue
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

// Fungsi dequeue
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

// Fungsi peek
void peek() {
    if (isEmpty()) {
        cout << "Queue kosong.\n";
    } else {
        cout << "Pelanggan terdepan: "
             << queuePelanggan[front] << endl;
    }
}

// Fungsi tampil queue
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
    enqueue("Budi");
    enqueue("Sari");
    enqueue("Eko");

    tampilQueue();

    // Peek
    cout << endl;
    peek();

    // Dequeue 1 pelanggan
    cout << endl;
    dequeue();

    tampilQueue();

    // Enqueue pelanggan baru
    cout << endl;
    enqueue("Dewi");

    tampilQueue();

    return 0;
}
