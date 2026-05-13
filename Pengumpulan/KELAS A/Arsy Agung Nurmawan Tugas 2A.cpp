#include <iostream>
using namespace std;

const int MAX = 5;

string stackData[MAX];
int top = -1;

bool isEmpty() {
    return top == -1;
}

bool isFull() {
    return top == MAX - 1;
}

void push(string noTransaksi) {
    if (isFull()) {
        cout << "Stack penuh! Tidak bisa menambah data.\n";
    } else {
        top++;
        stackData[top] = noTransaksi;
        cout << "Data " << noTransaksi << " berhasil ditambahkan.\n";
    }
}

void pop() {
    if (isEmpty()) {
        cout << "Stack kosong! Tidak ada data yang dihapus.\n";
    } else {
        cout << "Data " << stackData[top] << " berhasil dihapus.\n";
        top--;
    }
}

void peek() {
    if (isEmpty()) {
        cout << "Stack kosong.\n";
    } else {
        cout << "Data teratas : " << stackData[top] << endl;
    }
}

void tampilkan() {
    if (isEmpty()) {
        cout << "Stack kosong.\n";
    } else {
        cout << "Isi Stack:\n";

        for (int i = top; i >= 0; i--) {
            cout << stackData[i] << endl;
        }
    }
}

int main() {

    push("T001");
    push("T002");
    push("T003");
    push("T004");

    cout << endl;

    peek();

    cout << endl;

    pop();
    pop();

    cout << endl;

    tampilkan();

    return 0;
}
