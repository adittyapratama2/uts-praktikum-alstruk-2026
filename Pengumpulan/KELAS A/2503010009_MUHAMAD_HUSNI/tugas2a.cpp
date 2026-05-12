#include <iostream>
using namespace std;

#define MAX 5

string data[MAX];
int top = -1;

bool isEmpty() {
    return top == -1;
}

bool isFull() {
    return top == MAX - 1;
}

void push(string nilai) {
    if(isFull()) {
        cout << "penuh\n";
    } else {
        data[++top] = nilai;
        cout << nilai << " masuk\n";
    }
}

void pop() {
    if(isEmpty()) {
        cout << "kosong\n";
    } else {
        cout << data[top] << " keluar\n";
        top--;
    }
}

void peek() {
    if(isEmpty()) {
        cout << "kosong\n";
    } else {
        cout << "Data teratas : " << data[top] << endl;
    }
}

void tampil() {
    if(isEmpty()) {
        cout << "kosong\n";
    } else {
        cout << "\nIsi Stack:\n";

        for(int i = top; i >= 0; i--) {
            cout << data[i] << endl;
        }
    }
}

int main() {

    push("T001");
    push("T002");
    push("T003");
    push("T004");

    peek();

    pop();
    pop();

    tampil();

    return 0;
}
