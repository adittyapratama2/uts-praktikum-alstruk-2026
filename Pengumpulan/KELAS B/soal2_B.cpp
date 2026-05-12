#include <iostream>
using namespace std;

const int MAX = 5;

string queueData[MAX];
int front = -1;
int rear = -1;

bool isEmpty() {
    return front == -1;
}

bool isFull() {
    return rear == MAX - 1;
}

void enqueue(string nama) {
    if (isFull()) {
        cout << "Queue penuh!\n";
    } else {
        if (isEmpty()) {
            front = 0;
        }

        rear++;
        queueData[rear] = nama;

        cout << "Enqueue: " << nama << endl;
    }
}

void dequeue() {
    if (isEmpty()) {
        cout << "Queue kosong!\n";
    } else {
        cout << "Dequeue: " << queueData[front] << endl;

        if (front == rear) {
            front = rear = -1;
        } else {
            front++;
        }
    }
}

void peek() {
    if (isEmpty()) {
        cout << "Queue kosong!\n";
    } else {
        cout << "Pelanggan terdepan: " << queueData[front] << endl;
    }
}

void tampilQueue() {
    if (isEmpty()) {
        cout << "Queue kosong.\n";
    } else {
        cout << "Isi Queue:\n";

        for (int i = front; i <= rear; i++) {
            cout << queueData[i] << endl;
        }
    }
}

int main() {

    enqueue("Budi");
    enqueue("Sari");
    enqueue("Eko");

    cout << endl;
    peek();

    cout << endl;
    dequeue();

    cout << endl;
    enqueue("Dewi");

    cout << endl;
    tampilQueue();

    return 0;
}
