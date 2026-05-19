#include <iostream>
using namespace std;

const int MAX = 5;

string stackBuku[MAX];
int top = -1;

// Cek stack kosong
bool isEmpty() {
    return top == -1;
}

// Cek stack penuh
bool isFull() {
    return top == MAX - 1;
}

// Push
void push(string judul) {

    if (isFull()) {
        cout << "Stack penuh! Buku tidak bisa ditambahkan.\n";
    }
    else {
        top++;
        stackBuku[top] = judul;

        cout << "Buku \"" << judul << "\" berhasil ditambahkan.\n";
    }
}

// Pop
void pop() {

    if (isEmpty()) {
        cout << "Stack kosong!\n";
    }
    else {
        cout << "Buku \"" << stackBuku[top] << "\" berhasil dihapus.\n";

        top--;
    }
}

// Peek
void peek() {

    if (isEmpty()) {
        cout << "Stack kosong!\n";
    }
    else {
        cout << "Buku paling atas : " << stackBuku[top] << endl;
    }
}

// Tampilkan isi stack
void tampil() {

    if (isEmpty()) {
        cout << "Stack kosong!\n";
    }
    else {

        cout << "\nIsi Stack Buku:\n";

        for (int i = top; i >= 0; i--) {
            cout << "- " << stackBuku[i] << endl;
        }
    }
}

int main() {

    // Push 4 buku
    push("Fisika Dasar");
    push("Kalkulus");
    push("Algoritma");
    push("Jaringan");

    // Peek
    cout << endl;
    peek();

    // Pop 2 buku
    cout << endl;
    pop();
    pop();

    // Tampilkan isi stack
    tampil();

    return 0;
}
