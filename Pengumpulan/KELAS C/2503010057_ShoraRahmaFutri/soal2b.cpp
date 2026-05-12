#include <iostream>
using namespace std;

const int MAX = 5;

string queuePelanggan[MAX];
int front = -1;
int rear = -1;

//fungsi cek queue kosong
bool isEmpty() {
    return front == -1 || front > rear;
}

//cek queue penuh
bool isFull() {
    return rear == MAX - 1;
}

//bagian enqueue
void enqueue(string nama) {
    if (isFull()) {
        cout << "Queue penuh! Pelanggan " << nama
             << " tidak dapat ditambahkan.\n";
    } else {
        
        if (front == -1) {
            front = 0;
        }

        rear++;
        queuePelanggan[rear] = nama;

        cout << "Pelanggan " << nama
             << " berhasil masuk ke antrian.\n";
    }
}

//bagian dequeue
void dequeue() {
    if (isEmpty()) {
        cout << "Queue kosong! Tidak ada pelanggan yang keluar.\n";
    } else {
        cout << "Pelanggan " << queuePelanggan[front]
             << " keluar dari antrian.\n";

        front++;
        
        if (front > rear) {
            front = rear = -1;
        }
    }
}

//fungsi peek
void peek() {
    if (isEmpty()) {
        cout << "Queue kosong! Tidak ada pelanggan di depan.\n";
    } else {
        cout << "Pelanggan terdepan: "
             << queuePelanggan[front] << endl;
    }
}

//tampil queue
void tampilQueue() {
    if (isEmpty()) {
        cout << "Queue kosong.\n";
    } else {
        cout << "Isi Queue: ";
        for (int i = front; i <= rear; i++) {
            cout << queuePelanggan[i];

            if (i < rear) {
                cout << " -> ";
            }
        }
        cout << endl;
    }
}

int main() {

    cout << "\n===== SIMULASI QUEUE PELANGGAN KASIR =====" << endl;

    enqueue("Budi");
    tampilQueue();

    enqueue("Sari");
    tampilQueue();

    enqueue("Eko");
    tampilQueue();

    cout << endl;
    peek();

    cout << endl;
    dequeue();
    tampilQueue();

    cout << endl;
    enqueue("Dewi");
    tampilQueue();

    return 0;
}
