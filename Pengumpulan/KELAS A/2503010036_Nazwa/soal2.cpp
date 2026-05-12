#include <iostream>
#include <string>

using namespace std;

#define MAX 5

// ==========================================
// BAGIAN A: IMPLEMENTASI STACK (TUMPUKAN)
// ==========================================
class StackBuku {
private:
    int top;
    string tumpukan[MAX];

public:
    StackBuku() { top = -1; }

    bool isFull() { return top == MAX - 1; }
    bool isEmpty() { return top == -1; }

    void push(string judul) {
        if (isFull()) {
            cout << "[Stack] Gagal: Stack penuh! Tidak bisa menambah '" << judul << "'" << endl;
        } else {
            tumpukan[++top] = judul;
            cout << "[Stack] Berhasil: Menambahkan '" << judul << "'" << endl;
        }
    }

    void pop() {
        if (isEmpty()) {
            cout << "[Stack] Gagal: Stack kosong!" << endl;
        } else {
            cout << "[Stack] Berhasil: Mengambil '" << tumpukan[top--] << "'" << endl;
        }
    }

    void peek() {
        if (isEmpty()) {
            cout << "[Stack] Pesan: Stack kosong, tidak ada elemen teratas." << endl;
        } else {
            cout << "[Stack] Buku paling atas (peek): " << tumpukan[top] << endl;
        }
    }

    void tampilkanStack() {
        cout << "\n--- ISI STACK SAAT INI ---" << endl;
        if (isEmpty()) {
            cout << "Stack Kosong." << endl;
        } else {
            for (int i = top; i >= 0; i--) {
                cout << " [" << i << "] " << tumpukan[i] << endl;
            }
        }
        cout << "--------------------------\n" << endl;
    }
};

// ==========================================
// BAGIAN B: IMPLEMENTASI QUEUE (ANTRIAN)
// ==========================================
class QueuePeminjaman {
private:
    int front, rear;
    string antrian[MAX];

public:
    QueuePeminjaman() {
        front = -1;
        rear = -1;
    }

    bool isFull() { return rear == MAX - 1; }
    bool isEmpty() { return front == -1 || front > rear; }

    void enqueue(string nama) {
        if (isFull()) {
            cout << "[Queue] Gagal: Antrian penuh! '" << nama << "' tidak bisa masuk." << endl;
        } else {
            if (isEmpty()) front = 0;
            antrian[++rear] = nama;
            cout << "[Queue] Berhasil: '" << nama << "' masuk ke antrian." << endl;
        }
    }

    void dequeue() {
        if (isEmpty()) {
            cout << "[Queue] Gagal: Antrian kosong!" << endl;
        } else {
            cout << "[Queue] Berhasil: '" << antrian[front++] << "' keluar antrian." << endl;
        }
    }

    void peek() {
        if (isEmpty()) {
            cout << "[Queue] Pesan: Antrian kosong." << endl;
        } else {
            cout << "[Queue] Anggota terdepan (peek): " << antrian[front] << endl;
        }
    }

    void tampilkanQueue() {
        cout << "\n--- ISI ANTRIAN SAAT INI ---" << endl;
        if (isEmpty()) {
            cout << "Antrian Kosong." << endl;
        } else {
            for (int i = front; i <= rear; i++) {
                cout << " [" << i << "] " << antrian[i] << endl;
            }
        }
        cout << "----------------------------\n" << endl;
    }
};

// ==========================================
// MAIN PROGRAM: SIMULASI SKENARIO
// ==========================================
int main() {
    // Simulasi Pertanyaan A (Stack)
    cout << "=== SIMULASI PERTANYAAN A (STACK) ===" << endl;
    StackBuku rak;
    rak.push("Fisika Dasar");
    rak.push("Kalkulus");
    rak.push("Algoritma");
    rak.push("Jaringan");
    
    rak.peek();
    
    rak.pop();
    rak.pop();
    
    rak.tampilkanStack();

    cout << endl;

    // Simulasi Pertanyaan B (Queue)
    cout << "=== SIMULASI PERTANYAAN B (QUEUE) ===" << endl;
    QueuePeminjaman perpus;
    perpus.enqueue("Reza");
    perpus.enqueue("Mia");
    perpus.enqueue("Hendra");
    
    perpus.peek();
    
    perpus.dequeue();
    perpus.enqueue("Putri");
    
    perpus.tampilkanQueue();

    return 0;
}
