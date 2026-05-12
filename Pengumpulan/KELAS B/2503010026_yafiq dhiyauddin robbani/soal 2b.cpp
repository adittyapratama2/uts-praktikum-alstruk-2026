#include <iostream>
#include <string>

using namespace std;

struct QueueAnggota {
    string anggota[5];
    int front = -1;
    int rear = -1;

    bool isFull() {
        return rear == 4;
    }

    bool isEmpty() {
        return front == -1 || front > rear;
    }

    void enqueue(string nama) {
        if (isFull()) {
            cout << "Antrian Penuh! " << nama << " tidak dapat masuk." << endl;
        } else {
            if (front == -1) front = 0;
            rear++;
            anggota[rear] = nama;
            cout << "Enqueue: " << nama << " masuk antrian." << endl;
        }
    }

    void dequeue() {
        if (isEmpty()) {
            cout << "Antrian Kosong!" << endl;
        } else {
            cout << "Dequeue: " << anggota[front] << " selesai meminjam." << endl;
            front++;
        }
    }

    void peek() {
        if (isEmpty()) {
            cout << "Antrian Kosong!" << endl;
        } else {
            cout << "Anggota terdepan (Peek): " << anggota[front] << endl;
        }
    }

    void display() {
        cout << "Isi Antrian saat ini: ";
        if (isEmpty()) {
            cout << "[Kosong]";
        } else {
            for (int i = front; i <= rear; i++) {
                cout << "(" << anggota[i] << ") ";
            }
        }
        cout << "\n--------------------------\n";
    }
};

int main() {
    QueueAnggota q;
    cout << "=== SIMULASI QUEUE ANGGOTA ===\n";

    // Enqueue 3 anggota
    q.enqueue("Reza");
    q.enqueue("Mia");
    q.enqueue("Hendra");
    q.display();

    // Tampilkan terdepan
    q.peek();

    // Dequeue 1 anggota
    q.dequeue();
    q.display();

    // Enqueue Putri
    q.enqueue("Putri");
    q.display();

    return 0;
}
