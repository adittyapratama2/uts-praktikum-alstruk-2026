#include <iostream>
#include <string>

using namespace std;

#define MAX 5

// PERNYATAAN A - STACK (TUMPUKAN BUKU)

struct StackBuku {
    int top;
    string buku[MAX];

    // Constructor: Otomatis dipanggil saat variabel dibuat (pengganti init)
    StackBuku() {
        top = -1;
    }

    // Cek stack penuh
    bool isFull() {
        return top == MAX - 1;
    }

    // Cek stack kosong
    bool isEmpty() {
        return top == -1;
    }

    // Tambah data ke stack
    void push(string judul) {
        if (isFull()) {
            cout << "Gagal Push: Stack Penuh!!" << endl;
        } else {
            top++;
            buku[top] = judul;
            cout << "Berhasil ditambahkan: " << judul << endl;
        }
    }

    // Ambil data dari stack
    void pop() {
        if (isEmpty()) {
            cout << "Gagal Pop: Stack Kosong!" << endl;
        } else {
            cout << "Berhasil mengeluarkan: " << buku[top] << endl;
            top--;
        }
    }

    // Melihat data teratas
    void peek() {
        if (isEmpty()) {
            cout << "Stack Kosong." << endl;
        } else {
            cout << "Buku paling atas (Peek): " << buku[top] << endl;
        }
    }

    // Menampilkan isi stack
    void display() {
        if (isEmpty()) {
            cout << "Stack kosong!!" << endl;
        } else {
            cout << "Isi stack saat ini: ";
            for (int i = 0; i <= top; i++) {
                cout << "[" << buku[i] << "] ";
            }
            cout << endl;
        }
    }
};

    // Deklarasi struct untuk Queue
    struct QueueAnggota {
        int front;
        int rear;
        string antrian[MAX];
    };

    // Inisialisasi awal Queue
    void init(QueueAnggota &q) {
        q.front = -1;
        q.rear = -1;
    }

    // Cek apakah antrian kosong
    bool isEmpty(QueueAnggota q) {
        return q.front == -1 || q.front > q.rear;
    }

    // Cek apakah antrian penuh
    bool isFull(QueueAnggota q) {
        return q.rear == MAX - 1;
    }

    // Fungsi untuk mencetak isi queue
    void tampilData(QueueAnggota q) {
        if (isEmpty(q)) {
            cout << "Isi antrian saat ini: [Kosong]" << endl << endl;
        } else {
            cout << "Isi antrian saat ini: ";
            for (int i = q.front; i <= q.rear; i++) {
                cout << "[" << q.antrian[i] << "] ";
            }
            cout << endl << endl;
        }
    }

    // Tambah antrian (Enqueue)
    void enqueue(QueueAnggota &q, string nama) {
        if (isFull(q)) {
            cout << "Queue Penuh!! " << nama << " gagal masuk antrian." << endl;
        } else {
            if (q.front == -1) {
                q.front = 0; // Set front ke index 0 saat data pertama masuk
            }
            q.rear++;
            q.antrian[q.rear] = nama;
            cout << "Berhasil menambahkan: " << nama << endl;
        }
        tampilData(q); // Langsung tampilkan isi queue
    }

    // Keluarkan dari antrian (Dequeue)
    void dequeue(QueueAnggota &q) {
        if (isEmpty(q)) {
            cout << "Gagal mengeluarkan: Queue Kosong!" << endl;
        } else {
            cout << "Berhasil mengeluarkan " << q.antrian[q.front] << " dari antrian." << endl;
            q.front++;
            
            // Kembalikan ke -1 kalau antriannya sudah habis dilayani
            if (q.front > q.rear) {
                q.front = -1;
                q.rear = -1;
            }
        }
        tampilData(q); // Langsung tampilkan isi queue
    }

    // Lihat antrian paling depan
    void peek(QueueAnggota q) {
        if (isEmpty(q)) {
            cout << "Queue kosong, tidak ada antrian." << endl;
        } else {
            cout << "Anggota terdepan saat ini: " << q.antrian[q.front] << endl << endl;
        }
    }



int main() {
    // Inisialisasi stack 
    StackBuku s;

    cout << "=== SIMULASI STACK BUKU ===" << endl;


    s.push("Fisika Dasar");
    s.push("Kalkulus");
    s.push("Algoritma");
    s.push("Jaringan");

    cout << "\n--- Operasi Peek ---" << endl;
    s.peek();
    
    cout << "\n--- Operasi Pop 2 Buku ---" << endl;
    s.pop();
    s.pop();

    cout << "\n--- Kondisi Akhir ---" << endl;
    s.display();

    
    

    cout << "SIMULASI QUEUE ANTRIAN PEMINJAMAN" << endl;
    cout << "=================================" << endl << endl;
    
    QueueAnggota q;
    init(q);

    // 1. Enqueue 3 anggota
    enqueue(q, "Reza");
    enqueue(q, "Mia");
    enqueue(q, "Hendra");

    // 2. Tampilkan anggota terdepan
    peek(q);

    // 3. Dequeue 1 anggota
    dequeue(q);

    // 4. Enqueue anggota baru (Putri)
    enqueue(q, "Putri");

    return 0;
}