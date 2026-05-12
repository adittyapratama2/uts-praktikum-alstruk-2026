#include <iostream>
#include <string>
using namespace std;

#define KAPASITAS 5

struct Stack {
    string data[KAPASITAS];
    int top = -1;
};

bool isEmpty(Stack& s) { return s.top == -1; }
bool isFull(Stack& s)  { return s.top == KAPASITAS - 1; }

void push(Stack& s, string judul) {
    if (isFull(s)) { cout << "penuh\n"; return; }
    s.data[++s.top] = judul;
}
void pop(Stack& s) {
    if (isEmpty(s)) { cout << "kosong\n"; return; }
    cout << "pop: " << s.data[s.top--] << "\n";
}
void peek(Stack& s) {
    if (isEmpty(s)) { cout << "kosong\n"; return; }
    cout << "atas: " << s.data[s.top] << "\n";
}
void tampilStack(Stack& s) {
    cout << "isi stack : ";
    if (isEmpty(s)) { cout << "kosong\n"; return; }
    for (int i = s.top; i >= 0; i--)
        cout << s.data[i];
    cout << "\n";
}

struct Queue {
    string data[KAPASITAS];
    int front = 0;
    int rear  = -1;
    int size  = 0;
};

bool isEmpty(Queue& q) { return q.size == 0; }
bool isFull(Queue& q)  { return q.size == KAPASITAS; }

void enqueue(Queue& q, string nama) {
    if (isFull(q)) { cout << "Queue penuh!\n"; return; }
    q.rear = (q.rear + 1) % KAPASITAS;
    q.data[q.rear] = nama;
    q.size++;
}
void dequeue(Queue& q) {
    if (isEmpty(q)) { cout << "kosong \n"; return; }
    cout << "dequeue: " << q.data[q.front] << "\n";
    q.front = (q.front + 1) % KAPASITAS;
    q.size--;
}
void peek(Queue& q) {
    if (isEmpty(q)) { cout << "kosong \n"; return; }
    cout << "depan: " << q.data[q.front] << "\n";
}
void tampilQueue(Queue& q) {
    cout << "isi queue : ";
    if (isEmpty(q)) { cout << "kosong\n"; return; }
    for (int i = 0; i < q.size; i++)
        cout << q.data[(q.front + i) % KAPASITAS];
    cout << "\n";
}

int main() {
    Stack stack;
    push(stack, "fisika");
    push(stack, "kalkulus");
    push(stack, "algo");
    push(stack, "jarkom");
    peek(stack);
    pop(stack);
    pop(stack);
    tampilStack(stack); 

    cout << "\n";

    Queue queue;
    enqueue(queue, "Reza");
    enqueue(queue, "Mia");
    enqueue(queue, "Hendra");
    peek(queue);
    dequeue(queue);      
    enqueue(queue, "Putri");
    tampilQueue(queue);
    return 0;
}