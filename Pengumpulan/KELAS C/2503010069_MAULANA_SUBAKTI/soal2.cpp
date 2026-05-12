#include <iostream>
#include <string>
using namespace std;


const int MAKS = 5;
int stackData[MAKS];
int top = -1;

bool isEmptyStack() { return top == -1; }
bool isFullStack()  { return top == MAKS - 1; }

void push(int noTransaksi) {
    if (isFullStack()) { cout << "[FULL] Stack penuh!\n"; return; }
    stackData[++top] = noTransaksi;
    cout << "[PUSH] T00" << noTransaksi << " masuk stack.\n";
}

void pop() {
    if (isEmptyStack()) { cout << "[EMPTY] Stack kosong!\n"; return; }
    cout << "[POP] T00" << stackData[top--] << " dihapus.\n";
}

void peekStack() {
    if (isEmptyStack()) { cout << "[EMPTY] Stack kosong!\n"; return; }
    cout << "[PEEK] Teratas: T00" << stackData[top] << "\n";
}

void tampilStack() {
    cout << "[ISI STACK] ";
    if (isEmptyStack()) { cout << "(kosong)\n"; return; }
    for (int i = top; i >= 0; i--)
        cout << "T00" << stackData[i] << (i > 0 ? " -> " : "\n");
}
// QUEUE

string queueData[MAKS];
int front = 0, rear = -1, jumlah = 0;

bool isEmptyQueue() { return jumlah == 0; }
bool isFullQueue()  { return jumlah == MAKS; }

void enqueue(string nama) {
    if (isFullQueue()) { cout << "[FULL] Queue penuh!\n"; return; }
    rear = (rear + 1) % MAKS;
    queueData[rear] = nama;
    jumlah++;
    cout << "[ENQUEUE] " << nama << " masuk antrian.\n";
}

void dequeue() {
    if (isEmptyQueue()) { cout << "[EMPTY] Queue kosong!\n"; return; }
    cout << "[DEQUEUE] " << queueData[front] << " keluar antrian.\n";
    front = (front + 1) % MAKS;
    jumlah--;
}

void peekQueue() {
    if (isEmptyQueue()) { cout << "[EMPTY] Queue kosong!\n"; return; }
    cout << "[PEEK] Terdepan: " << queueData[front] << "\n";
}

void tampilQueue() {
    cout << "[ISI QUEUE] ";
    if (isEmptyQueue()) { cout << "(kosong)\n"; return; }
    for (int i = 0; i < jumlah; i++)
        cout << queueData[(front + i) % MAKS] << (i < jumlah - 1 ? " -> " : "\n");
}


int main() {
    cout << "=== STACK ===\n";
    push(1); push(2); push(3); push(4);
    tampilStack();
    peekStack();
    pop(); pop();
    tampilStack();

    cout << "\n=== QUEUE ===\n";
    enqueue("Budi"); enqueue("Sari"); enqueue("Eko");
    tampilQueue();
    peekQueue();
    dequeue();
    enqueue("Dewi");
    tampilQueue();

    return 0;
}