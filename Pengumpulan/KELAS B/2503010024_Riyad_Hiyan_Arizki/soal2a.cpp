#include <iostream>
#include <string>
using namespace std;

const int MAKS = 5;
string stackBuku[MAKS];
int top = -1;

bool isEmpty() { return top == -1; }
bool isFull()  { return top == MAKS - 1; }

void push(string judul) {
    if (isFull()) {
        cout << "[GAGAL] Stack penuh! Tidak bisa nambah: " << judul << endl;
        return;
    }
    stackBuku[++top] = judul;
    cout << "[PUSH] Buku ditambahkan: " << judul << endl;
}

void pop() {
    if (isEmpty()) {
        cout << "[GAGAL] Stack kosong! Tidak ada buku untuk diambil." << endl;
        return;
    }
    cout << "[POP] Buku diambil: " << stackBuku[top] << endl;
    top--;
}

void peek() {
    if (isEmpty()) {
        cout << "[INFO] Stack kosong." << endl;
        return;
    }
    cout << "[PEEK] Buku paling atas: " << stackBuku[top] << endl;
}

void tampilStack() {
    if (isEmpty()) {
        cout << "[INFO] Stack kosong." << endl;
        return;
    }
    cout << "Isi stack (atas ke bawah):" << endl;
    for (int i = top; i >= 0; i--)
        cout << "  [" << i << "] " << stackBuku[i] << endl;
}

int main() {
    cout << "=== STACK: BUKU DIKEMBALIKAN ===" << endl;

    // Push 4 buku
    push("Fisika Dasar");
    push("Kalkulus");
    push("Algoritma");
    push("Jaringan");

    cout << endl;
    peek();

    cout << endl;
    pop();
    pop();

    cout << endl;
    cout << "--- Isi stack setelah 2x pop ---" << endl;
    tampilStack();

    return 0;
}