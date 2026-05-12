#include <iostream>
using namespace std;

string queue[5];
int front = 0;
int rear = -1;

void tampil();

bool isEmpty() {
    return rear < front;
}

bool isFull() {
    return rear == 4;
}

void enqueue(string nama) {
    if (isFull()) {
        cout << "Queue penuh!" << endl;
    } else {
        rear++;
        queue[rear] = nama;
        cout << nama << " masuk ke antrian" << endl;
        tampil();
    }
}

void dequeue() {
    if (isEmpty()) {
        cout << "Queue kosong!" << endl;
    } else {
        cout << queue[front] << " keluar dari antrian" << endl;
        front++;
        tampil();
    }
}

void peek() {
    if (isEmpty()) {
        cout << "Queue kosong" << endl;
    } else {
        cout << "Antrian terdepan : " << queue[front] << endl;
    }
}


void tampil() {
    if (isEmpty()) {
        cout << "Antrian kosong" << endl;
    } else {
        cout << "Isi antrian : ";
        for (int i = front; i <= rear; i++) {
            cout << queue[i] << " ";
        }
        cout << endl;
    }
}

int main() {

    enqueue("dava");
    enqueue("dableng");
    enqueue("dxbara");

    cout << endl;
    peek();

    cout << endl;
    dequeue();

    cout << endl;
    enqueue("adiks");

    return 0;
}
