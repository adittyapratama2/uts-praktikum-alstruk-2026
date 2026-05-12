#include <iostream>
using namespace std;

const int MAX = 5;

string stack[MAX];
int top = -1;

bool isEmpty() {
    return top == -1;
}

bool isFull() {
    return top == MAX - 1;
}

void push(string noTransaksi) {
    if (isFull()) {
        cout << "Stack penuh! Transaksi "
             << noTransaksi
             << " tidak dapat ditambahkan."<<endl;
    } else {
        top++;
        stack[top] = noTransaksi;

        cout << "Transaksi "
             << noTransaksi
             << " berhasil ditambahkan ke stack."<<endl;
    }
}

void pop() {
    if (isEmpty()) {
        cout << "Stack kosong! Tidak ada transaksi yang dihapus."<<endl;
    } else {
        cout << "Transaksi "
             << stack[top]
             << " berhasil dihapus dari stack."<<endl;

        top--;
    }
}


void peek() {
    if (isEmpty()) {
        cout << "Stack kosong!"<<endl;
    } else {
        cout << "Transaksi teratas: "
             << stack[top]
             << endl;
    }
}
void tampilStack() {
    if (isEmpty()) {
        cout << "Stack kosong."<<endl;
    } else {
        cout << "Isi Stack Saat ini:"<<endl;

        for (int i = top; i >= 0; i--) {
            cout << stack[i] << endl;
        }
    }
}

int main() {
	
	cout << "=== Stack (Riwayat Transaksi) ===" <<endl;

    push("T001");
    push("T002");
    push("T003");
    push("T004");
    cout;
    peek();
    cout;
    pop();
    pop();
    tampilStack();

    return 0;
}
