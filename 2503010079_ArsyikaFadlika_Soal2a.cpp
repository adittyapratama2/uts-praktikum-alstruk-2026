#include <iostream>
using namespace std;

#define MAX 5

int stackArr[MAX];
int top = -1;

bool isEmpty() {
    return top == -1;
}

bool isFull() {
    return top == MAX - 1;
}

void push(int data) {
    if (isFull()) {
        cout << "Stack penuh!\n";
    } else {
        stackArr[++top] = data;
        cout << "Push: " << data << endl;
    }
}

void pop() {
    if (isEmpty()) {
        cout << "Stack kosong!\n";
    } else {
        cout << "Pop: " << stackArr[top--] << endl;
    }
}

void peek() {
    if (!isEmpty()) {
        cout << "Top: " << stackArr[top] << endl;
    }
}

void display() {
    cout << "Isi stack: ";
    for (int i = 0; i <= top; i++) {
        cout << stackArr[i] << " ";
    }
    cout << endl;
}

int main() {
    push(1); // T001
    push(2); // T002
    push(3); // T003
    push(4); // T004

    peek();

    pop();
    pop();

    display();

    return 0;
}