#include <iostream>
using namespace std;

#define MAX 5

class Queue {
private:
    string data[MAX];
    int front, rear;

public:
    Queue() {
        front = -1;
        rear = -1;
    }

    bool isEmpty() {
        return (front == -1 && rear == -1);
    }

    bool isFull() {
        return (rear == MAX - 1);
    }

    void enqueue(string nama) {
        if (isFull()) {
            cout << "Queue penuh. Tidak bisa menambahkan " << nama << endl;
            return;
        }
        if (isEmpty()) {
            front = rear = 0;
        } else {
            rear++;
        }
        data[rear] = nama;
        cout << nama << " masuk ke antrian." << endl;
        display();
    }

    void dequeue() {
        if (isEmpty()) {
            cout << "Queue kosong. Tidak ada yang bisa dikeluarkan." << endl;
            return;
        }
        cout << data[front] << " keluar dari antrian." << endl;
        if (front == rear) {
            front = rear = -1; // reset jika kosong
        } else {
            front++;
        }
        display();
    }

    void peek() {
        if (isEmpty()) {
            cout << "Queue kosong. Tidak ada pelanggan terdepan." << endl;
        } else {
            cout << "Pelanggan terdepan: " << data[front] << endl;
        }
    }

    void display() {
        if (isEmpty()) {
            cout << "Isi queue: [kosong]" << endl;
            return;
        }
        cout << "Isi queue: ";
        for (int i = front; i <= rear; i++) {
            cout << data[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    Queue q;

    // Skenario simulasi
    q.enqueue("Budi");
    q.enqueue("Sari");
    q.enqueue("Eko");

    q.peek(); // tampilkan pelanggan terdepan

    q.dequeue(); // keluarkan 1 pelanggan

    q.enqueue("Dewi"); // tambahkan pelanggan baru

    return 0;
}

