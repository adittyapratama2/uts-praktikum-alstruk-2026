#include <iostream>
using namespace std;

const int MAX = 5;

// Deklarasi stack
string stackBuku[MAX];
int top = -1;

// Fungsi cek kosong
bool isEmpty() {
    return top == -1;
}

// Fungsi cek penuh
bool isFull() {
    return top == MAX - 1;
}

// Fungsi push
void push(string judul) {
    if (isFull()) {
        cout << "Stack penuh! Buku \"" << judul << "\" tidak dapat ditambahkan.\n";
    } else {
        top++;
        stackBuku[top] = judul;
        cout << "Buku \"" << judul << "\" berhasil ditambahkan ke stack.\n";
    }
}

// Fungsi pop
void pop() {
    if (isEmpty()) {
        cout << "Stack kosong! Tidak ada buku yang dapat dihapus.\n";
    } else {
        cout << "Buku \"" << stackBuku[top] << "\" dihapus dari stack.\n";
        top--;
    }
}

// Fungsi peek
void peek() {
    if (isEmpty()) {
        cout << "Stack kosong!\n";
    } else {
        cout << "Buku paling atas: " << stackBuku[top] << endl;
    }
}

// Fungsi tampil stack
void tampilStack() {
    if (isEmpty()) {
        cout << "Stack kosong.\n";
    } else {
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

    // Tampilkan isi stack
    tampilStack();

    // Peek
    cout << endl;
    peek();

    // Pop 2 buku
    cout << endl;
    pop();
    pop();

    // Tampilkan isi stack setelah pop
    tampilStack();

    return 0;
}