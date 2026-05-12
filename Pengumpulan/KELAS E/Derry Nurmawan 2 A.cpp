#include <iostream>
using namespace std;

const int MAX = 5;

string stackTransaksi[MAX];
int top = -1;

bool isEmpty() {
    return top == -1;
}

bool isFull() {
    return top == MAX - 1;
}

void push(string noTransaksi) {
    if (isFull()) {
        cout << "Stack penuh! Transaksi " << noTransaksi 
             << " tidak dapat ditambahkan.\n";
    } else {
        top++;
        stackTransaksi[top] = noTransaksi;
        cout << "Push: " << noTransaksi 
             << " berhasil ditambahkan ke stack.\n";
    }
}

void pop() {
    if (isEmpty()) {
        cout << "Stack kosong! Tidak ada data yang dihapus.\n";
    } else {
        cout << "Pop: " << stackTransaksi[top] 
             << " berhasil dihapus dari stack.\n";
        top--;
    }
}

void peek() {
    if (isEmpty()) {
        cout << "Stack kosong!\n";
    } else {
        cout << "Data teratas (Peek): " 
             << stackTransaksi[top] << endl;
    }
}

void display() {
    if (isEmpty()) {
        cout << "Stack kosong.\n";
    } else {
        cout << "\nIsi stack saat ini:\n";
        for (int i = top; i >= 0; i--) {
            cout << stackTransaksi[i] << endl;
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

    display();

    return 0;
}
