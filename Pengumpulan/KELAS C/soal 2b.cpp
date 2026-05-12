#include <iostream>
#include <string>

using namespace std;

#define MAX 5

struct Queue {
    string data[MAX];
    int front = 0;
    int rear = -1;
    int count = 0; // Membantu memantau jumlah elemen
};

bool isEmpty(Queue &q) {
    return q.count == 0;
}

bool isFull(Queue &q) {
    return q.count == MAX;
}

void enqueue(Queue &q, string nama) {
    if (isFull(q)) {
        cout << "Gagal! Antrean penuh. " << nama << " tidak dapat masuk." << endl;
    } else {
        q.rear = (q.rear + 1) % MAX; // Menggunakan circular logic agar slot array bisa dipakai ulang
        q.data[q.rear] = nama;
        q.count++;
        cout << "Enqueue: " << nama << " masuk ke antrean." << endl;
    }
}

void dequeue(Queue &q) {
    if (isEmpty(q)) {
        cout << "Gagal! Antrean kosong." << endl;
    } else {
        cout << "Dequeue: " << q.data[q.front] << " telah dilayani dan keluar." << endl;
        q.front = (q.front + 1) % MAX;
        q.count--;
    }
}

void peek(Queue &q) {
    if (isEmpty(q)) {
        cout << "Antrean kosong." << endl;
    } else {
        cout << "Pelanggan terdepan: " << q.data[q.front] << endl;
    }
}

void display(Queue &q) {
    if (isEmpty(q)) {
        cout << "Isi Queue: [Kosong]" << endl;
    } else {
        cout << "Isi Queue: ";
        for (int i = 0; i < q.count; i++) {
            int index = (q.front + i) % MAX;
            cout << "[" << q.data[index] << "] ";
        }
        cout << endl;
    }
}

int main() {
    Queue antrean;

    cout << "=== Simulasi Queue Pelanggan ===\n" << endl;

    // 1. Enqueue 3 pelanggan
    enqueue(antrean, "Budi");
    enqueue(antrean, "Sari");
    enqueue(antrean, "Eko");
    display(antrean);
    cout << endl;

    // 2. Tampilkan pelanggan terdepan
    peek(antrean);
    cout << endl;

    // 3. Dequeue 1 pelanggan
    dequeue(antrean);
    display(antrean);
    cout << endl;

    // 4. Enqueue pelanggan baru
    enqueue(antrean, "Dewi");
    display(antrean);

    return 0;
}

