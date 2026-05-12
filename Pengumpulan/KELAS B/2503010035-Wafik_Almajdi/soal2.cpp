#include <iostream>
using namespace std;

const int MAX = 5;

// ================= STACK =================
class Stack {
private:
    string data[MAX];
    int top;

public:
    // Constructor
    Stack() {
        top = -1;
    }

    // Cek stack kosong
    bool isEmpty() {
        return top == -1;
    }

    // Cek stack penuh
    bool isFull() {
        return top == MAX - 1;
    }

    // Push data
    void push(string noTransaksi) {
        if (isFull()) {
            cout << "Stack penuh! Tidak bisa menambah transaksi "
                 << noTransaksi << endl;
        } else {
            top++;
            data[top] = noTransaksi;

            cout << "Push berhasil: " << noTransaksi << endl;
        }
    }

    // Pop data
    void pop() {
        if (isEmpty()) {
            cout << "Stack kosong! Tidak ada data yang dihapus." << endl;
        } else {
            cout << "Pop transaksi: " << data[top] << endl;
            top--;
        }
    }

    // Peek stack
    void peek() {
        if (isEmpty()) {
            cout << "Stack kosong!" << endl;
        } else {
            cout << "Transaksi teratas: " << data[top] << endl;
        }
    }

    // Tampilkan isi stack
    void display() {
        if (isEmpty()) {
            cout << "Isi stack kosong." << endl;
        } else {
            cout << "Isi Stack:" << endl;

            for (int i = top; i >= 0; i--) {
                cout << data[i] << endl;
            }
        }
    }
};

// ================= QUEUE =================
class Queue {
private:
    string data[MAX];
    int front;
    int rear;

public:
    // Constructor
    Queue() {
        front = -1;
        rear = -1;
    }

    // Cek queue kosong
    bool isEmpty() {
        return front == -1;
    }

    // Cek queue penuh
    bool isFull() {
        return rear == MAX - 1;
    }

    // Enqueue
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

            cout << "Enqueue berhasil: " << nama << endl;
        }
    }

    // Dequeue
    void dequeue() {
        if (isEmpty()) {
            cout << "Queue kosong! Tidak ada data yang dihapus." << endl;
        } else {
            cout << "Dequeue pelanggan: " << data[front] << endl;

            if (front == rear) {
                front = rear = -1;
            } else {
                front++;
            }
        }
    }

    // Peek queue
    void peek() {
        if (isEmpty()) {
            cout << "Queue kosong!" << endl;
        } else {
            cout << "Pelanggan terdepan: "
                 << data[front] << endl;
        }
    }

    // Tampilkan isi queue
    void display() {
        if (isEmpty()) {
            cout << "Isi queue kosong." << endl;
        } else {
            cout << "Isi Queue:" << endl;

            for (int i = front; i <= rear; i++) {
                cout << data[i] << endl;
            }
        }
    }
};

// ================= MAIN =================
int main() {

    // ===== STACK =====
    Stack s;

    cout << "===== SIMULASI STACK =====" << endl;

    s.push("T001");
    s.push("T002");
    s.push("T003");
    s.push("T004");

    cout << endl;

    s.peek();

    cout << endl;

    s.pop();
    s.pop();

    cout << endl;

    s.display();

    cout << endl << endl;

    // ===== QUEUE =====
    Queue q;

    cout << "===== SIMULASI QUEUE =====" << endl;

    q.enqueue("Ilham");
    q.enqueue("Kurniawan");
    q.enqueue("Deddy");

    cout << endl;

    q.peek();

    cout << endl;

    q.dequeue();

    cout << endl;

    q.enqueue("Paparoach");

    cout << endl;

    q.display();

    return 0;
}
