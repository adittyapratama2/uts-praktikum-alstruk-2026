#include <iostream>
#include <string>
using namespace std;

string stackData[5];
int top = -1;

bool isStackEmpty() { return top == -1; }
bool isStackFull() { return top == 4; }

void push(string no) {
    if(isStackFull()) cout << "Stack Penuh!\n";
    else { top++; stackData[top] = no; cout << "Push: " << no << "\n"; }
}
void pop() { //
    if(isStackEmpty()) cout << "Stack Kosong!\n";
    else { cout << "Pop: " << stackData[top] << "\n"; top--; }
}
void peekStack() {
    if(!isStackEmpty()) cout << "Peek Stack: " << stackData[top] << "\n";
}

string queueData[5];
int front = -1, rear = -1;

bool isQueueEmpty() { return front == -1 || front > rear; }
bool isQueueFull() { return rear == 4; }

void enqueue(string nama) {
    if(isQueueFull()) cout << "Queue Penuh!\n";
    else { 
        if(front == -1) front = 0;
        rear++; queueData[rear] = nama; 
        cout << "Enqueue: " << nama << "\n"; 
    }
}
void dequeue() { //
    if(isQueueEmpty()) cout << "Queue Kosong!\n";
    else { cout << "Dequeue: " << queueData[front] << "\n"; front++; }
}
void peekQueue() {
    if(!isQueueEmpty()) cout << "Peek Queue: " << queueData[front] << "\n";
}

int main() {
    cout << "--- SIMULASI STACK ---\n";
    push("T001"); push("T002"); push("T003"); push("T004");
    peekStack();
    pop(); pop();
    
    cout << "Isi Stack saat ini: ";
    for(int i = 0; i <= top; i++) cout << stackData[i] << " ";
    
    cout << "\n\n--- SIMULASI QUEUE ---\n";
    enqueue("Budi"); enqueue("Sari"); enqueue("Eko");
    peekQueue();
    dequeue();
    enqueue("Dewi");
    
    cout << "Isi Queue saat ini: ";
    for(int i = front; i <= rear; i++) cout << queueData[i] << " ";
    cout << "\n";

    return 0;
}