#include <iostream>
#include <string>

using namespace std;


struct Stack {
    int top = -1;
    int kapasitas = 5;
    string buku[5];

    bool isFull() { return top == kapasitas - 1; }
    bool isEmpty() { return top == -1; }

    void push(string judul) {
        if (isFull()) {
            cout << "Stack penuh" << endl;
        } else {
            top++;
            buku[top] = judul;
            cout << "Push: " << judul << endl;
        }
    }

    void pop() {
        if (isEmpty()) {
            cout << "Stack kosong" << endl;
        } else {
            cout << "Pop: " << buku[top] << endl;
            top--;
        }
    }

    void peek() {
        if (isEmpty()) cout << "Stack kosong" << endl;
        else cout << "Peek (paling atas): " << buku[top] << endl;
    }

    void display() {
        cout << "Isi stack saat ini: ";
        for (int i = 0; i <= top; i++) cout << buku[i] << " ";
        cout << endl;
    }
};


struct Queue {
    int front = -1, rear = -1;
    int kapasitas = 5;
    string antrian[5];

    bool isFull() { return rear == kapasitas - 1; }
    bool isEmpty() { return front == -1 || front > rear; }

    void enqueue(string nama) {
        if (isFull()) {
            cout << "Queue penuh" << endl;
        } else {
            if (front == -1) front = 0;
            rear++;
            antrian[rear] = nama;
            cout << "Enqueue: " << nama << endl;
        }
    }

    void dequeue() {
        if (isEmpty()) {
            cout << "Queue kosong" << endl;
        } else {
            cout << "Dequeue: " << antrian[front] << endl;
            front++;
        }
    }

    void peek() {
        if (isEmpty()) cout << "Queue kosong" << endl;
        else cout << "Peek (terdepan): " << antrian[front] << endl;
    }

    void display() {
        cout << "Isi queue saat ini: ";
        for (int i = front; i <= rear; i++) cout << antrian[i] << " ";
        cout << endl;
    }
};

int main() {
    Stack s;
    cout << "=== SOAL 2A (STACK) ===" << endl;
    s.push("Fisika Dasar");
    s.push("Kalkulus");
    s.push("Algoritma");
    s.push("Jaringan");
    s.peek();
    s.pop();
    s.pop();
    s.display();

    cout << endl;

    //
    Queue q;
    cout << "=== SOAL 2B (QUEUE) ===" << endl;
    q.enqueue("Reza");
    q.enqueue("Mia");
    q.enqueue("Hendra");
    q.peek();
    q.dequeue();
    q.enqueue("Putri");
    q.display();

    return 0;
}
