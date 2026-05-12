#include <iostream>
using namespace std;

// Kapasitas maksimum queue
const int MAX = 5;

// Array queue
string queuePelanggan[MAX];

// Variabel front dan rear
int front = -1;
int rear = -1;

// Fungsi cek queue kosong
bool isEmpty() {
    return front == -1 || front > rear;
}

// Fungsi cek queue penuh
bool isFull() {
    return rear == MAX - 1;
}

// Fungsi enqueue
void enqueue(string nama) {

    if (isFull()) {
        cout << "Queue penuh! Tidak bisa menambah pelanggan.\n";
    } else {

        // Jika queue masih kosong
        if (front == -1) {
            front = 0;
        }

        rear++;
        queuePelanggan[rear] = nama;

        cout << "Enqueue berhasil: "
             << nama << endl;
    }
}

// Fungsi dequeue
void dequeue() {

    if (isEmpty()) {
        cout << "Queue kosong! Tidak ada pelanggan.\n";
    } else {

        cout << "Dequeue pelanggan: "
             << queuePelanggan[front] << endl;

        front++;
    }
}

// Fungsi peek
void peek() {

    if (isEmpty()) {
        cout << "Queue kosong!\n";
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

        cout << "Isi Queue:\n";

        for (int i = front; i <= rear; i++) {
            cout << queuePelanggan[i] << endl;
        }
    }

    cout << endl;
}

int main() {

    // Enqueue 3 pelanggan
    enqueue("Budi");
    enqueue("Sari");
    enqueue("Eko");

    cout << endl;
    tampilQueue();

    // Menampilkan pelanggan terdepan
    peek();

    // Dequeue 1 pelanggan
    cout << endl;
    dequeue();

    cout << endl;
    tampilQueue();

    // Enqueue pelanggan baru
    enqueue("Dewi");

    cout << endl;
    tampilQueue();

    return 0;
}
