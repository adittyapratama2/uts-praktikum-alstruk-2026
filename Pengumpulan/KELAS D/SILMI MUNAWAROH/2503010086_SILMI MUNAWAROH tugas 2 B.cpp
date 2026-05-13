#include <iostream>
using namespace std;

#define MAX 5

struct queue {
    string data[MAX];
    int front, rear;
};

void init(queue &q) {
    q.front = -1;
    q.rear = -1;
}

bool isEmpty(queue q) {
    return q.front == -1;
}

bool isFull(queue q) {
    return q.rear == MAX - 1;
}

void enqueue(queue &q, string nama) {

    if (isFull(q)) {
        cout << "queue penuh! "
             << nama << " tidak bisa masuk.\n";
    } else {

        if (isEmpty(q)) {
            q.front = 0;
        }

        q.rear++;
        q.data[q.rear] = nama;

        cout << nama
             << " masuk ke antrian.\n";
    }
}

void dequeue(queue &q) {

    if (isEmpty(q)) {
        cout << "queue kosong!\n";
    } else {

        cout << q.data[q.front]
             << " keluar dari antrian.\n";

        if (q.front == q.rear) {
            q.front = q.rear = -1;
        } else {
            q.front++;
        }
    }
}

void peek(queue q) {

    if (isEmpty(q)) {
        cout << "queue kosong.\n";
    } else {
        cout << "antrian terdepan: "
             << q.data[q.front] << endl;
    }
}

void display(queue q) {

    if (isEmpty(q)) {
        cout << "queue kosong.\n";
    } else {

        cout << "\nIsi queue:\n";

        for (int i = q.front; i <= q.rear; i++) {
            cout << "- " << q.data[i] << endl;
        }
    }
}

int main() {

    queue q;
    init(q);

    enqueue(q, "Reza");
    enqueue(q, "Mia");
    enqueue(q, "Hendra");
    display(q);
    cout << endl;

    peek(q);
    cout << endl;

    dequeue(q);
    display(q);
    cout << endl;

    enqueue(q, "Putri");
    cout << endl;
    display(q);

    return 0;
}