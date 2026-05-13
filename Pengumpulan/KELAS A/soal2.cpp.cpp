#include <iostream>
using namespace std;

class Queue {
private:
    static const int MAX = 5;
    string data[MAX];
    int front, rear;

public:
    Queue() {
        front = -1;
        rear = -1;
    }

    bool isEmpty() {
        return front == -1;
    }

    bool isFull() {
        return rear == MAX - 1;
    }

    void enqueue(string nama) {
        if (isFull()) {
            cout << "Queue penuh! Tidak bisa menambah "
                 << nama << endl;
        } else {
            if (isEmpty()) {
                front = 0;
            }

            rear++;
            data[rear] = nama;

            cout << "Enqueue: " << nama << endl;
        }
    }

    void dequeue() {
        if (isEmpty()) {
            cout << "Queue kosong! Tidak ada pelanggan.\n";
        } else {
            cout << "Dequeue: " << data[front] << endl;

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
            cout << "Pelanggan terdepan: "
                 << data[front] << endl;
        }
    }

    void tampilkan() {
        if (isEmpty()) {
            cout << "Isi queue kosong.\n";
        } else {
            cout << "Isi Queue: ";
            for (int i = front; i <= rear; i++) {
                cout << data[i] << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    Queue q;

    // Enqueue 3 pelanggan
    q.enqueue("Budi");
    q.tampilkan();

    q.enqueue("Sari");
    q.tampilkan();

    q.enqueue("Eko");
    q.tampilkan();

    // Peek
    q.peek();

    // Dequeue 1 pelanggan
    q.dequeue();
    q.tampilkan();

    // Enqueue pelanggan baru
    q.enqueue("Dewi");
    q.tampilkan();

    return 0;
}
