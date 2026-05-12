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
            cout << "Antrian Penuh! " << nama << " tidak bisa masuk." << endl;
        } else {
            if (front == -1) front = 0;
            rear++;
            data[rear] = nama;
            cout << "Enqueue: " << nama << " masuk antrian." << endl;
        }
    }

    void dequeue() {
        if (isEmpty()) {
            cout << "Antrian Kosong!" << endl;
        } else {
            cout << "Dequeue: " << data[front] << " selesai dilayani." << endl;
            front++;
        }
    }

    void peek() {
        if (isEmpty()) {
            cout << "Antrian Kosong!" << endl;
        } else {
            cout << "Pelanggan terdepan: " << data[front] << endl;
        }
    }

    void display() {
        cout << "Isi Antrian saat ini: ";
        if (isEmpty()) {
            cout << "[Kosong]";
        } else {
            for (int i = front; i <= rear; i++) {
                cout << data[i] << " ";
            }
        }
        cout << "\n" << endl;
    }
};

int main() {
    Queue antrian;

    cout << "=== SIMULASI QUEUE (ANTRIAN KASIR) ===" << endl;
    antrian.enqueue("Gustav");
    antrian.enqueue("Habibi");
    antrian.enqueue("Deri");
    antrian.display();

    antrian.peek();
    
    antrian.dequeue();
    antrian.display();

    antrian.enqueue("Caca");
    antrian.display();

    return 0;
}
