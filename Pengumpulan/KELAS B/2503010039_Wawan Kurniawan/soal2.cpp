
#include <iostream>
using namespace std;

/* =========================
   STACK : Riwayat Transaksi
   ========================= */

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

    void push(string noTransaksi) {
        if (isFull()) {
            cout << "Stack penuh! Tidak bisa menambah transaksi "
                 << noTransaksi << endl;
        } else {
            top++;
            data[top] = noTransaksi;
            cout << "Push: " << noTransaksi << endl;
        }
    }

    void pop() {
        if (isEmpty()) {
            cout << "Stack kosong! Tidak ada data yang dihapus.\n";
        } else {
            cout << "Pop: " << data[top] << endl;
            top--;
        }
    }

    void peek() {
        if (isEmpty()) {
            cout << "Stack kosong!\n";
        } else {
            cout << "Transaksi teratas: " << data[top] << endl;
        }
    }

    void tampil() {
        if (isEmpty()) {
            cout << "Isi stack kosong.\n";
        } else {
            cout << "Isi Stack:\n";
            for (int i = top; i >= 0; i--) {
                cout << data[i] << endl;
            }
        }
        cout << endl;
    }
};


/* =========================
   QUEUE : Antrian Pelanggan
   ========================= */

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

    void tampil() {
        if (isEmpty()) {
            cout << "Queue kosong.\n";
        } else {
            cout << "Isi Queue:\n";

            for (int i = front; i <= rear; i++) {
                cout << data[i] << endl;
            }
        }

        cout << endl;
    }
};


/* =========================
   MAIN PROGRAM
   ========================= */

int main() {

    // ================= STACK =================
    cout << "===== STACK : RIWAYAT TRANSAKSI =====\n\n";

    Stack s;

    // Push 4 transaksi
    s.push("T001");
    s.push("T002");
    s.push("T003");
    s.push("T004");

    cout << endl;
    s.tampil();

    // Peek
    s.peek();

    cout << endl;

    // Pop 2 transaksi
    s.pop();
    s.pop();

    cout << endl;

    // Tampilkan isi stack
    s.tampil();


    // ================= QUEUE =================
    cout << "===== QUEUE : ANTRIAN PELANGGAN =====\n\n";

    Queue q;

    // Enqueue 3 pelanggan
    q.enqueue("Budi");
    q.enqueue("Sari");
    q.enqueue("Eko");

    cout << endl;
    q.tampil();

    // Peek
    q.peek();

    cout << endl;

    // Dequeue 1 pelanggan
    q.dequeue();

    cout << endl;
    q.tampil();

    // Enqueue pelanggan baru
    q.enqueue("Dewi");

    cout << endl;
    q.tampil();

    return 0;
}
