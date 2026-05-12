#include <iostream>
#include <string>

using namespace std;

#define MAX 5


struct StackBuku {
    int top = -1;
    string data[MAX];

    bool isFull() { return top == MAX - 1; }
    bool isEmpty() { return top == -1; }

    void push(string judul) {
        if (isFull()) cout << "Stack Penuh!\n";
        else data[++top] = judul, cout << "Push: " << judul << endl;
    }

    void pop() {
        if (isEmpty()) cout << "Stack Kosong!\n";
        else cout << "Pop: " << data[top--] << endl;
    }

    void peek() {
        if (!isEmpty()) cout << "Top: " << data[top] << endl;
    }

    void display() {
        cout << "Isi Stack: ";
        for (int i = 0; i <= top; i++) cout << "[" << data[i] << "] ";
        cout << (isEmpty() ? "[Kosong]" : "") << endl;
    }
};

// queue
struct QueueAnggota {
    int front = -1, rear = -1;
    string data[MAX];

    bool isFull() { return rear == MAX - 1; }
    bool isEmpty() { return front == -1 || front > rear; }

    void enqueue(string nama) {
        if (isFull()) cout << "Queue Penuh!\n";
        else {
            if (front == -1) front = 0;
            data[++rear] = nama;
            cout << "Enqueue: " << nama << endl;
        }
    }

    void dequeue() {
        if (isEmpty()) cout << "Queue Kosong!\n";
        else cout << "Dequeue: " << data[front++] << endl;
    }

    void peek() {
        if (!isEmpty()) cout << "Front: " << data[front] << endl;
    }

    void display() {
        cout << "Isi Queue: ";
        for (int i = front; i <= rear && front != -1; i++) cout << "(" << data[i] << ") ";
        cout << (isEmpty() ? "[Kosong]" : "") << endl;
    }
};

int main() {
    
    StackBuku s;
    cout << "=== SIMULASI STACK ===\n";
    s.push("Fisika Dasar"); s.push("Kalkulus"); s.push("Algoritma"); s.push("Jaringan");
    s.peek();
    s.pop(); s.pop();
    s.display();

    cout << "\n";

    
    QueueAnggota q;
    cout << "=== SIMULASI QUEUE ===\n";
    q.enqueue("Reza"); q.enqueue("Mia"); q.enqueue("Hendra");
    q.peek();
    q.dequeue();
    q.enqueue("Putri");
    q.display();

    return 0;
}