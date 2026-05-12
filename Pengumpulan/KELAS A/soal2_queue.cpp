#include <iostream>
using namespace std;

const int MAX = 5;

// Membuat struct Queue
struct Queue {
    string data[MAX];
    int front;
    int rear;
};

// Mengecek queue kosong
bool isEmpty(Queue q) {
    if (q.front == -1) {
        return true;
    } else {
        return false;
    }
}

// Mengecek queue penuh
bool isFull(Queue q) {
    if (q.rear == MAX - 1) {
        return true;
    } else {
        return false;
    }
}

// Menambah antrian
void enqueue(Queue &q, string nama) {

    // Cek queue penuh
    if (isFull(q)) {
        cout << "Queue penuh!\n";
    } else {

        // Jika queue masih kosong
        if (isEmpty(q)) {
            q.front = 0;
        }

        q.rear = q.rear + 1;
        q.data[q.rear] = nama;

        cout << nama << " masuk antrian.\n";
    }
}

// Menghapus antrian
void dequeue(Queue &q) {

    // Cek queue kosong
    if (isEmpty(q)) {
        cout << "Queue kosong!\n";
    } else {

        cout << q.data[q.front]
             << " keluar dari antrian.\n";

        // Jika data tinggal satu
        if (q.front == q.rear) {
            q.front = -1;
            q.rear = -1;
        } else {
            q.front = q.front + 1;
        }
    }
}

// Melihat antrian depan
void peek(Queue q) {

    if (isEmpty(q)) {
        cout << "Queue kosong!\n";
    } else {
        cout << "Antrian depan : "
             << q.data[q.front] << endl;
    }
}

// Menampilkan isi queue
void tampil(Queue q) {

    if (isEmpty(q)) {
        cout << "Queue kosong!\n";
    } else {

        cout << "Isi queue : ";

        for (int i = q.front; i <= q.rear; i++) {
            cout << q.data[i];

            if (i < q.rear) {
                cout << " - ";
            }
        }

        cout << endl;
    }
}

int main() {

    Queue q;

    // Queue kosong
    q.front = -1;
    q.rear = -1;

    // Tambah data
    enqueue(q, "Reza");
    tampil(q);

    enqueue(q, "Mia");
    tampil(q);

    enqueue(q, "Hendra");
    tampil(q);

    cout << endl;

    // Lihat antrian depan
    peek(q);

    cout << endl;

    // Hapus data
    dequeue(q);
    tampil(q);

    cout << endl;

    // Tambah data lagi
    enqueue(q, "Putri");
    tampil(q);

    return 0;
}
