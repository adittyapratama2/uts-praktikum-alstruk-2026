#include <iostream>
#include <string>

using namespace std;

#define MAX 5

// ================= STACK =================

string stackTransaksi[MAX];
int top = -1;

bool isEmptyStack() {
    return top == -1;
}

bool isFullStack() {
    return top == MAX - 1;
}

void push(string noTransaksi) {

    if (isFullStack()) {

        cout << "Stack penuh!\n";

    } else {

        top++;
        stackTransaksi[top] = noTransaksi;

        cout << "Transaksi "
             << noTransaksi
             << " berhasil ditambahkan.\n";
    }
}

void pop() {

    if (isEmptyStack()) {

        cout << "Stack kosong!\n";

    } else {

        cout << "Transaksi "
             << stackTransaksi[top]
             << " berhasil dihapus.\n";

        top--;
    }
}

void peekStack() {

    if (isEmptyStack()) {

        cout << "Stack kosong!\n";

    } else {

        cout << "Transaksi teratas : "
             << stackTransaksi[top]
             << endl;
    }
}

void tampilStack() {

    if (isEmptyStack()) {

        cout << "Stack kosong.\n";

    } else {

        cout << "\nIsi Stack:\n";

        for (int i = top; i >= 0; i--) {
            cout << stackTransaksi[i] << endl;
        }
    }

    cout << endl;
}

// ================= QUEUE =================

string queuePelanggan[MAX];
int front = -1;
int rear = -1;

bool isEmptyQueue() {
    return front == -1 || front > rear;
}

bool isFullQueue() {
    return rear == MAX - 1;
}

void enqueue(string nama) {

    if (isFullQueue()) {

        cout << "Queue penuh!\n";

    } else {

        if (front == -1) {
            front = 0;
        }

        rear++;
        queuePelanggan[rear] = nama;

        cout << "Pelanggan "
             << nama
             << " berhasil masuk.\n";
    }
}

void dequeue() {

    if (isEmptyQueue()) {

        cout << "Queue kosong!\n";

    } else {

        cout << "Pelanggan "
             << queuePelanggan[front]
             << " keluar.\n";

        front++;
    }
}

void peekQueue() {

    if (isEmptyQueue()) {

        cout << "Queue kosong!\n";

    } else {

        cout << "Pelanggan terdepan : "
             << queuePelanggan[front]
             << endl;
    }
}

void tampilQueue() {

    if (isEmptyQueue()) {

        cout << "Queue kosong.\n";

    } else {

        cout << "\nIsi Queue:\n";

        for (int i = front; i <= rear; i++) {
            cout << queuePelanggan[i] << endl;
        }
    }

    cout << endl;
}

int main() {

    // ===== STACK =====
    cout << "===== STACK =====\n\n";

    push("T001");
    tampilStack();

    push("T002");
    tampilStack();

    push("T003");
    tampilStack();

    push("T004");
    tampilStack();

    peekStack();

    cout << endl;

    pop();
    tampilStack();

    pop();
    tampilStack();

    // ===== QUEUE =====
    cout << "\n===== QUEUE =====\n\n";

    enqueue("Budi");
    tampilQueue();

    enqueue("Sari");
    tampilQueue();

    enqueue("Eko");
    tampilQueue();

    peekQueue();

    cout << endl;

    dequeue();
    tampilQueue();

    enqueue("Dewi");
    tampilQueue();

    return 0;
}
