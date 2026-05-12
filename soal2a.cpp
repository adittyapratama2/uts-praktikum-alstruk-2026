#include <iostream>
using namespace std;

const int MAX = 5;
string stackBuku[MAX];
int top = -1;

bool isEmpty() {
    return top == -1;
}

bool isFull() {
    return top == MAX-1;
}

void push(string judul) {
    if(isFull())
        cout << "Stack penuh!\n";
    else {
        stackBuku[++top] = judul;
        cout << judul << " ditambahkan\n";
    }
}

void pop() {
    if(isEmpty())
        cout << "Stack kosong!\n";
    else
        cout << stackBuku[top--] << " dihapus\n";
}

void peek() {
    if(isEmpty())
        cout << "Stack kosong\n";
    else
        cout << "Paling atas: " << stackBuku[top] << endl;
}

void tampil() {
    for(int i = top; i >= 0; i--)
        cout << stackBuku[i] << endl;
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