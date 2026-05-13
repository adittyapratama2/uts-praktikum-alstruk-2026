#include <iostream>
using namespace std;

#define MAX 5

string queueArr[MAX];
int front = 0, rear = -1, count = 0;

bool isEmpty() {
    return count == 0;
}

bool isFull() {
    return count == MAX;
}

void enqueue(string nama) {
    if (isFull()) {
        cout << "Queue penuh!\n";
    } else {
        rear = (rear + 1) % MAX;
        queueArr[rear] = nama;
        count++;
        cout << "Enqueue: " << nama << endl;
    }
}

void dequeue() {
    if (isEmpty()) {
        cout << "Queue kosong!\n";
    } else {
        cout << "Dequeue: " << queueArr[front] << endl;
        front = (front + 1) % MAX;
        count--;
    }
}

void peek() {
    if (!isEmpty()) {
        cout << "Depan: " << queueArr[front] << endl;
    }
}

void display() {
    cout << "Isi queue: ";
    for (int i = 0; i < count; i++) {
        cout << queueArr[(front + i) % MAX] << " ";
    }
    cout << endl;
}

int main() {
    enqueue("Budi");
    enqueue("Sari");
    enqueue("Eko");

    peek();

    dequeue();

    enqueue("Dewi");

    display();

    return 0;
}