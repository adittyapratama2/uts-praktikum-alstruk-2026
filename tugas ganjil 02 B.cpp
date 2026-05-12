#include <iostream>
#include <string>
using namespace std;

struct Queue {
    string data[5];
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
            cout << "Antrian Penuh! " << nama << " tidak bisa masuk.\n";
        } else {
            if (isEmpty()) front = 0;
            rear++;
            data[rear] = nama;
            cout << "Pelanggan " << nama << " masuk antrian.\n";
        }
    }

    void dequeue() {
        if (isEmpty()) {
            cout << "Antrian Kosong, tidak ada yang dilayani.\n";
        } else {
            cout << "Pelanggan " << data[front] << " selesai dilayani.\n";
            front++;
        }
    }
    string peek() {
        if (!isEmpty()) return data[front];
        return "Kosong";
    }

    void tampilkan() {
        cout << "Isi Antrian: ";
        if (isEmpty()) {
            cout << "[Kosong]";
        } else {
            for (int i = front; i <= rear; i++) {
                cout << data[i] << (i == rear ? "" : " <- ");
            }
        }
        cout << endl;
    }
};

int main() {
    Queue antrian;
    antrian.enqueue("Budi");
    antrian.enqueue("Sari");
    antrian.enqueue("Eko");
    antrian.tampilkan();

    cout << "Pelanggan terdepan: " << antrian.peek() << endl;
    antrian.dequeue();
    antrian.tampilkan();

    antrian.enqueue("Dewi");
    antrian.tampilkan();

    return 0;
}
