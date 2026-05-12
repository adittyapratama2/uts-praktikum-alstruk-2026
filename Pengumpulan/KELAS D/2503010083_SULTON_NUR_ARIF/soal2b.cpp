#include <iostream>
#include <string>
using namespace std;

struct Queue {
    string data[5];
    int front = -1;
    int rear  = -1;

    bool isEmpty() { return front == -1; }
    bool isFull()  { return rear == 4; }

    void enqueue(string nama) {
        if (isFull()) {
            cout << "[GAGAL] Antrian penuh! " << nama << " tidak bisa masuk.\n";
            return;
        }
        if (isEmpty()) front = 0;
        data[++rear] = nama;
        cout << "[+] " << nama << " masuk antrian.\n";
    }

    void dequeue() {
        if (isEmpty()) {
            cout << "[GAGAL] Antrian kosong, tidak ada pelanggan.\n";
            return;
        }
        cout << "[-] " << data[front] << " selesai dilayani.\n";
        if (front == rear) front = rear = -1;
        else front++;
    }

    string peek() {
        if (isEmpty()) {
            cout << "[INFO] Antrian kosong.\n";
            return "";
        }
        return data[front];
    }

    void tampilkan() {
        if (isEmpty()) {
            cout << "Antrian kosong.\n";
            return;
        }
        cout << "Antrian saat ini (depan -> belakang): ";
        for (int i = front; i <= rear; i++)
            cout << data[i] << (i < rear ? " -> " : "");
        cout << "\n";
    }
};

int main() {
    Queue q;

    cout << "-- Pelanggan masuk antrian --\n";
    q.enqueue("Uton");
    q.enqueue("Sari");
    q.enqueue("Santi");

    cout << "\nPelanggan yang akan dilayani: " << q.peek() << "\n\n";
    q.tampilkan();

    cout << "\n-- Melayani pelanggan --\n";
    q.dequeue();
    q.tampilkan();

    cout << "\n-- Pelanggan baru datang --\n";
    q.enqueue("Dewi");
    q.tampilkan();

    return 0;
}
