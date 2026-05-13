#include <iostream>
using namespace std;

const int MAX = 5;

string queueData[MAX];
int front = 0;
int rear = -1;
int count = 0;

bool isEmpty() {
    return count == 0;
}

bool isFull() {
    return count == MAX;
}

void enqueue(string nama) {
    if (isFull()) {
        cout << "Queue penuh! Tidak bisa menambah pelanggan.\n";
    } else {
        rear++;
        queueData[rear] = nama;
        count++;

        cout << nama << " masuk ke antrian.\n";
    }
}

void dequeue() {
    if (isEmpty()) {
        cout << "Queue kosong! Tidak ada pelanggan.\n";
    } else {
        cout << queueData[front]
             << " keluar dari antrian.\n";

        front++;
        count--;
    }
}

void peek() {
    if (isEmpty()) {
        cout << "Queue kosong.\n";
    } else {
        cout << "Pelanggan terdepan : "
             << queueData[front] << endl;
    }
}

void tampilkan() {
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

    enqueue("Ilham");
    enqueue("Syahril");
    enqueue("Faza");

    cout << endl;

    peek();

    cout << endl;

    dequeue();

    cout << endl;

    enqueue("Fabian");

    cout << endl;

    tampilkan();

    return 0;
}
