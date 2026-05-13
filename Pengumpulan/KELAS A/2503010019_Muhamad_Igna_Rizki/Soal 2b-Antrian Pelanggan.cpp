#include <iostream>
#include <string>
using namespace std;


struct Queue {
    string data[5];
    int front = -1, rear = -1;

    bool isFull() { return rear == 4; }
    bool isEmpty() { return front == -1 || front > rear; }

    void enqueue(string nama) {
        if (isFull()) {
            cout << "[Full] Antrian penuh untuk " << nama << endl;
        } else {
            if (front == -1) front = 0;
            data[++rear] = nama;
            cout  << nama << " masuk antrian" << endl;
        }
    }

    void dequeue() {
        if (isEmpty()) {
            cout << "[Empty] Antrian kosong" << endl;
        } else {
            cout  << data[front++] << " telah dilayani" << endl;
        }
    }

    void peek() {
        if (isEmpty()) cout << "[Peek] Antrian kosong" << endl;
        else cout << " Pelanggan terdepan: " << data[front] << endl;
    }

    void display() {
        cout << "Isi Antrian  : ";
        if (isEmpty()) cout << "(Kosong)";
        for (int i = front; i <= rear && i != -1; i++) cout << data[i] << " ";
        cout << endl;
    }
};

int main() {
    Queue q;
    q.enqueue("Budi"); q.enqueue("Sari"); q.enqueue("Eko");
    q.display();
    q.peek();
    q.dequeue();
    q.enqueue("Dewi");
    q.display();
    return 0;
}

