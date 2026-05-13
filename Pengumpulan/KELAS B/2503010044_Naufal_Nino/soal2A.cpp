#include <iostream>

using namespace std;

const int STACK_SIZE = 5;

string stack[STACK_SIZE];
int top = -1;

void initStack() {
    top = -1;
}

bool isFULL() {
    return top == STACK_SIZE - 1;
}

bool isEMPTY() {
    return top == -1;
}

void push(string value) {
    if (isFULL()) {
        cout << "\n\nStack sudah penuh. Tidak dapat menambahkan elemen baru.\n\n";
    } 
    else {
        top++;
        stack[top] = value;
        cout << "\n\nElemen " << value << " berhasil ditambahkan ke stack.\n\n";
    }
}

void pop() {
    if (isEMPTY()) {
        cout << "\n\nStack kosong. Tidak dapat menghapus data.\n\n";
    } 
    else {
        cout << "\n\nElemen " << stack[top] << " berhasil dihapus dari stack.\n\n";
        top--;
    }
}

void peek() {
    if (isEMPTY()) {
        cout << "\n\nStack kosong. Tidak ada data untuk ditampilkan.\n\n";
    }
    else {
        cout << "\n\nData teratas saat ini pada stack adalah : " << stack[top] << "\n\n";
    }
}

void display () {
    if (isEMPTY()) {
        cout << "\n\nStack kosong. Tidak ada data untuk ditampilkan.\n\n";
    }
    else {
        cout << "\n\nSeluruh data pada stack saat ini adalah : \n\n";;
        for (int i = 0 ; i <= top ; i++) {
            cout << stack[i] << endl;
        }
    }
}

int main () {
    initStack();
    string value;

    push("Fisika Dasar");
    push("Kalkulus");
    push("Algoritma");
    push("Jaringan");

    display();

    peek();

    pop();
    pop();

    display();

    return 0;
}