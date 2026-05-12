#include <iostream>
using namespace std;

#define MAX 5

class Stack {
private:
    string data[MAX];
    int top;
public:
    Stack() { top = -1; }

    bool isEmpty() { return top == -1; }
    bool isFull() { return top == MAX - 1; }

    void push(string noTransaksi) {
        if (isFull()) {
            cout << "Stack penuh! Tidak bisa menambahkan " << noTransaksi << endl;
        } else {
            data[++top] = noTransaksi;
            cout << "Push: " << noTransaksi << endl;
        }
    }

    void pop() {
        if (isEmpty()) {
            cout << "Stack kosong! Tidak bisa pop." << endl;
        } else {
            cout << "Pop: " << data[top--] << endl;
        }
    }

    void peek() {
        if (isEmpty()) {
            cout << "Stack kosong! Tidak ada elemen teratas." << endl;
        } else {
            cout << "Transaksi teratas: " << data[top] << endl;
        }
    }

    void display() {
        if (isEmpty()) {
            cout << "Stack kosong." << endl;
        } else {
            cout << "Isi Stack: ";
            for (int i = top; i >= 0; i--) {
                cout << data[i] << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    Stack s;

    // Simulasi
    s.push("T001");
    s.push("T002");
    s.push("T003");
    s.push("T004");

    s.peek(); // tampilkan transaksi teratas

    s.pop();
    s.pop();

    s.display(); // tampilkan isi stack setelah pop

    return 0;
}

