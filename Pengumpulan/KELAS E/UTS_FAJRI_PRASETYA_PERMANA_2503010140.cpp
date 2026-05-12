#include <iostream>
using namespace std;

// ================= STACK =================
class Stack {
private:
    string data[5];
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
        return top == 4;
    }

    // Push data
    void push(string judul) {
        if (isFull()) {
            cout << "Stack penuh! Buku tidak bisa ditambahkan.\n";
        } else {
            top++;
            data[top] = judul;
            cout << "Buku \"" << judul << "\" berhasil ditambahkan ke stack.\n";
        }
    }

    // Pop data
    void pop() {
        if (isEmpty()) {
            cout << "Stack kosong! Tidak ada buku yang bisa dihapus.\n";
        } else {
            cout << "Buku \"" << data[top] << "\" dihapus dari stack.\n";
            top--;
        }
    }

    // Peek data teratas
    void peek() {
        if (isEmpty()) {
            cout << "Stack kosong!\n";
        } else {
            cout << "Buku paling atas: " << data[top] << endl;
        }
    }

    // Tampilkan isi stack
    void display() {
        if (isEmpty()) {
            cout << "Stack kosong.\n";
        } else {
            cout << "Isi Stack:\n";
            for (int i = top; i >= 0; i--) {
                cout << "- " << data[i] << endl;
            }
        }
    }
};

// ================= QUEUE =================
class Queue {
private:
    string data[5];
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
        return front == -1 || front > rear;
    }

    // Cek queue penuh
    bool isFull() {
        return rear == 4;
    }

    // Enqueue data
    void enqueue(string nama) {
        if (isFull()) {
            cout << "Queue penuh! Tidak bisa menambah anggota.\n";
        } else {
            if (front == -1) {
                front = 0;
            }

            rear++;
            data[rear] = nama;

            cout << nama << " masuk ke antrian.\n";
        }
    }

    // Dequeue data
    void dequeue() {
        if (isEmpty()) {
            cout << "Queue kosong! Tidak ada anggota dalam antrian.\n";
        } else {
            cout << data[front] << " keluar dari antrian.\n";
            front++;
        }
    }

    // Peek queue
    void peek() {
        if (isEmpty()) {
            cout << "Queue kosong!\n";
        } else {
            cout << "Antrian terdepan: " << data[front] << endl;
        }
    }

    // Tampilkan isi queue
    void display() {
        if (isEmpty()) {
            cout << "Queue kosong.\n";
        } else {
            cout << "Isi Queue:\n";

            for (int i = front; i <= rear; i++) {
                cout << "- " << data[i] << endl;
            }
        }
    }
};

// ================= MAIN =================
int main() {

    // ================= STACK =================
    cout << "=========== STACK: TUMPUKAN BUKU ===========\n";

    Stack buku;

    // Push 4 buku
    buku.push("Algoritma dan Struktur Data");
    buku.push("Kalkulus");
    buku.push("Algoritma");
    buku.push("Jaringan");

    cout << endl;

    // Tampilkan stack
    buku.display();

    cout << endl;

    // Peek
    buku.peek();

    cout << endl;

    // Pop 2 buku
    buku.pop();
    buku.pop();

    cout << endl;

    // Tampilkan stack setelah pop
    cout << "Stack setelah pop 2 buku:\n";
    buku.display();

    // ================= QUEUE =================
    cout << "\n\n=========== QUEUE: ANTRIAN PEMINJAMAN ===========\n";

    Queue antrian;

    // Enqueue 3 anggota
    antrian.enqueue("Fajri");
    antrian.enqueue("Prasetya");
    antrian.enqueue("Permana");

    cout << endl;

    // Tampilkan queue
    antrian.display();

    cout << endl;

    // Peek
    antrian.peek();

    cout << endl;

    // Dequeue 1 anggota
    antrian.dequeue();

    cout << endl;

    // Enqueue anggota baru
    antrian.enqueue("Fajri");

    cout << endl;

    // Tampilkan queue akhir
    cout << "Queue setelah dequeue dan enqueue:\n";
    antrian.display();

    return 0;
}