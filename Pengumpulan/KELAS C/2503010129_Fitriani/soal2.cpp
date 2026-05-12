#include <iostream>
using namespace std;

const int MAX = 5;

//
// ================= STACK =================
//

// Deklarasi stack
string stackTransaksi[MAX];
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
void push(string noTransaksi) {

    if (isFullStack()) {
        cout << "Stack penuh! Transaksi tidak bisa ditambahkan.\n";
    } else {

        top++;
        stackTransaksi[top] = noTransaksi;

        cout << "Transaksi "
             << noTransaksi
             << " berhasil ditambahkan.\n";
    }
}

// Pop stack
void pop() {

    if (isEmptyStack()) {
        cout << "Stack kosong! Tidak ada transaksi.\n";
    } else {

        cout << "Transaksi "
             << stackTransaksi[top]
             << " berhasil dihapus.\n";

        top--;
    }
}

// Peek stack
void peekStack() {

    if (isEmptyStack()) {
        cout << "Stack kosong.\n";
    } else {

        cout << "Transaksi teratas : "
             << stackTransaksi[top]
             << endl;
    }
}

// Tampil stack
void tampilStack() {

    if (isEmptyStack()) {
        cout << "Stack kosong.\n";
    } else {

        cout << "\nIsi Stack:\n";

        for (int i = top; i >= 0; i--) {
            cout << stackTransaksi[i] << endl;
        }
    }
}

//
// ================= QUEUE =================
//

// Deklarasi queue
string queuePelanggan[MAX];

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

        cout << "Queue penuh! Pelanggan tidak bisa ditambahkan.\n";

    } else {

        if (isEmptyQueue()) {
            front = 0;
        }

        rear++;
        queuePelanggan[rear] = nama;

        cout << nama
             << " masuk ke antrian.\n";
    }
}

// Dequeue
void dequeue() {

    if (isEmptyQueue()) {

        cout << "Queue kosong! Tidak ada pelanggan.\n";

    } else {

        cout << queuePelanggan[front]
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

        cout << "Queue kosong.\n";

    } else {

        cout << "Pelanggan terdepan : "
             << queuePelanggan[front]
             << endl;
    }
}

// Tampil queue
void tampilQueue() {

    if (isEmptyQueue()) {

        cout << "Queue kosong.\n";

    } else {

        cout << "\nIsi Queue:\n";

        for (int i = front; i <= rear; i++) {
            cout << queuePelanggan[i] << endl;
        }
    }
}

//
// ================= MAIN =================
//

int main() {

    cout << "=====================================\n";
    cout << "      PROGRAM STACK TRANSAKSI\n";
    cout << "=====================================\n";

    // Push transaksi
    push("T001");
    push("T002");
    push("T003");
    push("T004");

    // Tampilkan stack
    tampilStack();

    // Peek
    cout << endl;
    peekStack();

    // Pop 2 transaksi
    cout << endl;
    pop();
    pop();

    // Tampilkan stack lagi
    tampilStack();

    cout << "\n\n=====================================\n";
    cout << "      PROGRAM QUEUE PELANGGAN\n";
    cout << "=====================================\n";

    // Enqueue pelanggan
    enqueue("Budi");
    tampilQueue();

    enqueue("Sari");
    tampilQueue();

    enqueue("Eko");
    tampilQueue();

    // Peek queue
    cout << endl;
    peekQueue();

    // Dequeue
    cout << endl;
    dequeue();
    tampilQueue();

    // Enqueue lagi
    cout << endl;
    enqueue("Dewi");
    tampilQueue();

    return 0;
}