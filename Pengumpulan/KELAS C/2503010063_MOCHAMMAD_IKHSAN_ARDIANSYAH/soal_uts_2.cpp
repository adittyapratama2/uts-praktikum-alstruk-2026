#include <iostream>
#include <string>
using namespace std;

const int MAX = 5;

class Stack {
    string data[MAX];
    int top = -1;

public:
    bool isEmpty() { return top == -1; }
    bool isFull()  { return top == MAX - 1; }

    void push(string id) {
        if (isFull())
            cout << "[GAGAL] Stack penuh, transaksi " << id << " tidak tersimpan.\n";
        else
            cout << "[PUSH] Transaksi " << (data[++top] = id) << " ditambahkan.\n";
    }

    void pop() {
        if (isEmpty())
            cout << "[GAGAL] Stack kosong, tidak ada yang dihapus.\n";
        else
            cout << "[POP] Transaksi " << data[top--] << " dihapus.\n";
    }

    void peek() {
        cout << (isEmpty() ? "[INFO] Stack kosong.\n"
                             : "[PEEK] Teratas: " + data[top] + "\n");
    }

    void display() {
        cout << "\n=== ISI STACK ===\n";
        if (isEmpty()) { cout << "(kosong)\n\n"; return; }
        for (int i = top; i >= 0; i--)
            cout << "| " << data[i] << " |" << (i == top ? " <-- TOP" : "") << "\n";
        cout << "=================\n\n";
    }
};

int main() {
    Stack riwayat;
    cout << "--- SIMULASI STACK KASIR ---\n\n";

    riwayat.push("T001");
    riwayat.push("T002");
    riwayat.push("T003");
    riwayat.push("T004");
    riwayat.peek();
    riwayat.pop();
    riwayat.pop();
    riwayat.display();
}