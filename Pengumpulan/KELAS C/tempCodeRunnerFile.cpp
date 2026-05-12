#include <iostream>
using namespace std;

const int MAX = 5;

string queueArr[MAX];
int front = -1;
int rear = -1;

bool isEmpty() {
    return front == -1;
}

bool isFull() {
    return rear == MAX - 1;
}


void enqueue(string nama) {
    if (isFull()) {
        cout << "Queue penuh! Tidak bisa menambahkan " << nama << endl;
    } else {
        if (isEmpty()) {
            front = 0;
        }
        rear++;
        queueArr[rear] = nama;

        cout << nama << " berhasil masuk ke antrian." << endl;
    }
}

void dequeue() {
    if (isEmpty()) {
        cout << "Queue kosong! Tidak ada anggota yang diproses." << endl;
    } else {
        cout << queueArr[front] << " keluar dari antrian." << endl;

        if (front == rear) {
            front = rear = -1;
        } else {
            front++;
        }
    }
}

void peek() {
    if (isEmpty()) {
        cout << "Queue kosong!" << endl;
    } else {
        cout << "Anggota terdepan: " << queueArr[front] << endl;
    }
}

void tampilQueue() {
    if (isEmpty()) {
        cout << "Queue kosong." << endl;
    } else {
        cout << "Isi Queue: ";

        for (int i = front; i <= rear; i++) {
            cout << queueArr[i];

            if (i < rear) {
                cout << " -> ";
            }
        }

        cout << endl;
    }
}

int main() {

    cout << "=== ENQUEUE 3 ANGGOTA ===" << endl;

    enqueue("Arfyn");
    tampilQueue();

    enqueue("Diazs");
    tampilQueue();

    enqueue("Aryada");
    tampilQueue();

    cout << "\n=== PEEK ===" << endl;
    peek();

    cout << "\n=== DEQUEUE 1 ANGGOTA ===" << endl;
    dequeue();
    tampilQueue();

    cout << "\n=== ENQUEUE ANGGOTA BARU ===" << endl;
    enqueue("Steven");
    tampilQueue();

    return 0;
}