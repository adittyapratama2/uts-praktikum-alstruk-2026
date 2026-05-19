#include <iostream>
#include <string>

using namespace std;

struct Queue {
    int front = -1;
    int rear = -1;
    int maksimal = 5;
    string antrian[5];

    bool isFull() {
        return rear == maksimal - 1;
    }

    bool isEmpty() {
        return front == -1 || front > rear;
    }

    void enqueue(string nama) {
        if (isFull()) {
            cout << "Kondisi: Antrian Penuh! " << nama << " tidak bisa masuk." << endl;
        } else {
            if (front == -1) front = 0;
            rear++;
            antrian[rear] = nama;
            cout << "Berhasil masuk antrian (enqueue): " << nama << endl;
        }
    }

    void dequeue() {
        if (isEmpty()) {
            cout << "Kondisi: Antrian Kosong!" << endl;
        } else {
            cout << "Berhasil keluar antrian (dequeue): " << antrian[front] << endl;
            front++;
        }
    }

    void peek() {
        if (isEmpty()) {
            cout << "Antrian Kosong." << endl;
        } else {
            cout << "Anggota terdepan (peek): " << antrian[front] << endl;
        }
    }

    void tampilkanQueue() {
        cout << "Isi antrian saat ini: ";
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
    Queue q;

    cout << "=== SIMULASI ANTRIAN PEMINJAMAN ===" << endl;
    // Simulasi skenario
    q.enqueue("Reza Arab");
    q.enqueue("Mia Khalifa");
    q.enqueue("Hendra halimun");
    q.tampilkanQueue();

    q.peek(); // Tampilkan anggota terdepan
    
    q.dequeue(); // Dequeue 1 anggota
    q.tampilkanQueue();

    q.enqueue("Putri pertiwi"); // Tambah anggota baru
    q.tampilkanQueue();

    return 0;
}
