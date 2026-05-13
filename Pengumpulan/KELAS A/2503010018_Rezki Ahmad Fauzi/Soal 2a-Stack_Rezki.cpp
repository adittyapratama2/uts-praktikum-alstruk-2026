#include <iostream>
using namespace std;

string stackBuku[5];
int top = -1;

bool isEmpty() {
    return top == -1;
}

bool isFull() {
    return top == 4;
}

void push(string judul) {
    if (isFull()) {
        cout << "Stack penuh\n";
    } else {
        top++;
        stackBuku[top] = judul;
        cout << judul << " ditambahkan\n";
    }
}

void pop() {
    if (isEmpty()) {
        cout << "Stack kosong\n";
    } else {
        cout << stackBuku[top] << " dihapus\n";
        top--;
    }
}

void peek() {
    if (isEmpty()) {
        cout << "Stack kosong\n";
    } else {
        cout << "Paling atas: " << stackBuku[top] << endl;
    }
}

void tampil() {
    for (int i = top; i >= 0; i--) {
        cout << stackBuku[i] << endl;
    }
}

int main() {

    push("Fisika Dasar");
    push("Kalkulus");
    push("Algoritma");
    push("Jaringan");

    peek();

    pop();
    pop();

    cout << "\nIsi Stack:\n";
    tampil();

    return 0;
}
