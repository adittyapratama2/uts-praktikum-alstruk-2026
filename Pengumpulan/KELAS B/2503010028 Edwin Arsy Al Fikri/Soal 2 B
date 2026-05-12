#include <iostream>
using namespace std;

const int MAX = 5;

string queueAnggota[MAX];
int front = -1;
int rear = -1;

bool isEmpty() {
    return front == -1 || front > rear;
}

bool isFull() {
    return rear == MAX - 1;
}


void enqueue(string nama) {
    if (isFull()) {
        cout << "Queue penuh!" << endl;
    } else {
        if (front == -1) {
            front = 0;
        }

        rear++;
        queueAnggota[rear] = nama;

        cout << nama << " masuk ke antrian." << endl;
    }
}


void dequeue() {
    if (isEmpty()) {
        cout << "Queue kosong!" << endl;
    } else {
        cout << queueAnggota[front]
             << " keluar dari antrian." << endl;

        front++;
    }
}


void peek() {
    if (isEmpty()) {
        cout << "Queue kosong!" << endl;
    } else {
        cout << "Antrian terdepan: "
             << queueAnggota[front] << endl;
    }
}

void tampilQueue() {
    if (isEmpty()) {
        cout << "Queue kosong." << endl;
    } else {
        cout << "Isi Queue:" << endl;

        for (int i = front; i <= rear; i++) {
            cout << "- " << queueAnggota[i] << endl;
        }
    }
}

int main() {
  
    enqueue("Reza");
    enqueue("Mia");
    enqueue("Hendra");

    cout << endl;

    tampilQueue();

    cout << endl;


    peek();

    cout << endl;


    dequeue();

    cout << endl;

    tampilQueue();

    cout << endl;

    enqueue("Putri");

    cout << endl;

    tampilQueue();

    return 0;
}
