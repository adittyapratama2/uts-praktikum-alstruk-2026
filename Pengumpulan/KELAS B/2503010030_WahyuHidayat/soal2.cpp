#include <iostream>
using namespace std;

/* =========================
   STACK : RIWAYAT TRANSAKSI
   ========================= */

const int MAX_STACK = 5;
string stackTransaksi[MAX_STACK];
int top = -1;

// Cek stack kosong
bool isEmptyStack() {
    return top == -1;
}

// Cek stack penuh
bool isFullStack() {
    return top == MAX_STACK - 1;
}

// Push data
void push(string noTransaksi) {
    if (isFullStack()) {
        cout << "Stack penuh! Tidak bisa menambah transaksi.\n";
    } else {
        top++;
        stackTransaksi[top] = noTransaksi;
        cout << "Push: " << noTransaksi << " berhasil ditambahkan.\n";
    }
}

// Pop data
void pop() {
    if (isEmptyStack()) {
        cout << "Stack kosong! Tidak ada data yang dihapus.\n";
    } else {
        cout << "Pop: " << stackTransaksi[top] << " berhasil dihapus.\n";
        top--;
    }
}

// Peek data
void peekStack() {
    if (isEmptyStack()) {
        cout << "Stack kosong.\n";
    } else {
        cout << "Transaksi teratas: " << stackTransaksi[top] << endl;
    }
}

// Tampilkan isi stack
void tampilStack() {
    if (isEmptyStack()) {
        cout << "Isi stack kosong.\n";
    } else {
        cout << "Isi Stack:\n";
        for (int i = top; i >= 0; i--) {
            cout << stackTransaksi[i] << endl;
        }
    }
}

/* =========================
   QUEUE : ANTRIAN PELANGGAN
   ========================= */

const int MAX_QUEUE = 5;
string queuePelanggan[MAX_QUEUE];
int front = -1, rear = -1;

// Cek queue kosong
bool isEmptyQueue() {
    return front == -1;
}

// Cek queue penuh
bool isFullQueue() {
    return rear == MAX_QUEUE - 1;
}

// Enqueue
void enqueue(string nama) {
    if (isFullQueue()) {
        cout << "Queue penuh! Tidak bisa menambah pelanggan.\n";
    } else {
        if (front == -1)
            front = 0;

        rear++;
        queuePelanggan[rear] = nama;

        cout << "Enqueue: " << nama << " masuk ke antrian.\n";
    }
}

// Dequeue
void dequeue() {
    if (isEmptyQueue()) {
        cout << "Queue kosong! Tidak ada pelanggan.\n";
    } else {
        cout << "Dequeue: " << queuePelanggan[front]
             << " keluar dari antrian.\n";

        if (front == rear) {
            front = rear = -1;
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
        cout << "Pelanggan terdepan: "
             << queuePelanggan[front] << endl;
    }
}

// Tampilkan isi queue
void tampilQueue() {
    if (isEmptyQueue()) {
        cout << "Isi queue kosong.\n";
    } else {
        cout << "Isi Queue:\n";
        for (int i = front; i <= rear; i++) {
            cout << queuePelanggan[i] << endl;
        }
    }
}

/* =========================
   PROGRAM UTAMA
   ========================= */

int main() {

    cout << "===== STACK : RIWAYAT TRANSAKSI =====\n";

    // Push 4 transaksi
    push("T001");
    push("T002");
    push("T003");
    push("T004");

    // Tampilkan stack
    tampilStack();

    // Peek
    peekStack();

    // Pop 2 transaksi
    pop();
    pop();

    // Tampilkan stack setelah pop
    cout << "\nSetelah Pop 2 transaksi:\n";
    tampilStack();

    cout << "\n=====================================\n";

    cout << "\n===== QUEUE : ANTRIAN PELANGGAN =====\n";

    // Enqueue 3 pelanggan
    enqueue("Budi");
    enqueue("Sari");
    enqueue("Eko");

    // Tampilkan queue
    tampilQueue();

    // Peek
    peekQueue();

    // Dequeue 1 pelanggan
    dequeue();

    // Tambah pelanggan baru
    enqueue("Dewi");

    // Tampilkan queue setelah operasi
    cout << "\nSetelah Dequeue dan Enqueue:\n";
    tampilQueue();

    return 0;
}
