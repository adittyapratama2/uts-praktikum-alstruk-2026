#include <iostream>
using namespace std;

const int MAX = 5;

// ================= STACK =================
string stackData[MAX];
int top = -1;

bool stackKosong() {
    return top == -1;
}

bool stackPenuh() {
    return top == MAX - 1;
}

void push(string data) {
    if (stackPenuh()) {
        cout << "Stack penuh!" << endl;
    } else {
        top++;
        stackData[top] = data;

        cout << "Push: " << data << endl;
    }
}

void pop() {
    if (stackKosong()) {
        cout << "Stack kosong!" << endl;
    } else {
        cout << "Pop: "
             << stackData[top] << endl;

        top--;
    }
}

void peekStack() {
    if (stackKosong()) {
        cout << "Stack kosong!" << endl;
    } else {
        cout << "Data teratas: "
             << stackData[top] << endl;
    }
}

void tampilStack() {
    cout << "Isi Stack:" << endl;

    for (int i = top; i >= 0; i--) {
        cout << stackData[i] << endl;
    }
}

// ================= QUEUE =================
string queueData[MAX];

int front = -1;
int rear = -1;

bool queueKosong() {
    return front == -1;
}

bool queuePenuh() {
    return rear == MAX - 1;
}

void enqueue(string data) {
    if (queuePenuh()) {
        cout << "Queue penuh!" << endl;
    } else {

        if (queueKosong()) {
            front = 0;
        }

        rear++;
        queueData[rear] = data;

        cout << "Enqueue: "
             << data << endl;
    }
}

void dequeue() {
    if (queueKosong()) {
        cout << "Queue kosong!" << endl;
    } else {

        cout << "Dequeue: "
             << queueData[front] << endl;

        if (front == rear) {
            front = rear = -1;
        } else {
            front++;
        }
    }
}

void peekQueue() {
    if (queueKosong()) {
        cout << "Queue kosong!" << endl;
    } else {
        cout << "Data depan: "
             << queueData[front] << endl;
    }
}

void tampilQueue() {
    cout << "Isi Queue: ";

    for (int i = front; i <= rear; i++) {
        cout << queueData[i] << " ";
    }

    cout << endl;
}

// ================= MAIN =================
int main() {

    // STACK
    cout << "===== STACK =====" << endl;

    push("T001");
    push("T002");
    push("T003");
    push("T004");

    peekStack();

    pop();
    pop();

    tampilStack();

    // QUEUE
    cout << "\n===== QUEUE =====" << endl;

    enqueue("Budi");
    enqueue("Sari");
    enqueue("Eko");

    peekQueue();

    dequeue();

    enqueue("Dewi");

    tampilQueue();

    return 0;
}