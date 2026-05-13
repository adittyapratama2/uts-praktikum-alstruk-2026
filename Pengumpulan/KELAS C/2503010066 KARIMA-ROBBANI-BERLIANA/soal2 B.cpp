#include <iostream>
using namespace std;

const int MAX = 5;

string queueAnggota[MAX];
int front = 0;
int rear = -1;
int jumlah = 0;

bool isEmpty() {
    return jumlah == 0;
}

bool isFull() {
    return jumlah == MAX;
}

void enqueue(string nama) {
    if (isFull()) {
        cout << "Queue penuh!\n";
    } else {
        rear++;
        queueAnggota[rear] = nama;
        jumlah++;

        cout << nama << " masuk ke dalam antrian.\n";
    }
}

void dequeue() {
    if (isEmpty()) {
        cout << "Queue kosong!\n";
    } else {
        cout << queueAnggota[front]
             << " keluar dari antrian.\n";

        front++;
        jumlah--;
    }
}

void peek() {
    if (isEmpty()) {
        cout << "Queue kosong!\n";
    } else {
        cout << "Antrian terdepan : "
             << queueAnggota[front] << endl;
    }
}

void tampil() {
    if (isEmpty()) {
        cout << "Queue kosong!\n";
    } else {
        cout << "\nIsi Queue:\n";

        for (int i = front; i <= rear; i++) {
            cout << "- " << queueAnggota[i] << endl;
        }
    }
}

int main() {

    enqueue("Reza");
    enqueue("Mia");
    enqueue("Hendra");

    peek();

    dequeue();

    enqueue("Putri");

    tampil();

    return 0;
}