#include <iostream>
using namespace std;

string queue[5];
int front = 0, rear = -1;

bool isEmpty() {
    return rear < front;
}

bool isFull() {
    return rear == 4;
}

void enqueue(string nama) {
    if (isFull()) {
        cout << "Queue penuh\n";
    } else {
        rear++;
        queue[rear] = nama;
        cout << nama << " masuk queue\n";
    }
}

void dequeue() {
    if (isEmpty()) {
        cout << "Queue kosong\n";
    } else {
        cout << queue[front] << " keluar queue\n";
        front++;
    }
}

void peek() {
    if (isEmpty()) {
        cout << "Queue kosong\n";
    } else {
        cout << "Depan: " << queue[front] << endl;
    }
}

void tampil() {
    for (int i = front; i <= rear; i++) {
        cout << queue[i] << endl;
    }
}

int main() {

    enqueue("Reza");
    enqueue("Mia");
    enqueue("Hendra");

    peek();

    dequeue();

    enqueue("Putri");

    cout << "\nIsi Queue:\n";
    tampil();

    return 0;
}
