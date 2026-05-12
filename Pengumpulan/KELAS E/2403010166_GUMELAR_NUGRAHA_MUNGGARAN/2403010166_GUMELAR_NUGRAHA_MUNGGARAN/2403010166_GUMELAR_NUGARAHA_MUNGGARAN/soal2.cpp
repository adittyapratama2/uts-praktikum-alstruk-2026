#include <iostream>
#include <string>
using namespace std;

#define MAX 10

string stack[MAX];
int top = -1;

string queue[MAX];
int front = -1, rear = -1;

void push(string x) {
    if(top == MAX-1) {
        cout << "Stack penuh" << endl;
    } else {
        top++;
        stack[top] = x;
    }
}

string pop() {
    if(top == -1) {
        cout << "Stack kosong" << endl;
        return "";
    } else {
        string x = stack[top];
        top--;
        return x;
    }
}

void enqueue(string x) {
    if(rear == MAX-1) {
        cout << "Queue penuh" << endl;
    } else {
        if(front == -1) front = 0;
        rear++;
        queue[rear] = x;
    }
}

string dequeue() {
    if(front == -1 || front > rear) {
        cout << "Queue kosong" << endl;
        return "";
    } else {
        string x = queue[front];
        front++;
        return x;
    }
}

void printStack() {
    cout << "Sisa Stack: ";
    if(top == -1) cout << "Kosong";
    else for(int i = 0; i <= top; i++) {
        cout << stack[i];
        if(i < top) cout << " -> ";
    }
    cout << endl;
}

void printQueue() {
    cout << "Sisa Queue: ";
    if(front == -1 || front > rear) cout << "Kosong";
    else for(int i = front; i <= rear; i++) {
        cout << queue[i];
        if(i < rear) cout << " -> ";
    }
    cout << endl;
}

int main() {
    cout << "Soal 2A: STACK TUMPUKAN BUKU" << endl;
    push("Fisika Dasar");
    push("Kalkulus");
    push("Algoritma");
    push("Jaringan");
    cout << "Pop: " << pop() << endl;
    cout << "Pop: " << pop() << endl;
    printStack();

    cout << endl << "Soal 2B: QUEUE ANTRIAN PEMINJAMAN" << endl;
    enqueue("Reza");
    enqueue("Mia");
    enqueue("Hendra");
    cout << "Dequeue: " << dequeue() << endl;
    enqueue("Putri");
    printQueue();

    cout << endl << "2403010166 - Gumelar Nugraha Munggaran" << endl;
    return 0;
}