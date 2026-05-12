#include <iostream>
using namespace std;

// Deklarasi queue
const int MAX = 5;
string queueAnggota[MAX];
int front = -1;
int rear = -1;

// Fungsi mengecek queue kosong
bool isEmpty() {
    return front == -1 || front > rear;
}

// Fungsi mengecek queue penuh
bool isFull() {
    return rear == MAX - 1;
}

// Fungsi menampilkan isi queue
void tampilQueue() {
    if (isEmpty()) {
        cout << "Queue kosong.\n";
    } else {
        cout << "Isi Queue:\n";

        for (int i = front; i <= rear; i++) {
            cout << "- " << queueAnggota[i] << endl;
        }
    }

    cout << endl;
}

// Fungsi enqueue
void enqueue(string nama) {
    if (isFull()) {
        cout << "Queue penuh! Anggota \"" << nama
             << "\" tidak dapat masuk antrian.\n";
    } else {

        // Jika queue masih kosong
        if (front == -1) {
            front = 0;
        }

        rear++;
        queueAnggota[rear] = nama;

        cout << "Anggota \"" << nama
             << "\" berhasil masuk antrian.\n";

        tampilQueue();
    }
}

// Fungsi dequeue
void dequeue() {
    if (isEmpty()) {
        cout << "Queue kosong! Tidak ada anggota yang diproses.\n";
    } else {

        cout << "Anggota \"" << queueAnggota[front]
             << "\" keluar dari antrian.\n";

        front++;

        tampilQueue();
    }
}

// Fungsi peek
void peek() {
    if (isEmpty()) {
        cout << "Queue kosong! Tidak ada anggota di depan.\n";
    } else {
        cout << "Anggota terdepan adalah: "
             << queueAnggota[front] << endl;
    }

    cout << endl;
}

int main() {

    // Enqueue 3 anggota
    enqueue("Reza");
    enqueue("Mia");
    enqueue("Hendra");

    // Menampilkan anggota terdepan
    peek();

    // Dequeue 1 anggota
    dequeue();

    // Enqueue anggota baru
    enqueue("Putri");

    return 0;
}
