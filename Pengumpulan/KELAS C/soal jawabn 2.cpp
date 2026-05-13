#include <iostream>
using namespace std;

const int MAX = 5;

string transaksi[MAX];
int top = -1;

string pelanggan[MAX];
int front = -1, rear = -1;

bool stackKosong() {
    return top == -1;
}

bool stackPenuh() {
    return top == MAX - 1;
}

void tampilStack() {
    cout << "Isi:\n";
    for (int i = top; i >= 0; i--) {
        cout << transaksi[i] << endl;
    }
}

void push(string data) {
    if (stackPenuh()) {
        cout << "Stack penuh\n";
    } else {
        top++;
        transaksi[top] = data;
        cout << data << " ditambahkan\n";
    }
}

void pop() {
    if (stackKosong()) {
        cout << "Stack kosong\n";
    } else {
        cout << transaksi[top] << " dihapus\n";
        top--;
    }
}

void peekStack() {
    cout << "Teratas: " << transaksi[top] << endl;
}

bool kosong() {
    return front == -1;
}

bool penuh() {
    return rear == MAX - 1;
}

void tampil() {
    cout << "Isi:\n";
    for (int i = front; i <= rear; i++) {
        cout << pelanggan[i] << endl;
    }
}

void enqueue(string nama) {
    if (penuh()) {
        cout << "Penuh\n";
    } else {
        if (kosong()) {
            front = 0;
        }

        rear++;
        pelanggan[rear] = nama;

        cout << nama << " masuk\n";
        tampil();
    }
}

void dequeue() {
    if (kosong()) {
        cout << "Kosong\n";
    } else {
        cout << pelanggan[front] << " keluar\n";
        front++;
        tampil();
    }
}

void peekQueue() {
    cout << "Terdepan: " << pelanggan[front] << endl;
}

int main() {

    cout << "=== STACK ===\n";

    push("T001");
    push("T002");
    push("T003");
    push("T004");

    peekStack();

    pop();
    pop();

    tampilStack();

    cout << "\n=== ANTRIAN ===\n";

    enqueue("Budi");
    enqueue("Sari");
    enqueue("Eko");

    peekQueue();

    dequeue();

    enqueue("Dewi");

    return 0;
}
