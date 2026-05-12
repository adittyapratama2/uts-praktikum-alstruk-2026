#include <iostream>
#include <string>

using namespace std;

struct QueueAntrian {
    string nama[5];
    int front = -1;
    int rear = -1;

    bool isFull() {
        return rear == 4;
    }

    bool isEmpty() {
        return front == -1 || front > rear;
    }

    void enqueue(string anggota) {
        if (isFull()) {
            cout << "Kondisi: Antrian Penuh! " << anggota << " tidak bisa masuk." << endl;
        } else {
            if (front == -1) front = 0;
            rear++;
            nama[rear] = anggota;
            cout << "Info: Anggota '" << anggota << "' masuk antrian." << endl;
        }
    }

    void dequeue() {
        if (isEmpty()) {
            cout << "Kondisi: Antrian Kosong!" << endl;
        } else {
            cout << "Info: Anggota '" << nama[front] << "' keluar antrian (dilayani)." << endl;
            front++;
        }
    }

    void peek() {
        if (isEmpty()) {
            cout << "Kondisi: Antrian Kosong." << endl;
        } else {
            cout << "Anggota terdepan: " << nama[front] << endl;
        }
    }

    void tampilkan() {
        if (isEmpty()) {
            cout << "Isi Antrian: (Kosong)" << endl;
        } else {
            cout << "Daftar Antrian: ";
            for (int i = front; i <= rear; i++) {
                cout << "[" << nama[i] << "] ";
            }
            cout << endl;
        }
    }
};

int main() {
    QueueAntrian q;

    cout << "--- SIMULASI QUEUE (ANTRIAN PEMINJAMAN) ---" << endl;
    q.enqueue("Reza");
    q.enqueue("Mia");
    q.enqueue("Hendra");
    q.tampilkan();

    cout << endl;
    q.peek();

    cout << "\nMelakukan Dequeue 1 anggota..." << endl;
    q.dequeue();
    q.tampilkan();

    cout << "\nMemasukkan anggota baru..." << endl;
    q.enqueue("Putri");
    q.tampilkan();

    return 0;
}