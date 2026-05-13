#include <iostream>
using namespace std;

const int MAX = 5;

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
        return front == -1;
    }

    bool isFull() {
        return rear == MAX - 1;
    }

    void enqueue(string nama) {
        if (isFull()) {
            cout << "Queue penuh! Anggota " << nama
                 << " tidak dapat masuk antrian.\n";
        } else {
            if (isEmpty()) {
                front = 0;
            }

            rear++;
            data[rear] = nama;

            cout << "Enqueue: " << nama
                 << " berhasil masuk antrian.\n";
        }

        tampilkan();
        cout << endl;
    }

    void dequeue() {
        if (isEmpty()) {
            cout << "Queue kosong! Tidak ada anggota yang keluar.\n";
        } else {
            cout << "Dequeue: " << data[front]
                 << " keluar dari antrian.\n";

            if (front == rear) {
                front = rear = -1;
            } else {
                front++;
            }
        }

        tampilkan();
        cout << endl;
    }

    void peek() {
        if (isEmpty()) {
            cout << "Queue kosong!\n";
        } else {
            cout << "Anggota terdepan: " << data[front] << endl;
        }
    }

    void tampilkan() {
        if (isEmpty()) {
            cout << "Isi queue kosong.\n";
        } else {
            cout << "Isi Queue:\n";
            for (int i = front; i <= rear; i++) {
                cout << "- " << data[i] << endl;
            }
        }
    }
};

int main() {
    Queue q;

    // Enqueue 3 anggota
    q.enqueue("Reza");
    q.enqueue("Mia");
    q.enqueue("Hendra");

    // Menampilkan anggota terdepan
    q.peek();

    cout << endl;

    // Dequeue 1 anggota
    q.dequeue();

    // Enqueue anggota baru
    q.enqueue("Putri");

    return 0;
}