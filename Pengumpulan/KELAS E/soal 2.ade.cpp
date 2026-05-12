#include <iostream>
using namespace std;

//////////////////////
// STACK
//////////////////////

const int MAX_STACK = 5;
string stackTransaksi[MAX_STACK];
int top = -1;

// Mengecek stack kosong
bool isEmptyStack() {
    return top == -1;
}

// Mengecek stack penuh
bool isFullStack() {
    return top == MAX_STACK - 1;
}

// Push data ke stack
void push(string noTransaksi) {
    if (isFullStack()) {
        cout << "Stack penuh! Tidak bisa menambah transaksi.\n";
    } else {
        top++;
        stackTransaksi[top] = noTransaksi;
        cout << "Push berhasil: " << noTransaksi << endl;
    }
}

// Pop data dari stack
void pop() {
    if (isEmptyStack()) {
        cout << "Stack kosong! Tidak ada data yang dihapus.\n";
    } else {
        cout << "Pop transaksi: " << stackTransaksi[top] << endl;
        top--;
    }
}

// Melihat data teratas
void peekStack() {
    if (isEmptyStack()) {
        cout << "Stack kosong.\n";
    } else {
        cout << "Transaksi teratas: " << stackTransaksi[top] << endl;
    }
}

// Menampilkan isi stack
void tampilStack() {
    if (isEmptyStack()) {
        cout << "Stack kosong.\n";
    } else {
        cout << "Isi Stack:\n";
        for (int i = top; i >= 0; i--) {
            cout << stackTransaksi[i] << endl;
        }
    }
}

//////////////////////
// QUEUE
//////////////////////

const int MAX_QUEUE = 5;
string queuePelanggan[MAX_QUEUE];
int front = -1;
int rear = -1;

// Mengecek queue kosong
bool isEmptyQueue() {
    return front == -1;
}

// Mengecek queue penuh
bool isFullQueue() {
    return rear == MAX_QUEUE - 1;
}

// Enqueue data
void enqueue(string nama) {
    if (isFullQueue()) {
        cout << "Queue penuh! Tidak bisa menambah pelanggan.\n";
    } else {
        if (isEmptyQueue()) {
            front = 0;
        }

        rear++;
        queuePelanggan[rear] = nama;

        cout << "Enqueue berhasil: " << nama << endl;
    }
}

// Dequeue data
void dequeue() {
    if (isEmptyQueue()) {
        cout << "Queue kosong! Tidak ada pelanggan.\n";
    } else {
        cout << "Dequeue pelanggan: " << queuePelanggan[front] << endl;

        if (front == rear) {
            front = rear = -1;
        } else {
            front++;
        }
    }
}

// Melihat antrian terdepan
void peekQueue() {
    if (isEmptyQueue()) {
        cout << "Queue kosong.\n";
    } else {
        cout << "Pelanggan terdepan: " << queuePelanggan[front] << endl;
    }
}

// Menampilkan isi queue
void tampilQueue() {
    if (isEmptyQueue()) {
        cout << "Queue kosong.\n";
    } else {
        cout << "Isi Queue:\n";
        for (int i = front; i <= rear; i++) {
            cout << queuePelanggan[i] << endl;
        }
    }
}

//////////////////////
// MAIN PROGRAM
//////////////////////

int main() {

    cout << "=============================\n";
    cout << " STACK - RIWAYAT TRANSAKSI\n";
    cout << "=============================\n";

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
    cout << "\nSetelah pop 2 transaksi:\n";
    tampilStack();

    cout << "\n=============================\n";
    cout << " QUEUE - ANTRIAN PELANGGAN\n";
    cout << "=============================\n";

    // Enqueue 3 pelanggan
    enqueue("Budi");
    enqueue("Sari");
    enqueue("Eko");

    // Tampilkan queue
    tampilQueue();

    // Peek queue
    peekQueue();

    // Dequeue 1 pelanggan
    dequeue();

    // Tampilkan queue
    cout << "\nSetelah dequeue:\n";
    tampilQueue();

    // Enqueue pelanggan baru
    enqueue("Dewi");

    // Tampilkan queue akhir
    cout << "\nQueue setelah enqueue Dewi:\n";
    tampilQueue();

    return 0;
}
