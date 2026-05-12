#include <iostream>
using namespace std;

const int MAX = 5;

// Deklarasi stack
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

// Fungsi push
void push(string noTransaksi) {
    if (isFull()) {
        cout << "Stack penuh! Tidak bisa menambah transaksi.\n";
    } else {
        top++;
        stackTransaksi[top] = noTransaksi;
        cout << "Transaksi " << noTransaksi << " berhasil ditambahkan.\n";
    }
}

// Fungsi pop
void pop() {
    if (isEmpty()) {
        cout << "Stack kosong! Tidak ada transaksi yang dihapus.\n";
    } else {
        cout << "Transaksi " << stackTransaksi[top]
             << " berhasil dihapus.\n";
        top--;
    }
}

// Fungsi peek
void peek() {
    if (isEmpty()) {
        cout << "Stack kosong.\n";
    } else {
        cout << "Transaksi teratas: "
             << stackTransaksi[top] << endl;
    }
}

// Fungsi tampil stack
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
    cout << endl;
    peek();

    // Pop 2 transaksi
    cout << endl;
    pop();
    pop();

    // Tampilkan isi stack
    tampilStack();

    return 0;
}
