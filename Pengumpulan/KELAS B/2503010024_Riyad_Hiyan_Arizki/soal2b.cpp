#include <iostream>
#include <string>
using namespace std;

const int MAKS = 5;
string queueAnggota[MAKS];
int front = -1, rear = -1;

bool isEmpty() { return front == -1; }
bool isFull()  { return rear == MAKS - 1; }

void enqueue(string nama) {
    if (isFull()) {
        cout << "[GAGAL] Queue penuh! Tidak bisa nambah: " << nama << endl;
        return;
    }
    if (isEmpty()) front = 0;
    queueAnggota[++rear] = nama;
    cout << "[ENQUEUE] Anggota masuk antrian: " << nama << endl;
}

void dequeue() {
    if (isEmpty()) {
        cout << "[GAGAL] Queue kosong! Tidak ada anggota." << endl;
        return;
    }
    cout << "[DEQUEUE] Anggota dilayani: " << queueAnggota[front] << endl;
    if (front == rear) { front = -1; rear = -1; }
    else front++;
}

void peek() {
    if (isEmpty()) {
        cout << "[INFO] Queue kosong." << endl;
        return;
    }
    cout << "[PEEK] Anggota terdepan: " << queueAnggota[front] << endl;
}

void tampilQueue() {
    if (isEmpty()) {
        cout << "[INFO] Queue kosong." << endl;
        return;
    }
    cout << "Isi queue (depan ke belakang):" << endl;
    for (int i = front; i <= rear; i++)
        cout << "  [" << i << "] " << queueAnggota[i] << endl;
}

int main() {
    cout << "=== QUEUE: ANTRIAN PEMINJAMAN ===" << endl;

    // Enqueue 3 anggota
    enqueue("Reza");
    enqueue("Mia");
    enqueue("Hendra");

    cout << endl;
    peek();

    cout << endl;
    dequeue();

    cout << endl;
    enqueue("Putri");

    cout << endl;
    cout << "--- Isi queue setelah dequeue + enqueue Putri ---" << endl;
    tampilQueue();

    return 0;
}