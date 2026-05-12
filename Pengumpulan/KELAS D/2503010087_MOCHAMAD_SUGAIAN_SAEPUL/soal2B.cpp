#include <iostream>
#include <string>
using namespace std;

#define MAX 5 // Maksimal antrian

struct queue {
    int front;
    int rear;
    string data[MAX];
};

// Inisialisasi queue
void init(queue &q) {
    q.front = -1;
    q.rear = -1;
}

// Cek queue penuh
bool isFull(queue q) {
    return q.rear == MAX - 1;
}

// Cek queue kosong
bool isEmpty(queue q) {
    return q.front == -1 || q.front > q.rear;
}

// Fungsi enqueue (tambah)
void enqueue(queue &q, string nama) {
    if(isFull(q)) {
        cout << "Queue penuh! Pelanggan tidak dapat ditambahkan.\n";
    } else {
        if(q.front == -1) {
            q.front = 0;
        }

        q.rear++;
        q.data[q.rear] = nama;

        cout << "Pelanggan " << nama
             << " masuk ke antrian.\n";
    }
}

// Fungsi dequeue (hapus)
void dequeue(queue &q) {
    if(isEmpty(q)) {
        cout << "Queue kosong! Tidak ada pelanggan.\n";
    } else {
        cout << "Pelanggan "
             << q.data[q.front]
             << " keluar dari antrian.\n";

        q.front++;
    }
}

// Fungsi peek
void peek(queue q) {
    if(isEmpty(q)) {
        cout << "Queue kosong!\n";
    } else {
        cout << "Pelanggan terdepan: "
             << q.data[q.front] << endl;
    }
}

// Fungsi tampil queue
void tampilQueue(queue q) {
    if(isEmpty(q)) {
        cout << "Queue kosong.\n";
    } else {
        cout << "\nIsi Queue:\n";

        for(int i = q.front; i <= q.rear; i++) {
            cout << q.data[i] << endl;
        }
    }
}

int main() {
    queue pelanggan;
    init(pelanggan);

    string nama;

    // Input 3 pelanggan
    cout << "Masukkan 3 nama pelanggan:\n";

    for(int i = 0; i < 3; i++) {
        cout << "Pelanggan ke-" << i + 1 << " : ";
        cin >> nama;

        enqueue(pelanggan, nama);
    }

    // Tampilkan queue
    tampilQueue(pelanggan);

    // Peek
    cout << endl;
    peek(pelanggan);

    // Dequeue 1 pelanggan
    cout << endl;
    dequeue(pelanggan);

    // Tampilkan queue
    tampilQueue(pelanggan);

    // Tambah pelanggan baru
    cout << endl;
    cout << "Masukkan pelanggan baru : ";
    cin >> nama;

    enqueue(pelanggan, nama);

    // Tampilkan queue
    tampilQueue(pelanggan);

    return 0;
}
