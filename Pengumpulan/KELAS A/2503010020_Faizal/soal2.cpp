#include <iostream>
#include <string>

using namespace std;

// --- BAGIAN A: STACK (Tumpukan Buku Kembali) ---
struct Stack {
    int top = -1;
    string buku[5];
    int kapasitas = 5;

    bool isFull() { return top == kapasitas - 1; }
    bool isEmpty() { return top == -1; }

    void push(string judul) {
        if (isFull()) {
            cout << "[Stack] Penuh! Gagal menambah: " << judul << endl;
        } else {
            buku[++top] = judul;
            cout << "[Stack] Berhasil push: " << judul << endl;
        }
    }

    void pop() {
        if (isEmpty()) {
            cout << "[Stack] Kosong! Tidak ada yang bisa di-pop." << endl;
        } else {
            cout << "[Stack] Berhasil pop: " << buku[top--] << endl;
        }
    }

    void peek() {
        if (isEmpty()) {
            cout << "[Stack] Kosong." << endl;
        } else {
            cout << "[Stack] Buku paling atas: " << buku[top] << endl;
        }
    }

    void tampilkan() {
        cout << "[Stack] Isi saat ini: ";
        if (isEmpty()) {
            cout << "(Kosong)";
        } else {
            for (int i = 0; i <= top; i++) {
                cout << "[" << buku[i] << "] ";
            }
        }
        cout << endl;
    }
};

// --- BAGIAN B: QUEUE (Antrian Peminjaman) ---
struct Queue {
    int front = -1;
    int rear = -1;
    string antrian[5];
    int kapasitas = 5;

    bool isFull() { return rear == kapasitas - 1; }
    bool isEmpty() { return front == -1 || front > rear; }

    void enqueue(string nama) {
        if (isFull()) {
            cout << "[Queue] Antrian penuh! " << nama << " gagal masuk." << endl;
        } else {
            if (front == -1) front = 0;
            antrian[++rear] = nama;
            cout << "[Queue] Berhasil enqueue: " << nama << endl;
        }
    }

    void dequeue() {
        if (isEmpty()) {
            cout << "[Queue] Antrian kosong! Gagal dequeue." << endl;
        } else {
            cout << "[Queue] Berhasil dequeue: " << antrian[front++] << endl;
        }
    }

    void peek() {
        if (isEmpty()) {
            cout << "[Queue] Antrian kosong." << endl;
        } else {
            cout << "[Queue] Anggota terdepan: " << antrian[front] << endl;
        }
    }

    void tampilkan() {
        cout << "[Queue] Isi saat ini: ";
        if (isEmpty()) {
            cout << "(Kosong)";
        } else {
            for (int i = front; i <= rear; i++) {
                cout << "[" << antrian[i] << "] ";
            }
        }
        cout << endl;
    }
};

int main() {
    // Simulasi Bagian A: Stack
    Stack s;
    cout << "=== SIMULASI STACK (Tumpukan Buku) ===" << endl;
    s.push("Fisika Dasar");
    s.push("Kalkulus");
    s.push("Algoritma");
    s.push("Jaringan");
    s.peek();
    s.pop();
    s.pop();
    s.tampilkan();
    cout << endl;

    // Simulasi Bagian B: Queue
    Queue q;
    cout << "=== SIMULASI QUEUE (Antrian Peminjaman) ===" << endl;
    q.enqueue("Reza");
    q.enqueue("Mia");
    q.enqueue("Hendra");
    q.tampilkan();
    q.peek();
    q.dequeue();
    q.tampilkan();
    q.enqueue("Putri");
    q.tampilkan();

    return 0;
}
