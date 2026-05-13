#include <iostream>
#include <string>
using namespace std;


const int MAX_STACK = 5;
struct StackBuku {
    string judul[MAX_STACK];
    int top = -1;

    bool isFull() { return top == MAX_STACK - 1; }
    bool isEmpty() { return top == -1; }

    void push(string jdl) {
        if (isFull()) cout << "[Stack] Penuh! Gagal tambah: " << jdl << endl;
        else {
            judul[++top] = jdl;
            cout << "[Stack] Push: " << jdl << endl;
        }
    }

    void pop() {
        if (isEmpty()) cout << "[Stack] Kosong! Takda buku." << endl;
        else cout << "[Stack] Pop: " << judul[top--] << endl;
    }

    void peek() {
        if (isEmpty()) cout << "[Stack] Kosong." << endl;
        else cout << "[Stack] Buku teratas: " << judul[top] << endl;
    }

    void tampilkan() {
        cout << "Isi Stack: ";
        if (isEmpty()) cout << "(Kosong)";
        for (int i = 0; i <= top; i++) cout << "[" << judul[i] << "] ";
        cout << endl;
    }
};

const int MAX_QUEUE = 5;
struct QueueAnggota {
    string nama[MAX_QUEUE];
    int front = -1, rear = -1;

    bool isFull() { return rear == MAX_QUEUE - 1; }
    bool isEmpty() { return front == -1 || front > rear; }

    void enqueue(string nm) {
        if (isFull()) cout << "[Queue] Antrian penuh! " << nm << " gagal masuk." << endl;
        else {
            if (front == -1) front = 0;
            nama[++rear] = nm;
            cout << "[Queue] Enqueue: " << nm << " masuk antrian." << endl;
        }
    }

    void dequeue() {
        if (isEmpty()) cout << "[Queue] Kosong!" << endl;
        else {
            cout << "[Queue] Dequeue: " << nama[front++] << " selesai." << endl;
            if (front > rear) front = rear = -1; // Reset jika kosong
        }
    }

    void peek() {
        if (isEmpty()) cout << "[Queue] Kosong." << endl;
        else cout << "[Queue] Depan: " << nama[front] << endl;
    }

    void tampilkan() {
        cout << "Isi Queue: ";
        if (isEmpty()) cout << "(Kosong)";
        for (int i = front; i <= rear && front != -1; i++) cout << "(" << nama[i] << ") ";
        cout << endl;
    }
};

int main() {
    StackBuku s;
    QueueAnggota q;

    cout << "=== SIMULASI PERPUSTAKAAN (STACK & QUEUE) ===\n" << endl;


    cout << "--- Operasi Stack (LIFO) ---" << endl;
    s.push("Kejuangan Siliwangi");
    s.push("Kalkulus");
    s.push("Algoritma");
    s.push("Jaringan");
    s.peek();
    s.pop();
    s.pop();
    s.tampilkan();
    cout << "-----------------------------\n" << endl;

    cout << "--- Operasi Queue (FIFO) ---" << endl;
    q.enqueue("Afiww");
    q.enqueue("Linlin");
    q.enqueue("Aliyah");
    q.peek();
    q.dequeue();
    q.enqueue("Putri");
    q.tampilkan();
    cout << "-----------------------------" << endl;

    return 0;
}
