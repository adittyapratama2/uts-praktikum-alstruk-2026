#include <iostream>
using namespace std;

const int MAX = 5;

string stackTransaksi[MAX];
int top = -1;

// Fungsi cek kosong
bool isEmpty() {
    return top == -1;
}

// Fungsi cek penuh
bool isFull() {
    return top == MAX - 1;
}

// Push
void push(string noTransaksi) {
    if (isFull()) {
        cout << "Stack penuh! Tidak bisa menambah transaksi.\n";
    } else {
        top++;
        stackTransaksi[top] = noTransaksi;
        cout << "Transaksi " << noTransaksi << " berhasil ditambahkan.\n";
    }
}

// Pop
void pop() {
    if (isEmpty()) {
        cout << "Stack kosong! Tidak ada data yang dihapus.\n";
    } else {
        cout << "Transaksi " << stackTransaksi[top]
             << " dihapus dari stack.\n";
        top--;
    }
}

// Peek
void peek() {
    if (isEmpty()) {
        cout << "Stack kosong.\n";
    } else {
        cout << "Transaksi teratas: "
             << stackTransaksi[top] << endl;
    }
}

// Tampilkan isi stack
void tampilStack() {
    if (isEmpty()) {
        cout << "Stack kosong.\n";
    } else {
        cout << "\nIsi Stack:\n";
        for (int i = top; i >= 0; i--) {
            cout << stackTransaksi[i] << endl;
        }
    }
}

int main() {

    // Push 4 transaksi
    push("T001");
    push("T002");
    push("T003");
    push("T004");

    // Peek
    peek();

    // Pop 2 transaksi
    pop();
    pop();

    // Tampilkan isi stack
    tampilStack();

    return 0;
}