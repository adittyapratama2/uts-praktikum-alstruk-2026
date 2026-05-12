#include <iostream>
#include <string>

using namespace std;

struct QueueAnggota {
    int front, rear;
    string antrian[5];

    void init() { front = -1; rear = -1; }
    bool isFull() { return rear == 4; }
    bool isEmpty() { return front == -1 || front > rear; }

    void enqueue(string nama) {
        if (isFull()) {
            cout << "Pesan: Antrian penuh! " << nama << " tidak bisa masuk.\n";
        } else {
            if (isEmpty()) front = 0;
            rear++;
            antrian[rear] = nama;
            cout << "Pesan: " << nama << " berhasil masuk antrian.\n";
        }
    }

    void dequeue() {
        if (isEmpty()) {
            cout << "Pesan: Antrian kosong!\n";
        } else {
            cout << "Pesan: " << antrian[front] << " keluar antrian.\n";
            front++;
        }
    }

    void peek() {
        if (!isEmpty()) cout << "Anggota terdepan: " << antrian[front] << endl;
    }

    void tampilkan() {
        cout << "Isi Queue: ";
        if (isEmpty()) cout << "[Kosong]";
        else {
            for (int i = front; i <= rear; i++) cout << "(" << antrian[i] << ") ";
        }
        cout << "\n-----------------------------------\n";
    }
};

int main() {
    QueueAnggota q;
    q.init();
    string namaInput;

    cout << "=== Simulasi Queue Input Manual ===\n";

    // Simulasi Tahap 1: Enqueue 5 anggota
    for(int i = 1; i <= 5; i++) {
        cout << "Masukkan nama anggota ke-" << i << ": ";
        cin >> namaInput; 
        q.enqueue(namaInput);
        q.tampilkan();
    }

    // Simulasi Tahap 2: Peek & Dequeue
    q.peek();
    q.dequeue();
    q.tampilkan();

    // Simulasi Tahap 3: Enqueue Anggota Baru
    cout << "Masukkan nama anggota baru: ";
    cin >> namaInput;
    q.enqueue(namaInput);
    q.tampilkan();

    return 0;
}
