#include <iostream>
using namespace std;

const int MAX = 5;

string stackBuku[MAX];
int top = -1;

bool isEmpty() {
    return top == -1;
}

bool isFull() {
    return top == MAX - 1;
}

void push(string judul) {
    if (isFull()) {
        cout << "Stack penuh!\n";
    } else {
        top++;
        stackBuku[top] = judul;
        cout << "Buku \"" << judul << "\" berhasil ditambahkan.\n";
    }
}

void pop() {
    if (isEmpty()) {
        cout << "Stack kosong!\n";
    } else {
        cout << "Buku \"" << stackBuku[top] << "\" dihapus.\n";
        top--;
    }
}

void peek() {
    if (isEmpty()) {
        cout << "Stack kosong!\n";
    } else {
        cout << "Buku paling atas: " << stackBuku[top] << endl;
    }
}

void tampilkan() {
    if (isEmpty()) {
        cout << "Stack kosong!\n";
    } else {
        cout << "\nIsi Stack:\n";
        for (int i = top; i >= 0; i--) {
            cout << "- " << stackBuku[i] << endl;
        }
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

    tampilkan();

    return 0;
}
