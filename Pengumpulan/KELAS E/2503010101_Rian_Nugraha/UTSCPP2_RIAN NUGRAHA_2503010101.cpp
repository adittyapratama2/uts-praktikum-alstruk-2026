#include <iostream>
using namespace std;


// STACK : Riwayat Transaksi

const int MAX_STACK = 5;

string stackTransaksi[MAX_STACK];
int top = -1;

// cek stack kosong
bool isEmptyStack() {
    return top == -1;
}

// cek stack penuh
bool isFullStack() {
    return top == MAX_STACK - 1;
}

// push data
void push(string noTransaksi) {
    if (isFullStack()) {
        cout << "Stack penuh, transaksi tidak bisa ditambahkan.\n";
    } else {
        top++;
        stackTransaksi[top] = noTransaksi;
        cout << "Transaksi " << noTransaksi << " berhasil ditambahkan.\n";
    }
}

// pop data
void pop() {
    if (isEmptyStack()) {
        cout << "Stack kosong.\n";
    } else {
        cout << "Transaksi " << stackTransaksi[top]
             << " dihapus dari stack.\n";
        top--;
    }
}

// melihat data teratas
void peekStack() {
    if (isEmptyStack()) {
        cout << "Stack kosong.\n";
    } else {
        cout << "Transaksi teratas : "
             << stackTransaksi[top] << endl;
    }
}

// tampil isi stack
void tampilStack() {
    if (isEmptyStack()) {
        cout << "Stack kosong.\n";
    } else {
        cout << "Isi Stack : ";
        for (int i = top; i >= 0; i--) {
            cout << stackTransaksi[i] << " ";
        }
        cout << endl;
    }
}



// QUEUE : Antrian Pelanggan

const int MAX_QUEUE = 5;

string queuePelanggan[MAX_QUEUE];
int front = 0;
int rear = -1;
int jumlah = 0;

// cek queue kosong
bool isEmptyQueue() {
    return jumlah == 0;
}

// cek queue penuh
bool isFullQueue() {
    return jumlah == MAX_QUEUE;
}

// enqueue data
void enqueue(string nama) {
    if (isFullQueue()) {
        cout << "Queue penuh, pelanggan tidak bisa masuk.\n";
    } else {
        rear++;
        queuePelanggan[rear] = nama;
        jumlah++;

        cout << nama << " masuk ke dalam antrian.\n";
    }
}

// dequeue data
void dequeue() {
    if (isEmptyQueue()) {
        cout << "Queue kosong.\n";
    } else {
        cout << queuePelanggan[front]
             << " keluar dari antrian.\n";

        front++;
        jumlah--;
    }
}

// melihat antrian terdepan
void peekQueue() {
    if (isEmptyQueue()) {
        cout << "Queue kosong.\n";
    } else {
        cout << "Pelanggan terdepan : "
             << queuePelanggan[front] << endl;
    }
}

// tampil isi queue
void tampilQueue() {
    if (isEmptyQueue()) {
        cout << "Queue kosong.\n";
    } else {
        cout << "Isi Queue : ";

        for (int i = front; i <= rear; i++) {
            cout << queuePelanggan[i] << " ";
        }

        cout << endl;
    }
}


int main() {

    // simulasi stack
    cout << "===== STACK : RIWAYAT TRANSAKSI =====\n";

    push("T001");
    push("T002");
    push("T003");
    push("T004");

    tampilStack();

    peekStack();

    pop();
    pop();

    tampilStack();


    // simulasi queue
    cout << "\n===== QUEUE : ANTRIAN PELANGGAN =====\n";

    enqueue("Budi");
    enqueue("Sari");
    enqueue("Eko");

    tampilQueue();

    peekQueue();

    dequeue();

    tampilQueue();

    enqueue("Dewi");

    tampilQueue();

    return 0;
}
