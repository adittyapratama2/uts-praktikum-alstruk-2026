#include <iostream>
using namespace std;

// STACK

const int MAX = 5;

string stackBuku[MAX];
int top = -1;

// Cek stack kosong
bool isEmptyStack() {
    return top == -1;
}

// Cek stack penuh
bool isFullStack() {
    return top == MAX - 1;
}

// Push stack
void push(string judul) {

    if (isFullStack()) {

        cout << "Stack penuh! Buku tidak bisa ditambahkan.\n";

    } else {

        top++;
        stackBuku[top] = judul;

        cout << "Buku \"" << judul
             << "\" berhasil ditambahkan.\n";
    }
}

// Pop stack
void pop() {

    if (isEmptyStack()) {

        cout << "Stack kosong!\n";

    } else {

        cout << "Buku \"" << stackBuku[top]
             << "\" berhasil dihapus.\n";

        top--;
    }
}

// Peek stack
void peekStack() {

    if (isEmptyStack()) {

        cout << "Stack kosong!\n";

    } else {

        cout << "Buku paling atas : "
             << stackBuku[top] << endl;
    }
}

// Tampilkan stack
void tampilStack() {

    if (isEmptyStack()) {

        cout << "Stack kosong.\n";

    } else {

        cout << "\nIsi Stack Buku:\n";

        for (int i = top; i >= 0; i--) {

            cout << "- " << stackBuku[i] << endl;
        }
    }
}

// QUEUE

string queueAnggota[MAX];

int front = -1;
int rear = -1;

// Cek queue kosong
bool isEmptyQueue() {
    return front == -1;
}

// Cek queue penuh
bool isFullQueue() {
    return rear == MAX - 1;
}

// Enqueue
void enqueue(string nama) {

    if (isFullQueue()) {

        cout << "Queue penuh! "
             << nama << " tidak bisa masuk.\n";

    } else {

        if (front == -1) {
            front = 0;
        }

        rear++;
        queueAnggota[rear] = nama;

        cout << nama
             << " berhasil masuk antrian.\n";
    }
}

// Dequeue
void dequeue() {

    if (isEmptyQueue()) {

        cout << "Queue kosong!\n";

    } else {

        cout << queueAnggota[front]
             << " keluar dari antrian.\n";

        if (front == rear) {

            front = -1;
            rear = -1;

        } else {

            front++;
        }
    }
}

// Peek queue
void peekQueue() {

    if (isEmptyQueue()) {

        cout << "Queue kosong!\n";

    } else {

        cout << "Antrian terdepan : "
             << queueAnggota[front] << endl;
    }
}

// Tampilkan queue
void tampilQueue() {

    if (isEmptyQueue()) {

        cout << "Queue kosong.\n";

    } else {

        cout << "\nIsi Queue:\n";

        for (int i = front; i <= rear; i++) {

            cout << "- " << queueAnggota[i] << endl;
        }
    }
}

// MAIN

int main() {

    // STACK

    cout << "===== STACK : TUMPUKAN BUKU =====\n\n";

    push("Fisika Dasar");
    push("Kalkulus");
    push("Algoritma");
    push("Jaringan");

    cout << endl;
    peekStack();

    cout << endl;
    pop();
    pop();

    tampilStack();

    // QUEUE

    cout << "\n\n===== QUEUE : ANTRIAN PEMINJAMAN =====\n\n";

    enqueue("Reza");
    enqueue("Mia");
    enqueue("Hendra");

    tampilQueue();

    cout << endl;
    peekQueue();

    cout << endl;
    dequeue();

    tampilQueue();

    cout << endl;
    enqueue("Putri");

    tampilQueue();

    return 0;
}