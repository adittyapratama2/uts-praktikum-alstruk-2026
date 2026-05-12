#include <iostream>
#include <string>

using namespace std;

// ==========================================
// BAGIAN A: STACK (Riwayat Transaksi)
// ==========================================
string stackTransaksi[5];
int top = -1;

void push(string noTransaksi) {
    if (top == 4) {
        cout << "[Stack] Penuh! Gagal menambah " << noTransaksi << endl;
    } else {
        top++;
        stackTransaksi[top] = noTransaksi;
        cout << "[Stack] " << noTransaksi << " di-push." << endl;
    }
}

void pop() {
    if (top == -1) {
        cout << "[Stack] Kosong! Gagal pop." << endl;
    } else {
        cout << "[Stack] " << stackTransaksi[top] << " di-pop." << endl;
        top--;
    }
}

// ==========================================
// BAGIAN B: QUEUE (Antrian Pelanggan)
// ==========================================
string queuePelanggan[5];
int front = 0;
int rear = -1;

void enqueue(string nama) {
    if (rear == 4) {
        cout << "[Queue] Penuh! " << nama << " gagal masuk." << endl;
    } else {
        rear++;
        queuePelanggan[rear] = nama;
        cout << "[Queue] " << nama << " masuk antrian." << endl;
    }
}

void dequeue() {
    if (rear < front) {
        cout << "[Queue] Kosong! Gagal dequeue." << endl;
    } else {
        cout << "[Queue] " << queuePelanggan[front] << " dilayani." << endl;
        // Geser sisa antrian ke depan
        for (int i = 0; i < rear; i++) {
            queuePelanggan[i] = queuePelanggan[i + 1];
        }
        rear--;
    }
}

int main() {
    // Simulasi sesuai permintaan soal [cite: 34, 40]
    cout << "--- SIMULASI STACK ---" << endl;
    push("T001");
    push("T002");
    push("T003");
    push("T004");
    
    if (top != -1) {
        cout << "[Stack] Transaksi teratas (peek): " << stackTransaksi[top] << endl;
    }
    
    pop();
    pop();
    
    cout << "Isi stack: ";
    for (int i = 0; i <= top; i++) {
        cout << "[" << stackTransaksi[i] << "] ";
    }
    cout << endl << endl;

    cout << "--- SIMULASI QUEUE ---" << endl;
    enqueue("Budi");
    enqueue("Sari");
    enqueue("Eko");
    
    if (rear >= front) {
        cout << "[Queue] Pelanggan terdepan (peek): " << queuePelanggan[front] << endl;
    }
    
    dequeue();
    enqueue("Dewi");
    
    cout << "Isi queue: ";
    for (int i = 0; i <= rear; i++) {
        cout << "[" << queuePelanggan[i] << "] ";
    }
    cout << endl;

    return 0;
}