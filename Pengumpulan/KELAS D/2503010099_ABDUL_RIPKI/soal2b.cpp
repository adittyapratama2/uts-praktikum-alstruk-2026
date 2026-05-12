#include <iostream>
#include <string>
using namespace std;

struct Queue {
    string data[5];
    int front = -1;
    int rear  = -1;

    bool isEmpty() { return front == -1; }
    bool isFull()  { return rear == 4; }

    void enqueue(string nama) {
        if (isFull()) {
            cout << "Queue penuh! Tidak bisa menambah " << nama << "\n";
            return;
        }
        if (isEmpty()) front = 0;
        data[++rear] = nama;
        cout << "Enqueue " << nama << " -> OK\n";
    }

    void dequeue() {
        if (isEmpty()) {
            cout << "Queue kosong! Tidak ada yang bisa di-dequeue\n";
            return;
        }
        cout << "Dequeue " << data[front] << " -> OK\n";
        if (front == rear) { front = rear = -1; } // queue jadi kosong
        else front++;
    }

    string peek() {
        if (isEmpty()) {
            cout << "Queue kosong!\n";
            return "";
        }
        return data[front];
    }

    void tampilkan() {
        if (isEmpty()) {
            cout << "Queue kosong\n";
            return;
        }
        cout << "Isi queue (front -> rear): ";
        for (int i = front; i <= rear; i++)
            cout << data[i] << (i < rear ? " -> " : "");
        cout << "\n";
    }
};

int main() {
    Queue q;

    cout << "=== Enqueue 3 pelanggan ===\n";
    q.enqueue("Budi");
    q.enqueue("Sari");
    q.enqueue("Eko");

    cout << "\nPelanggan terdepan (peek): " << q.peek() << "\n";
    cout << "\n";
    q.tampilkan();

    cout << "\n=== Dequeue 1 pelanggan ===\n";
    q.dequeue();
    q.tampilkan();

    cout << "\n=== Enqueue pelanggan baru ===\n";
    q.enqueue("Dewi");
    q.tampilkan();

    return 0;
}
