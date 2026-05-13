#include <iostream>
using namespace std;

int stack[5];
int top = -1; 

bool isEmpty() { return top == -1; }

bool isFull() { return top == 4; }


void push(int noTransaksi) {
    if (isFull()) {
        cout << "Stack penuh! Tidak bisa push T00" << noTransaksi << endl;
    } else {
        top++;
        stack[top] = noTransaksi;
        cout << "Push T00" << noTransaksi << " Berhasil" << endl;
    }
}

void pop() {
    if (isEmpty()) {
        cout << "Stack kosong! Tidak bisa pop." << endl;
    } else {
        cout << "Pop T00" << stack[top] << " Berhasil dihapus" << endl;
        top--;
    }
}

void peek() {
    if (isEmpty()) {
        cout << "Stack kosong!" << endl;
    } else {
        cout << "Transaksi teratas: T00" << stack[top] << endl;
    }
}

void tampil() {
    if (isEmpty()) {
        cout << "Stack kosong." << endl;
        return;
    }
    cout << "Isi stack: ";
    for (int i = top; i >= 0; i--) {
        cout << "T00" << stack[i];
        if (i > 0) cout << "  ";
    }
    cout << endl;
}

int main() {
    cout << "====== RIWAYAT TRANSAKSI ======" << endl;

    push(1); 
    push(2); 
    push(3); 
    push(4); 

    cout << "\n--- Isi Stack ---" << endl;
    tampil();

    cout << "\n--- Peek ---" << endl;
    peek();

    cout << "\n--- Pop 2 Transaksi ---" << endl;
    pop();
    pop();

    cout << "\n--- Isi Setelah Pop ---" << endl;
    tampil();

    return 0;
}
