#include <iostream>
#include <string>
using namespace std;

#define MAX 5

struct Queue {
    int front = -1;
    int rear = -1;
    string pelanggan[MAX];

    bool isFull() {
        return rear == MAX - 1;
    }

    bool isEmpty() {
        return front == -1 || front > rear;
    }

    void enqueue(string nama) {
        if (isFull()) {
            cout << "Gagal Enqueue: Antrian Penuh! " << nama << " tidak bisa masuk." << endl;
        } else {
            if (front == -1) front = 0;
            pelanggan[++rear] = nama;
            cout << "Enqueue Berhasil: " << nama << " masuk ke antrian." << endl;
        }
    }

    void dequeue() {
        if (isEmpty()) {
            cout << "Gagal Dequeue: Antrian Kosong!" << endl;
        } else {
            cout << "Dequeue Berhasil: " << pelanggan[front++] << " telah dilayani." << endl;
            // Reset jika antrian benar-benar kosong setelah dequeue
            if (front > rear) front = rear = -1;
        }
    }

    void peek() {
        if (isEmpty()) {
            cout << "Antrian Kosong." << endl;
        } else {
            cout << "Pelanggan terdepan: " << pelanggan[front] << endl;
        }
    }

    void display() {
        if (isEmpty()) {
            cout << "Isi Queue: [Kosong]" << endl;
        } else {
            cout << "Isi Queue saat ini: ";
            for (int i = front; i <= rear; i++) {
                cout << pelanggan[i] << " ";
            }
            cout << endl;
        }
        cout << "-----------------------------------" << endl;
    }
};

int main() {
    Queue antrian;

    // Simulasi Skenario
    antrian.enqueue("dadang");
    antrian.enqueue("budi");
    antrian.enqueue("dudung");
    antrian.display();

    antrian.peek();
    
    antrian.dequeue();
    antrian.display();

    antrian.enqueue("dadang");
    antrian.display();

    return 0;
}
