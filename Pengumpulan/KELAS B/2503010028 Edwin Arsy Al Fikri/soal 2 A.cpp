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
        cout << "Stack penuh! Buku tidak bisa ditambahkan." << endl;
    } else {
        top++;
        stackBuku[top] = judul;
        cout << "Buku '" << judul << "' berhasil ditambahkan." << endl;
    }
}


void pop() {
    if (isEmpty()) {
        cout << "Stack kosong! Tidak ada buku yang dihapus." << endl;
    } else {
        cout << "Buku '" << stackBuku[top] << "' diambil dari stack." << endl;
        top--;
    }
}


void peek() {
    if (isEmpty()) {
        cout << "Stack kosong!" << endl;
    } else {
        cout << "Buku paling atas: " << stackBuku[top] << endl;
    }
}


void tampilStack() {
    if (isEmpty()) {
        cout << "Stack kosong." << endl;
    } else {
        cout << "Isi Stack:" << endl;

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

    cout << endl;

   
    peek();

    cout << endl;

  
    pop();
    pop();

    cout << endl;

    tampilStack();
    return 0;
}
