#include <iostream>
#include <string>

using namespace std;

// =========================================================
// BAGIAN A: STACK (Tumpukan Buku Kembali)
// =========================================================
string stackBuku[5];
int top = -1;

bool isStackFull() {
    return top == 4;
}

bool isStackEmpty() {
    return top == -1;
}

void push(string judul) {
    if (isStackFull()) {
        cout << "[Stack] Gagal! Tumpukan penuh untuk buku: " << judul << endl;
    } else {
        top++;
        stackBuku[top] = judul;
        cout << "[Stack] Berhasil push buku: " << judul << endl;
    }
}

void pop() {
    if (isStackEmpty()) {
        cout << "[Stack] Gagal! Tumpukan sudah kosong." << endl;
    } else {
        cout << "[Stack] Berhasil pop buku: " << stackBuku[top] << endl;
        top--;
    }
}

string peekStack() {
    if (!isStackEmpty()) return stackBuku[top];
    return "Kosong";
}

void tampilkanStack() {
    cout << "Isi Stack saat ini: ";
    if (isStackEmpty()) cout << "[Kosong]";
    for (int i = 0; i <= top; i++) {
        cout << "|" << stackBuku[i] << "|";
    }
    cout << endl;
}

// =========================================================
// BAGIAN B: QUEUE (Antrian Peminjaman)
// =========================================================
string queueAnggota[5];
int front = 0;
int rear = -1;
int count = 0;

bool isQueueFull() {
    return count == 5;
}

bool isQueueEmpty() {
    return count == 0;
}

void enqueue(string nama) {
    if (isQueueFull()) {
        cout << "[Queue] Gagal! Antrian penuh untuk: " << nama << endl;
    } else {
        rear = (rear + 1) % 5;
        queueAnggota[rear] = nama;
        count++;
        cout << "[Queue] " << nama << " masuk ke antrian." << endl;
    }
}

void dequeue() {
    if (isQueueEmpty()) {
        cout << "[Queue] Gagal! Antrian kosong." << endl;
    } else {
        cout << "[Queue] " << queueAnggota[front] << " selesai meminjam buku." << endl;
        front = (front + 1) % 5;
        count--;
    }
}

void tampilkanQueue() {
    cout << "Isi Queue saat ini: ";
    if (isQueueEmpty()) {
        cout << "[Kosong]";
    } else {
        int temp = front;
        for (int i = 0; i < count; i++) {
            cout << "(" << queueAnggota[temp] << ") ";
            temp = (temp + 1) % 5;
        }
    }
    cout << endl;
}

// =========================================================
// Simulasi Skenario
// =========================================================
int main() {
    // Simulasi STACK
    cout << "=== SIMULASI STACK (TUMPUKAN BUKU) ===" << endl;
    push("Fisika Dasar");
    push("Kalkulus");
    push("Algoritma");
    push("Jaringan");
    
    cout << "Buku paling atas (Peek): " << peekStack() << endl;
    
    pop();
    pop();
    
    tampilkanStack();

    cout << "\n======================================\n" << endl;

    // Simulasi QUEUE
    cout << "=== SIMULASI QUEUE (ANTRIAN PINJAM) ===" << endl;
    enqueue("Reza");
    enqueue("Mia");
    enqueue("Hendra");
    
    cout << "Anggota terdepan: " << queueAnggota[front] << endl;
    
    dequeue();
    enqueue("Putri");
    
    tampilkanQueue();

    return 0;
}
