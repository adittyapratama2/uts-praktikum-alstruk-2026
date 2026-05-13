#include <iostream>
using namespace std;

string stack[5];
int top = -1;


bool isEmpty() {
    return top == -1;
}


bool isFull() {
    return top == 4;
}


void push(string judul) {
    if (isFull()) {
        cout << "Stack penuh!" << endl;
    } else {
        top++;
        stack[top] = judul;
        cout << "Buku " << judul << " masuk ke stack" << endl;
    }
}


void pop() {
    if (isEmpty()) {
        cout << "Stack kosong!" << endl;
    } else {
        cout << "Buku " << stack[top] << " dihapus" << endl;
        top--;
    }
}


void peek() {
    if (isEmpty()) {
        cout << "Stack kosong" << endl;
    } else {
        cout << "Buku paling atas : " << stack[top] << endl;
    }
}


void tampil() {
    if (isEmpty()) {
        cout << "Tidak ada isi stack" << endl;
    } else {
        cout << "\nIsi stack buku :" << endl;
        for (int i = top; i >= 0; i--) {
            cout << "- " << stack[i] << endl;
        }
    }
}

int main() {

    push("FISIKA DASAR");
    push("Kalkulus");
    push("Algoritma");
    push("Jaringan");

    cout << endl;
    peek();

    cout << endl;
    pop();
    pop();

    tampil();

    return 0;
}
