#include <iostream>
using namespace std;

const int MAX = 5;

string stackdata[MAX];
int top = -1;

//cek kosong
bool isEmpty() {
    return top == -1;
}

//cek penuh
bool isFull() {
    return top == MAX -1;
}

//bagian push
void push(string notransaksi) {
    if(isFull()) {
        cout << "Stack penuh! Transaksi" << notransaksi
             << " tidak dapat ditambahkan.\n";
    } else {
        top++;
        stackdata[top] = notransaksi;
        cout << "Transaksi " << notransaksi
             << " berhasil ditambahkan ke stack.\n";
    }
}

//bagian pop
void pop() {
    if(isEmpty()) {
        cout << "Stack kosong! Tidak ada transaksi yang dihapus.\n";
    } else {
        cout << "Transaksi " << stackdata[top]
             << " berhasil dihapus dari stack.\n";
        top--;
    }
}

//bagian peek
void peek() {
    if(isEmpty()) {
        cout << "Stack kosong! Tidak ada transaksi teratas.\n";
    } else {
        cout << "transaksi teratas: " << stackdata[top] << endl;
    }
}

//tampilan stack
void tampilanstack() {
    if(isEmpty()) {
        cout << "Stack kosong!\n";
    } else {
        cout << "\nIsi stack transaksi: \n";
        for(int i=top; i>=0; i--) {
            cout << stackdata[i] << endl;
        }
    }
}

int main () {
    cout << "\n===== SIMULASI STACK RIWAYAT TRANSAKSI =====" << endl;

    //push 4 transaksi
    push("T001");
    push("T002");
    push("T003");
    push("T004");

    //menampilkan transaksi teratas
    cout << endl;
    peek();

    //pop 2 transaksi
    cout << endl;
    pop();
    pop();

    //menampilkan isi stack setelah pop
    tampilanstack();


    return 0;
}
