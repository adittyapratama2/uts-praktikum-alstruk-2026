#include <iostream>
using namespace std;

#define MAX 5

// A
int stackArr[MAX];
int top = -1;

bool isEmptyStack() {
    return top == -1;
}

bool isFullStack() {
    return top == MAX - 1;
}

void push(int x) {
    if (isFullStack()) {
        cout << "Stack penuh! Tidak bisa menambah T00" << x << endl;
    } else {
        top++;
        stackArr[top] = x;
        cout << "Push T00" << x << " berhasil" << endl;
    }
}

void pop() {
    if (isEmptyStack()) {
        cout << "Stack kosong! Tidak bisa pop" << endl;
    } else {
        cout << "Pop transaksi T00" << stackArr[top] << endl;
        top--;
    }
}

void peekStack() {
    if (isEmptyStack()) {
        cout << "Stack kosong, tidak ada data" << endl;
    } else {
        cout << "Transaksi teratas: T00" << stackArr[top] << endl;
    }
}

void tampilStack() {
    if (isEmptyStack()) {
        cout << "Isi stack kosong" << endl;
    } else {
        cout << "Isi stack: ";
        for (int i = top; i >= 0; i--) {
            cout << "T00" << stackArr[i] << " ";
        }
        cout << endl;
    }
}

// B
string queueArr[MAX];
int front = 0, rear = -1, count = 0;

bool isEmptyQueue() {
    return count == 0;
}

bool isFullQueue() {
    return count == MAX;
}

void enqueue(string nama) {
    if (isFullQueue()) {
        cout << "Queue penuh! Tidak bisa menambah " << nama << endl;
    } else {
        rear = (rear + 1) % MAX;
        queueArr[rear] = nama;
        count++;
        cout << nama << " masuk ke antrian" << endl;
    }
}

void dequeue() {
    if (isEmptyQueue()) {
        cout << "Queue kosong! Tidak bisa dequeue" << endl;
    } else {
        cout << queueArr[front] << " keluar dari antrian" << endl;
        front = (front + 1) % MAX;
        count--;
    }
}

void peekQueue() {
    if (isEmptyQueue()) {
        cout << "Queue kosong" << endl;
    } else {
        cout << "Pelanggan terdepan: " << queueArr[front] << endl;
    }
}

void tampilQueue() {
    if (isEmptyQueue()) {
        cout << "Isi queue kosong" << endl;
    } else {
        cout << "Isi queue: ";
        int i = front;
        for (int j = 0; j < count; j++) {
            cout << queueArr[i] << " ";
            i = (i + 1) % MAX;
        }
        cout << endl;
    }
}

int main() {

    cout << "----SIMULASI STACK TRANSAKSI----" << endl;

    push(1);
    push(2);
    push(3);
    push(4);

    cout << endl;
    peekStack();

    cout << "Keadaan stack setelah push:" << endl;
    tampilStack();

    cout << endl;
    pop();
    pop();

    cout << "Keadaan stack setelah pop:" << endl;
    tampilStack();

    cout << "\n----SIMULASI QUEUE PELANGGAN----" << endl;

    enqueue("Budi");
    enqueue("Sari");
    enqueue("Eko");

    cout << endl;
    peekQueue();

    cout << "Keadaan queue:" << endl;
    tampilQueue();

    cout << endl;
    dequeue();

    enqueue("Dewi");

    cout << "Keadaan queue setelah perubahan:" << endl;
    tampilQueue();

    return 0;
}