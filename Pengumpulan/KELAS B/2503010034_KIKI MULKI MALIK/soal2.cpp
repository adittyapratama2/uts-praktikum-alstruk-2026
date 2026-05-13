#include <iostream>
using namespace std;

const int MAX_STACK = 5;

class Stack {
private:
    string data[MAX_STACK];
    int top;

public:
    Stack() {
        top = -1;
    }

    bool isEmpty() {
        return top == -1;
    }

    bool isFull() {
        return top == MAX_STACK - 1;
    }

    void push(string judul) {
        if (isFull()) {
            cout << "Stack penuh! Buku \"" << judul << "\" tidak dapat ditambahkan.\n";
        } else {
            top++;
            data[top] = judul;
            cout << "Buku \"" << judul << "\" berhasil ditambahkan ke stack.\n";
        }
    }

    void pop() {
        if (isEmpty()) {
            cout << "Stack kosong! Tidak ada buku yang dapat dihapus.\n";
        } else {
            cout << "Buku \"" << data[top] << "\" dihapus dari stack.\n";
            top--;
        }
    }

    void peek() {
        if (isEmpty()) {
            cout << "Stack kosong!\n";
        } else {
            cout << "Buku paling atas: " << data[top] << endl;
        }
    }

    void display() {
        if (isEmpty()) {
            cout << "Stack kosong.\n";
        } else {
            cout << "\nIsi Stack:\n";
            for (int i = top; i >= 0; i--) {
                cout << "- " << data[i] << endl;
            }
        }
    }
};

const int MAX_QUEUE = 5;

class Queue {
private:
    string data[MAX_QUEUE];
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
        return rear == MAX_QUEUE - 1;
    }

    void enqueue(string nama) {
        if (isFull()) {
            cout << "Queue penuh! Anggota \"" << nama << "\" tidak dapat masuk antrian.\n";
        } else {
            if (isEmpty()) {
                front = 0;
            }

            rear++;
            data[rear] = nama;

            cout << "Anggota \"" << nama << "\" masuk ke antrian.\n";
            display();
        }
    }

    void dequeue() {
        if (isEmpty()) {
            cout << "Queue kosong! Tidak ada anggota yang dapat diproses.\n";
        } else {
            cout << "Anggota \"" << data[front] << "\" keluar dari antrian.\n";

            if (front == rear) {
                front = rear = -1;
            } else {
                front++;
            }

            display();
        }
    }

    void peek() {
        if (isEmpty()) {
            cout << "Queue kosong!\n";
        } else {
            cout << "Anggota terdepan: " << data[front] << endl;
        }
    }

    void display() {
        if (isEmpty()) {
            cout << "Queue kosong.\n";
        } else {
            cout << "Isi Queue: ";
            for (int i = front; i <= rear; i++) {
                cout << data[i];

                if (i < rear) {
                    cout << " -> ";
                }
            }
            cout << endl;
        }
    }
};

int main() {

    cout << "=============================\n";
    cout << " STACK : TUMPUKAN BUKU\n";
    cout << "=============================\n\n";

    Stack buku;

    buku.push("Fisika Dasar");
    buku.push("Kalkulus");
    buku.push("Algoritma");
    buku.push("Jaringan");

    buku.display();

    cout << endl;
    buku.peek();

    cout << endl;
    buku.pop();
    buku.pop();

    buku.display();

    cout << "\n\n=============================\n";
    cout << " QUEUE : ANTRIAN PEMINJAMAN\n";
    cout << "=============================\n\n";

    Queue antrian;

    antrian.enqueue("Reza");
    antrian.enqueue("Mia");
    antrian.enqueue("Hendra");

    cout << endl;
    antrian.peek();

    cout << endl;
    antrian.dequeue();

    cout << endl;
    antrian.enqueue("Putri");

    cout << "\nQueue akhir:\n";
    antrian.display();

    return 0;
}
