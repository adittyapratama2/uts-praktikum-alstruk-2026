#include <iostream>
#include <string>
using namespace std;

#define MAX 5

struct Queue {
    string data[MAX];
    int front;
    int rear;
};

void initQueue(Queue &q) {
    q.front = -1;
    q.rear = -1;
}

bool isEmpty(Queue &q) {
    return q.front == -1;
}

bool isFull(Queue &q) {
    return (q.rear + 1) % MAX == q.front;
}

void enqueue(Queue &q, string nama) {
    if (isFull(q)) {
        cout << "Queue penuh!" << endl;
    } else {
        if (isEmpty(q)) {
            q.front = 0;
        }
        q.rear = (q.rear + 1) % MAX;
        q.data[q.rear] = nama;
    }
}

void dequeue(Queue &q) {
    if (isEmpty(q)) {
        cout << "Queue kosong!" << endl;
    } else {
        if (q.front == q.rear) {
            q.front = -1;
            q.rear = -1;
        } else {
            q.front = (q.front + 1) % MAX;
        }
    }
}

void peek(Queue &q) {
    if (isEmpty(q)) {
        cout << "Queue kosong!" << endl;
    } else {
        cout << "Pelanggan terdepan: " << q.data[q.front] << endl;
    }
}

void displayQueue(Queue &q) {
    if (isEmpty(q)) {
        cout << "Queue kosong!" << endl;
    } else {
        cout << "Posisi\tPelanggan" << endl;
        int i = q.front;
        while (true) {
            cout << "[" << i << "]\t" << q.data[i];
            if (i == q.front) {
                cout << " <-- FRONT";
            }
            if (i == q.rear) {
                cout << " <-- REAR";
            }
            cout << endl;
            if (i == q.rear) break;
            i = (i + 1) % MAX;
        }
    }
}

int main() {
    Queue antrianKasir;
    initQueue(antrianKasir);
    
    cout << "========== SIMULASI QUEUE: ANTRIAN PELANGGAN ==========" << endl;
    
    cout << "--- Enqueue 3 Pelanggan ---" << endl;
    enqueue(antrianKasir, "Budi");
    enqueue(antrianKasir, "Sari");
    enqueue(antrianKasir, "Eko");
    
    cout << "--- Isi Queue Setelah 3 Enqueue ---" << endl;
    displayQueue(antrianKasir);
    
    cout << "--- Tampilkan Pelanggan Terdepan (Peek) ---" << endl;
    peek(antrianKasir);
    
    cout << "--- Dequeue 1 Pelanggan ---" << endl;
    dequeue(antrianKasir);
    
    cout << "--- Isi Queue Setelah Dequeue ---" << endl;
    displayQueue(antrianKasir);
    
    cout << "--- Enqueue Pelanggan Baru (Dewi) ---" << endl;
    enqueue(antrianKasir, "Dewi");
    
    cout << "--- Isi Queue Setelah Enqueue Dewi ---" << endl;
    displayQueue(antrianKasir);
    
    cout << "--- Enqueue Tambahan ---" << endl;
    enqueue(antrianKasir, "Rudi");
    enqueue(antrianKasir, "Ani");
    
    cout << "--- Isi Queue Penuh ---" << endl;
    displayQueue(antrianKasir);
    
    cout << "--- Enqueue Saat Queue Penuh ---" << endl;
    enqueue(antrianKasir, "Joko");
    
    cout << "--- Dequeue Semua Pelanggan ---" << endl;
    dequeue(antrianKasir);
    dequeue(antrianKasir);
    dequeue(antrianKasir);
    dequeue(antrianKasir);
    dequeue(antrianKasir);
    
    cout << "--- Dequeue Saat Queue Kosong ---" << endl;
    dequeue(antrianKasir);
    
    return 0;
}
