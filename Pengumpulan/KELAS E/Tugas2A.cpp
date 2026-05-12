#include <iostream>
using namespace std;

/* stack transaksi */

const int MAX_STACK = 5;

string stackTransaksi[MAX_STACK];
int top = -1;

bool isEmptyStack() {
    return top == -1;
}

bool isFullStack() {
    return top == MAX_STACK - 1;
}

void push(string noTransaksi) {
    if (isFullStack()) {
        cout << "Stack penuh! Transaksi tidak bisa ditambahkan.\n";
    } else {
        top++;
        stackTransaksi[top] = noTransaksi;
        cout << "Push transaksi " << noTransaksi << " berhasil.\n";
    }
}

void pop() {
    if (isEmptyStack()) {
        cout << "Stack kosong! Tidak ada transaksi yang dihapus.\n";
    } else {
        cout << "Pop transaksi " << stackTransaksi[top] << endl;
        top--;
    }
}

void peekStack() {
    if (isEmptyStack()) {
        cout << "Stack kosong!\n";
    } else {
        cout << "Transaksi teratas: " << stackTransaksi[top] << endl;
    }
}

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


/* que antrian pelanggan */

const int MAX_QUEUE = 5;

string queuePelanggan[MAX_QUEUE];
int front = 0;
int rear = -1;
int jumlah = 0;

bool isEmptyQueue() {
    return jumlah == 0;
}

bool isFullQueue() {
    return jumlah == MAX_QUEUE;
}

void enqueue(string nama) {
    if (isFullQueue()) {
        cout << "Queue penuh! Pelanggan tidak bisa ditambahkan.\n";
    } else {
        rear++;
        queuePelanggan[rear] = nama;
        jumlah++;

        cout << "Enqueue pelanggan " << nama << " berhasil.\n";
    }
}

void dequeue() {
    if (isEmptyQueue()) {
        cout << "Queue kosong! Tidak ada pelanggan.\n";
    } else {
        cout << "Dequeue pelanggan " << queuePelanggan[front] << endl;
        front++;
        jumlah--;
    }
}

void peekQueue() {
    if (isEmptyQueue()) {
        cout << "Queue kosong!\n";
    } else {
        cout << "Pelanggan terdepan: " << queuePelanggan[front] << endl;
    }
}

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


/* program mainn */

int main() {

    cout << "===== STACK : RIWAYAT TRANSAKSI =====\n";

    push("T001");
    push("T002");
    push("T003");
    push("T004");

    cout << endl;
    peekStack();

    cout << endl;
    pop();
    pop();

    cout << endl;
    tampilStack();


    cout << "\n\n===== QUEUE : ANTRIAN PELANGGAN =====\n";

    enqueue("Budi");
    enqueue("Sari");
    enqueue("Eko");

    cout << endl;
    tampilQueue();

    cout << endl;
    peekQueue();

    cout << endl;
    dequeue();

    cout << endl;
    tampilQueue();

    cout << endl;
    enqueue("Dewi");

    cout << endl;
    tampilQueue();

    return 0;
}
