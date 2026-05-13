#include <iostream>
#include <string>
using namespace std;

const int MAX_SIZE = 5;

//Stack
int stackData[MAX_SIZE];
int top = -1;

bool isEmptyStack() {
    return top == -1;
}

bool isFullStack() {
    return top == MAX_SIZE - 1;
}

void push(int noTransaksi) {
    if (isFullStack()) {
        cout << "Transaksi penuh! Tidak bisa menambahkan transaksi NO " << noTransaksi << "." << endl;
    } else {
        top++;
        stackData[top] = noTransaksi;
        cout << "Transaksi NO " << noTransaksi << " berhasil. Antrian saat ini: NO " << stackData[top] << endl;
    }
}

void pop() {
    if (isEmptyStack()) {
        cout << "Transaksi kosong! Tidak ada transaksi yang bisa dihapus." << endl;
    } else {
        cout << "Transaksi NO " << stackData[top] << " berhasil." << endl;
        top--;
    }
}

int peekStack() {
    if (isEmptyStack()) {
        cout << "Transaksi kosong! Tidak ada transaksi teratas." << endl;
        return -1;
    } else {
        cout << "Transaksi teratas adalah NO " << stackData[top] << endl;
        return stackData[top];
    }
}

void tampilStack() {
    cout << "Antrian saat ini: ";
    if (isEmptyStack()) {
        cout << "(kosong)";
    } else {
        for (int i = top; i >= 0; i--) {
            cout << "NO " << stackData[i];
            if (i > 0) cout << " -> ";
        }
    }
    cout << endl;
    cout << "Antrian: " << (isFullStack() ? "penuh" : (isEmptyStack() ? "kosong" : "tersedia"))
         << " | Jumlah: " << (top + 1) << "/" << MAX_SIZE << endl;
}

void demoStack() {
    push(1);
    push(2);
    push(3);
    push(4);
    tampilStack();

    peekStack();

    pop();
    pop();
    tampilStack();

    tampilStack();

    cout << endl;
}

// --- Queue ---
string queueData[MAX_SIZE];
int frontIdx = -1;
int rearIdx  = -1;

bool isEmptyQueue() {
    return frontIdx == -1;
}

bool isFullQueue() {
    return rearIdx == MAX_SIZE - 1;
}

void enqueue(string nama) {
    if (isFullQueue()) {
        cout << "Antrian penuh! " << nama << " tidak bisa masuk antrian." << endl;
    } else {
        if (isEmptyQueue()) {
            frontIdx = 0;
        }
        rearIdx++;
        queueData[rearIdx] = nama;
        cout << "Antrian '" << nama << "' berhasil. Pelanggan saat ini: " << queueData[rearIdx] << endl;
    }
}

void dequeue() {
    if (isEmptyQueue()) {
        cout << "Antrian kosong! Tidak ada pelanggan yang bisa dilayani." << endl;
    } else {
        cout << "Pelanggan '" << queueData[frontIdx] << "' telah dilayani." << endl;
        if (frontIdx == rearIdx) {
            frontIdx = -1;
            rearIdx  = -1;
        } else {
            frontIdx++;
        }
    }
}

void peekQueue() {
    if (isEmptyQueue()) {
        cout << "Antrian kosong! Tidak ada pelanggan terdepan." << endl;
    } else {
        cout << "Pelanggan terdepan adalah '" << queueData[frontIdx] << "'" << endl;
    }
}

void tampilQueue() {
    cout << "Isi Antrian saat ini: ";
    if (isEmptyQueue()) {
        cout << "(kosong)";
    } else {
        for (int i = frontIdx; i <= rearIdx; i++) {
            cout << queueData[i];
            if (i < rearIdx) cout << " -> ";
        }
    }
    cout << endl;

    int jumlah = isEmptyQueue() ? 0 : (rearIdx - frontIdx + 1);
    cout << "Antrian: " << (isFullQueue() ? "penuh" : (isEmptyQueue() ? "kosong" : "tersedia"))
         << " | Jumlah pelanggan: " << jumlah << "/" << MAX_SIZE << endl;
}

void demoQueue() {

    enqueue("Budi");
    enqueue("Sari");
    enqueue("Eko");
    tampilQueue();

    peekQueue();

    dequeue();
    tampilQueue();

    enqueue("Dewi");
    tampilQueue();

    cout << endl;
}

int main() {
    cout << "============================================================" << endl;
    cout << "   SISTEM ANTRIAN KASIR SUPERMARKET" << endl;
    cout << "============================================================" << endl;
    cout << endl;

    demoStack();
    demoQueue();

    cout << "============================================================" << endl;
    cout << "   Program selesai." << endl;
    cout << "============================================================" << endl;

    return 0;
}