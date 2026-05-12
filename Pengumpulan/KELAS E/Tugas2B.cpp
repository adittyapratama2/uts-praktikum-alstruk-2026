#include <iostream>
using namespace std;

const int MAX = 5;

string queuePelanggan[MAX];
int front = 0;
int rear = -1;
int jumlah = 0;

// cek queue kosong
bool isEmpty() {
    return jumlah == 0;
}

// cek queue penuh
bool isFull() {
    return jumlah == MAX;
}

// tambaah pelanggan ke queue
void enqueue(string nama) {
    if (isFull()) {
        cout << "Queue penuh! Pelanggan tidak bisa ditambahkan.\n";
    } else {
        rear++;
        queuePelanggan[rear] = nama;
        jumlah++;

        cout << "Enqueue pelanggan " << nama << " berhasil.\n";
    }
}

// hapus pelanggan dari queue
void dequeue() {
    if (isEmpty()) {
        cout << "Queue kosong! Tidak ada pelanggan.\n";
    } else {
        cout << "Dequeue pelanggan " << queuePelanggan[front] << endl;

        front++;
        jumlah--;
    }
}

// tampilaknn pelanggan terdepan
void peek() {
    if (isEmpty()) {
        cout << "Queue kosong!\n";
    } else {
        cout << "Pelanggan terdepan: " << queuePelanggan[front] << endl;
    }
}

// tampilkan isi queue
void tampilQueue() {
    if (isEmpty()) {
        cout << "Queue kosong.\n";
    } else {
        cout << "Isi Queue:\n";

        for (int i = front; i <= rear; i++) {
            cout << queuePelanggan[i] << endl;
        }
    }
}

int main() {

    cout << "===== QUEUE ANTRIAN PELANGGAN =====\n\n";

    // Enqueue 3 pelanggan
    enqueue("Budi");
    enqueue("Sari");
    enqueue("Eko");

    cout << endl;
    tampilQueue();

    cout << endl;

    // menampilkan pelanggan terdepan
    peek();

    cout << endl;

    // deque 1 pelanggan
    dequeue();

    cout << endl;
    tampilQueue();

    cout << endl;

    // endqueue pelanggan baru
    enqueue("Dewi");

    cout << endl;
    tampilQueue();

    return 0;
}
