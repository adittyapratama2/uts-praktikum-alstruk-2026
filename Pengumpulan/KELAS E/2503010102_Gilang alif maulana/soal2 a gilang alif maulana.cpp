#include <iostream>
using namespace std;

// Deklarasi stack
const int MAX = 5;
string stackBuku[MAX];
int top = -1;

// Fungsi mengecek stack kosong
bool isEmpty() {
    return top == -1;
}

// Fungsi mengecek stack penuh
bool isFull() {
    return top == MAX - 1;
}

// Fungsi push
void push(string judul) {
    if (isFull()) {
        cout << "Stack penuh! Buku \"" << judul
             << "\" tidak dapat ditambahkan.\n";
    } else {
        top++;
        stackBuku[top] = judul;

        cout << "Buku \"" << judul
             << "\" berhasil ditambahkan ke stack.\n";
    }
}

// Fungsi pop
void pop() {
    if (isEmpty()) {
        cout << "Stack kosong! Tidak ada buku yang dapat dihapus.\n";
    } else {
        cout << "Buku \"" << stackBuku[top]
             << "\" berhasil dihapus dari stack.\n";

        top--;
    }
}

// Fungsi peek
void peek() {
    if (isEmpty()) {
        cout << "Stack kosong! Tidak ada buku di posisi atas.\n";
    } else {
        cout << "Buku paling atas adalah: "
             << stackBuku[top] << endl;
    }
}

// Fungsi menampilkan isi stack
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

    // Menampilkan buku paling atas
    cout << endl;
    peek();

    // Pop 2 buku
    cout << endl;
    pop();
    pop();

    // Menampilkan isi stack setelah pop
    tampilStack();

    return 0;
}
