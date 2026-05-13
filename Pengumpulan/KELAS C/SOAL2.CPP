#include <iostream>
using namespace std;

// ================= STACK =================

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

        cout << "Stack penuh! Data tidak bisa ditambah.\n";

    } else {

        top++;
        stackTransaksi[top] = transaksi;

        cout << "Transaksi "
             << transaksi
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

        cout << "Stack kosong.\n";

    } else {

        cout << "Transaksi teratas : "
             << stackTransaksi[top] << endl;
    }
}

void tampilStack() {

    if (isEmptyStack()) {

        cout << "Isi stack kosong.\n";

    } else {

        cout << "\nIsi Stack:\n";

        for (int i = top; i >= 0; i--) {

            cout << stackTransaksi[i] << endl;
        }
    }
}


// ================= QUEUE =================

const int MAX_QUEUE = 5;

string queuePelanggan[MAX_QUEUE];

int front = -1;
int rear = -1;

bool isEmptyQueue() {
    return rear == -1;
}

bool isFullQueue() {
    return rear == MAX_QUEUE - 1;
}

void enqueue(string nama) {

    if (isFullQueue()) {

        cout << "Queue penuh! Tidak bisa menambah pelanggan.\n";

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

void dequeue() {

    if (isEmptyQueue()) {

        cout << "Queue kosong!\n";

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

void peekQueue() {

    if (isEmptyQueue()) {

        cout << "Queue kosong.\n";

    } else {

        cout << "Pelanggan terdepan : "
             << queuePelanggan[front] << endl;
    }
}

void tampilQueue() {

    if (isEmptyQueue()) {

        cout << "Antrian kosong.\n";

    } else {

        cout << "\nIsi Queue:\n";

        for (int i = front; i <= rear; i++) {

            cout << queuePelanggan[i] << endl;
        }
    }
}


int main() {

    cout << "=====================================\n";
    cout << "A. STACK - RIWAYAT TRANSAKSI\n";
    cout << "=====================================\n\n";

    push("T001");
    push("T002");
    push("T003");
    push("T004");

    cout << endl;

    peekStack();

    cout << endl;

    pop();
    pop();

    tampilStack();

    cout << "\n\n";

    cout << "/////////////////////////////////////\n";
    cout << "B. QUEUE - ANTRIAN PELANGGAN\n";
    cout << "/////////////////////////////////////\n\n";

    enqueue("Budi");
    enqueue("Sari");
    enqueue("Eko");

    tampilQueue();

    cout << endl;

    peekQueue();

    cout << endl;

    dequeue();

    cout << endl;

    enqueue("Dewi");

    tampilQueue();

    cout << endl;

    system("pause");

    return 0;
}