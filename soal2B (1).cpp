#include <iostream>
#include <string>
using namespace std;

const int KAPASITAS = 5;

struct Queue {
    string data[KAPASITAS];
    int front;
    int rear;
};

void init(Queue &q) {
    q.front = -1;
    q.rear = -1;
}

bool isEmpty(Queue &q) {
    return q.front == -1;
}

bool isFull(Queue &q) {
    return (q.rear + 1) % KAPASITAS == q.front;
}

void enqueue(Queue &q, string nama) {
    if (isFull(q)) {
        cout << "❌ GAGAL: Antrian penuh! " << nama << " tidak bisa ditambahkan." << endl;
    } else {
        if (isEmpty(q)) {
            q.front = 0;
            q.rear = 0;
        } else {
            q.rear = (q.rear + 1) % KAPASITAS;
        }
        q.data[q.rear] = nama;
        cout << "✅ " << nama << " berhasil masuk antrian." << endl;
        cout << "   front: " << q.front << ", rear: " << q.rear << endl;
    }
}

void dequeue(Queue &q) {
    if (isEmpty(q)) {
        cout << "❌ GAGAL: Antrian kosong! Tidak ada pelanggan yang dilayani." << endl;
    } else {
        string nama = q.data[q.front];
        if (q.front == q.rear) {
            // Hanya satu elemen
            q.front = -1;
            q.rear = -1;
        } else {
            q.front = (q.front + 1) % KAPASITAS;
        }
        cout << "Pelanggan " << nama << " telah dilayani dan keluar dari antrian." << endl;
        if (!isEmpty(q)) {
            cout << "   front: " << q.front << ", rear: " << q.rear << endl;
        }
    }
}

void peek(Queue &q) {
    if (isEmpty(q)) {
        cout << "Antrian kosong! Tidak ada pelanggan terdepan." << endl;
    } else {
        cout << "Pelanggan terdepan: " << q.data[q.front] << endl;
    }
}

void tampilkanQueue(Queue &q) {
    if (isEmpty(q)) {
        cout << "Antrian kosong!" << endl;
    } else {
        cout << "\n━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━" << endl;
        cout << "  ANTRIAN PELANGGAN (depan ke belakang)" << endl;
        cout << "━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━" << endl;
        
        int i = q.front;
        int urutan = 1;
        while (true) {
            cout << "  " << urutan << ". " << q.data[i] << endl;
            if (i == q.rear) break;
            i = (i + 1) % KAPASITAS;
            urutan++;
        }
        
        cout << "━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━" << endl;
        cout << "Total pelanggan: " << (q.rear - q.front + (q.rear >= q.front ? 1 : KAPASITAS)) << "/" << KAPASITAS << endl;
        cout << "front index: " << q.front << ", rear index: " << q.rear << endl;
    }
}

int main() {
    Queue antrian;
    init(antrian);
    
    cout << "=====================================" << endl;
    cout << "ANTRIAN KASIR" << endl;
    cout << "=====================================\n" << endl;
    
    
    
    cout << "=== Menambah 3 pelanggan ke antrian ===" << endl;
    enqueue(antrian, "Asep");
    enqueue(antrian, "Udin");
    enqueue(antrian, "Eko");
    tampilkanQueue(antrian);
    
    cout << "\n=== Melihat pelanggan terdepan ===" << endl;
    peek(antrian);
    
    cout << "\n=== Melayani 1 pelanggan ===" << endl;
    dequeue(antrian);
    tampilkanQueue(antrian);
    
    cout << "\n=== Menambah pelanggan baru (Dewi) ===" << endl;
    enqueue(antrian, "Dewi");
    tampilkanQueue(antrian);
    
    cout << "\n=== Menambah sampai antrian penuh ===" << endl;
    enqueue(antrian, "Zofan");
    tampilkanQueue(antrian);
    enqueue(antrian, "Adit");
    tampilkanQueue(antrian);
    enqueue(antrian, "pak kumis"); 
    
    cout << "\n=== DEMO TAMBAHAN: Melayani semua pelanggan ===" << endl;
    while (!isEmpty(antrian)) {
        dequeue(antrian);
    }
    
    cout << "\n=== CEK KONDISI SETELAH KOSONG ===" << endl;
    cout << "isEmpty(): " << (isEmpty(antrian) ? "true (kosong)" : "false") << endl;
    cout << "isFull() : " << (isFull(antrian) ? "true (penuh)" : "false") << endl;
    peek(antrian);
    dequeue(antrian);
    
    return 0;
}