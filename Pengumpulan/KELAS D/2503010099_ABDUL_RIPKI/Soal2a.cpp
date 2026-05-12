#include <iostream>
#include <string>
using namespace std;

struct Stack {
    string data[5];
    int top = -1;

    bool isEmpty() { return top == -1; }
    bool isFull()  { return top == 4; }

    void push(string noTransaksi) {
        if (isFull()) {
            cout << "Stack penuh! Tidak bisa menambah " << noTransaksi << "\n";
            return;
        }
        data[++top] = noTransaksi;
        cout << "Push " << noTransaksi << " -> OK\n";
    }

    void pop() {
        if (isEmpty()) {
            cout << "Stack kosong! Tidak ada yang bisa di-pop\n";
            return;
        }
        cout << "Pop " << data[top--] << " -> OK\n";
    }

    string peek() {
        if (isEmpty()) {
            cout << "Stack kosong!\n";
            return "";
        }
        return data[top];
    }

    void tampilkan() {
        if (isEmpty()) {
            cout << "Stack kosong\n";
            return;
        }
        cout << "Isi stack (top -> bottom): ";
        for (int i = top; i >= 0; i--)
            cout << data[i] << (i > 0 ? " -> " : "");
        cout << "\n";
    }
};

int main() {
    Stack s;

    cout << "=== Push 4 transaksi ===\n";
    s.push("T001");
    s.push("T002");
    s.push("T003");
    s.push("T004");

    cout << "\nTransaksi teratas (peek): " << s.peek() << "\n";

    cout << "\n=== Pop 2 transaksi ===\n";
    s.pop();
    s.pop();

    cout << "\n";
    s.tampilkan();

    return 0;
}
