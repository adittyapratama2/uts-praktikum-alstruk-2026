#include <iostream>
#include <string>

using namespace std;

const int MAX = 5;
string stackBuku[MAX];
int top = -1;


bool isFull() { return top == MAX - 1; }
bool isEmpty() { return top == -1; }


void push(string judul) {
    if (isFull()) {
        cout << "Stack penuh! Tidak bisa menambah buku: " << judul << endl;
    } else {
        top++;
        stackBuku[top] = judul;
        cout << "Push buku: " << judul << endl;
    }
}


void pop() {
    if (isEmpty()) {
        cout << "Stack kosong, tidak ada buku yang bisa diambil." << endl;
    } else {
        cout << "Pop buku: " << stackBuku[top] << endl;
        top--;
    }
}


void peek() {
    if (isEmpty()) {
        cout << "Stack saat ini kosong." << endl;
    } else {
        cout << "-> Buku paling atas saat ini (Peek): " << stackBuku[top] << endl;
    }
}


void displayStack() {
    cout << "\nIsi Stack: ";
    if (isEmpty()) cout << "[Kosong]";
    else {
        for (int i = 0; i <= top; i++) cout << "[" << stackBuku[i] << "] ";
    }
    cout << "\n-------------------------------------------------\n";
}

int main() {
    cout << "=== SIMULASI STACK PENGEMBALIAN BUKU ===\n\n";

 
    push("Jarkom");
    push("Kalkulus");
    push("Algoritma");
    push("Jaringan");
    displayStack();

    peek();

    cout << "\nMelakukan Pop 2 kali...\n";
    pop();
    pop();
   
    displayStack();

    return 0;
}
