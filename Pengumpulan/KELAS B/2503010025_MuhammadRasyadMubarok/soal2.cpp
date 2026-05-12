#include <iostream>
using namespace std;

/* ================= STACK ================= */

const int MAX_STACK = 5;

string stackTransaksi[MAX_STACK];
int top = -1;

bool isEmptyStack() {
    return top == -1;
}

bool isFullStack() {
    return top == MAX_STACK - 1;
}

void push(string transaksi) {

    if (isFullStack()) {
        cout << "Stack penuh!\n";
    } else {

        top++;
        stackTransaksi[top] = transaksi;

        cout << "Tambah Transaksi: " << transaksi << endl;
    }
}

void pop() {

    if (isEmptyStack()) {
        cout << "Stack kosong!\n";
    } else {

        cout << "Hapus Transaksi : " << stackTransaksi[top] << endl;

        top--;
    }
}

void peekStack() {

    if (isEmptyStack()) {
        cout << "Stack kosong!\n";
    } else {

        cout << "Transaksi Teratas : " << stackTransaksi[top] << endl;
    }
}

void tampilStack() {

    if (isEmptyStack()) {
        cout << "Isi Stack : kosong\n";
    } else {

        cout << "Isi Stack : ";

        for (int i = top; i >= 0; i--) {
            cout << stackTransaksi[i] << " ";
        }

        cout << endl;
    }
}

/* ================= QUEUE ================= */

const int MAX_QUEUE = 5;

string queuePelanggan[MAX_QUEUE];
int front = -1, rear = -1;

bool isEmptyQueue() {
    return front == -1;
}

bool isFullQueue() {
    return rear == MAX_QUEUE - 1;
}

void enqueue(string nama) {

    if (isFullQueue()) {
        cout << "Queue penuh!\n";
    } else {

        if (isEmptyQueue()) {
            front = 0;
        }

        rear++;
        queuePelanggan[rear] = nama;

        cout << nama << " masuk queue\n";
    }
}

void dequeue() {

    if (isEmptyQueue()) {
        cout << "Queue kosong!\n";
    } else {

        cout << queuePelanggan[front]
             << " keluar dari queue\n";

        if (front == rear) {
            front = -1;
            rear = -1;
        } else {
            front++;
        }
    }
}

void peekQueue() {

    if (isEmptyQueue()) {
        cout << "Queue kosong!\n";
    } else {

        cout << "Antrian depan : "
             << queuePelanggan[front] << endl;
    }
}

void tampilQueue() {

    if (isEmptyQueue()) {
        cout << "Queue kosong!\n";
    } else {

        cout << "Isi Queue : ";

        for (int i = front; i <= rear; i++) {
            cout << queuePelanggan[i] << " ";
        }

        cout << endl;
    }
}

/* ================= MAIN ================= */

int main() {

    cout << "===== STACK : RIWAYAT TRANSAKSI =====\n\n";

    push("T001");
    tampilStack();
    cout << endl;

    push("T002");
    tampilStack();
    cout << endl;

    push("T003");
    tampilStack();
    cout << endl;

    push("T004");
    tampilStack();
    cout << endl;

    peekStack();
    cout << endl;

    pop();
    tampilStack();
    cout << endl;

    pop();
    tampilStack();

    cout << "\n=====================================\n\n";

    cout << "===== QUEUE : ANTRIAN PELANGGAN =====\n\n";

    enqueue("Budi");
    tampilQueue();
    cout << endl;

    enqueue("Sari");
    tampilQueue();
    cout << endl;

    enqueue("Eko");
    tampilQueue();
    cout << endl;

    peekQueue();
    cout << endl;

    dequeue();
    tampilQueue();
    cout << endl;

    enqueue("Dewi");
    tampilQueue();

    return 0;
}
