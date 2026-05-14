#include <iostream>
using namespace std;

// Kapasitas maksimum stack
const int MAX = 5;

// Array stack
string stackTransaksi[MAX];

// Variabel top
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
void push(string noTransaksi) {

    if (isFull()) {
        cout << "Stack penuh! Tidak bisa menambah transaksi.\n";
    } else {
        top++;
        stackTransaksi[top] = noTransaksi;

        cout << "Push berhasil: "
             << noTransaksi << endl;
    }
}

// Fungsi pop
void pop() {

    if (isEmpty()) {
        cout << "Stack kosong! Tidak ada data yang dihapus.\n";
    } else {

        cout << "Pop transaksi: "
             << stackTransaksi[top] << endl;

        top--;
    }
}

// Fungsi peek
void peek() {

    if (isEmpty()) {
        cout << "Stack kosong!\n";
    } else {

        cout << "Transaksi teratas: "
             << stackTransaksi[top] << endl;
    }
}

// Fungsi menampilkan isi stack
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

    // Menampilkan transaksi teratas
    cout << endl;
    peek();

    // Pop 2 transaksi
    cout << endl;
    pop();
    pop();

    // Menampilkan isi stack setelah operasi
    tampilStack();

    return 0;
}
