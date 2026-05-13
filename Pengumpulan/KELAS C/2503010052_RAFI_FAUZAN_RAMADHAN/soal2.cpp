#include <iostream>
using namespace std;
 
const int MAX = 5;
 
// ==================== STACK ====================
string stackData[MAX];
int top = -1;
 
void push(string judul) {
    if (top == MAX - 1) cout << "Stack penuh!\n";
    else { stackData[++top] = judul; cout << "Push: " << judul << "\n"; }
}
 
void pop() {
    if (top == -1) cout << "Stack kosong!\n";
    else cout << "Pop: " << stackData[top--] << "\n";
}
 
void peekStack() {
    cout << "Paling atas: " << (top == -1 ? "kosong" : stackData[top]) << "\n";
}
 
void tampilStack() {
    cout << "Stack: ";
    if (top == -1) { cout << "(kosong)\n"; return; }
    for (int i = top; i >= 0; i--)
        cout << stackData[i] << (i > 0 ? " -> " : "\n");
}
 
// ==================== QUEUE ====================
string queueData[MAX];
int front = -1, rear = -1;
 
void enqueue(string nama) {
    if (rear == MAX - 1) cout << "Queue penuh!\n";
    else { if (front == -1) front = 0; queueData[++rear] = nama; cout << "Enqueue: " << nama << "\n"; }
}
 
void dequeue() {
    if (front == -1) cout << "Queue kosong!\n";
    else {
        cout << "Dequeue: " << queueData[front] << "\n";
        if (front == rear) front = rear = -1;
        else front++;
    }
}
 
void peekQueue() {
    cout << "Terdepan: " << (front == -1 ? "kosong" : queueData[front]) << "\n";
}
 
void tampilQueue() {
    cout << "Queue: ";
    if (front == -1) { cout << "(kosong)\n"; return; }
    for (int i = front; i <= rear; i++)
        cout << queueData[i] << (i < rear ? " -> " : "\n");
}
 
// ==================== MAIN ====================
int main() {
 
    // ----- SOAL A: STACK -----
    cout << "===== SOAL A: STACK =====\n";
    push("Fisika Dasar");
    push("Kalkulus");
    push("Algoritma");
    push("Jaringan");
    tampilStack();
    peekStack();
    pop(); pop();
    tampilStack();
 
    // ----- SOAL B: QUEUE -----
    cout << "\n===== SOAL B: QUEUE =====\n";
    enqueue("Reza");
    enqueue("Mia");
    enqueue("Hendra");
    tampilQueue();
    peekQueue();
    dequeue();
    tampilQueue();
    enqueue("Putri");
    tampilQueue();
 
    return 0;
}