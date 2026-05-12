#include <iostream>
using namespace std;

// ================= STACK =================

const int MAX = 5;

string stackData[MAX];
int top = -1;

// Cek stack kosong
bool isEmptyStack() {
    return top == -1;
}

// Cek stack penuh
bool isFullStack() {
    return top == MAX - 1;
}

// Push
void push(string data) {
    if(isFullStack()) {
        cout << "Stack penuh!\n";
    } else {
        top++;
        stackData[top] = data;
        cout << data << " berhasil ditambahkan ke stack.\n";
    }
}

// Pop
void pop() {
    if(isEmptyStack()) {
        cout << "Stack kosong!\n";
    } else {
        cout << stackData[top] << " dihapus dari stack.\n";
        top--;
    }
}

// Peek
void peekStack() {
    if(isEmptyStack()) {
        cout << "Stack kosong!\n";
    } else {
        cout << "Data teratas stack : " << stackData[top] << endl;
    }
}

// Tampilkan stack
void tampilStack() {
    if(isEmptyStack()) {
        cout << "Stack kosong!\n";
    } else {
        cout << "Isi Stack:\n";

        for(int i = top; i >= 0; i--) {
            cout << stackData[i] << endl;
        }
    }
}

// ================= QUEUE =================

string queueData[MAX];
int front = 0;
int rear = -1;
int jumlah = 0;

// Cek queue kosong
bool isEmptyQueue() {
    return jumlah == 0;
}

// Cek queue penuh
bool isFullQueue() {
    return jumlah == MAX;
}

// Enqueue
void enqueue(string nama) {
    if(isFullQueue()) {
        cout << "Queue penuh!\n";
    } else {
        rear++;
        queueData[rear] = nama;
        jumlah++;

        cout << nama << " masuk ke queue.\n";
    }
}

// Dequeue
void dequeue() {
    if(isEmptyQueue()) {
        cout << "Queue kosong!\n";
    } else {
        cout << queueData[front] << " keluar dari queue.\n";

        front++;
        jumlah--;
    }
}

// Peek queue
void peekQueue() {
    if(isEmptyQueue()) {
        cout << "Queue kosong!\n";
    } else {
        cout << "Pelanggan terdepan : " << queueData[front] << endl;
    }
}

// Tampilkan queue
void tampilQueue() {
    if(isEmptyQueue()) {
        cout << "Queue kosong!\n";
    } else {
        cout << "Isi Queue:\n";

        for(int i = front; i <= rear; i++) {
            cout << queueData[i] << endl;
        }
    }
}

// ================= MAIN =================

int main() {

    cout << "===== STACK : RIWAYAT TRANSAKSI =====\n";

    push("T001");
    push("T002");
    push("T003");
    push("T004");

    peekStack();

    pop();
    pop();

    tampilStack();

    cout << "\n===== QUEUE : ANTRIAN PELANGGAN =====\n";

    enqueue("Fikri");
    enqueue("Ariel Noah");
    enqueue("Doel Sumbang");

    tampilQueue();

    peekQueue();

    dequeue();

    enqueue("Dewa 19");

    tampilQueue();

    return 0;
}