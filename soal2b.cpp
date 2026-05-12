#include <iostream>
using namespace std;

const int MAX = 5;
string queue[MAX];
int front = -1, rear = -1;

bool isEmpty() {
    return front == -1;
}

bool isFull() {
    return rear == MAX-1;
}

void enqueue(string nama) {
    if(isFull())
        cout << "Queue penuh!\n";
    else {
        if(front == -1) front = 0;
        queue[++rear] = nama;
        cout << nama << " masuk antrian\n";
    }
}

void dequeue() {
    if(isEmpty())
        cout << "Queue kosong!\n";
    else {
        cout << queue[front] << " keluar\n";
        if(front == rear)
            front = rear = -1;
        else
            front++;
    }
}

void peek() {
    if(isEmpty())
        cout << "Queue kosong\n";
    else
        cout << "Terdepan: " << queue[front] << endl;
}

void tampil() {
    for(int i = front; i <= rear; i++)
        cout << queue[i] << endl;
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