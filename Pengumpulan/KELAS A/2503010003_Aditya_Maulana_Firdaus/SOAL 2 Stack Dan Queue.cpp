#include <iostream>
using namespace std;

const int MAX = 5;

/* ================= STACK ================= */

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
        cout << "Stack penuh!" << endl;
    } else {

        top++;

        stackTransaksi[top] = noTransaksi;

        cout << noTransaksi << " berhasil ditambahkan." << endl;
    }
}

void pop() {

    if (isEmptyStack()) {
        cout << "Stack kosong!" << endl;
    } else {

        cout << stackTransaksi[top] << " dihapus." << endl;

        top--;
    }
}

void peekStack() {

    if (isEmptyStack()) {
        cout << "Stack kosong!" << endl;
    } else {

        cout << "Data teratas : " << stackTransaksi[top] << endl;
    }
}

void displayStack() {

    if (isEmptyStack()) {
        cout << "Stack kosong." << endl;
    } else {

        cout << "Isi Stack : ";

        for (int i = top; i >= 0; i--) {
            cout << stackTransaksi[i] << " ";
        }

        cout << endl;
    }
}

/* ================= QUEUE ================= */

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
        cout << "Queue penuh!" << endl;
    } else {

        if (front == -1) {
            front = 0;
        }

        rear++;

        queuePelanggan[rear] = nama;

        cout << nama << " masuk antrian." << endl;
    }
}

void dequeue() {

    if (isEmptyQueue()) {
        cout << "Queue kosong!" << endl;
    } else {

        cout << queuePelanggan[front] << " keluar antrian." << endl;

        front++;
    }
}

void peekQueue() {

    if (isEmptyQueue()) {
        cout << "Queue kosong!" << endl;
    } else {

        cout << "Pelanggan terdepan : " << queuePelanggan[front] << endl;
    }
}

void displayQueue() {

    if (isEmptyQueue()) {
        cout << "Queue kosong." << endl;
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

    cout << "===== STACK =====" << endl;

    push("T001");
    push("T002");
    push("T003");
    push("T004");

    displayStack();

    peekStack();

    pop();
    pop();

    displayStack();

    cout << "\n===== QUEUE =====" << endl;

    enqueue("Budi");
    enqueue("Sari");
    enqueue("Eko");

    displayQueue();

    peekQueue();

    dequeue();

    displayQueue();

    enqueue("Dewi");

    displayQueue();

    return 0;
}
