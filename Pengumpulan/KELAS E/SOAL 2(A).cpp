#include <iostream>
#include <string>

using namespace std;

struct Stack {
    int top = -1;
    int maksimal = 5;
    string buku[5];

    bool isFull() {
        return top == maksimal - 1;
    }

    bool isEmpty() {
        return top == -1;
    }

    void push(string judul) {
        if (isFull()) {
            cout << "Kondisi: Stack Penuh! Tidak dapat menambah buku: " << judul << endl;
        } else {
            top++;
            buku[top] = judul;
            cout << "Berhasil menambahkan (push): " << judul << endl;
        }
    }

    void pop() {
        if (isEmpty()) {
            cout << "Kondisi: Stack Kosong! Tidak ada buku yang bisa diambil." << endl;
        } else {
            cout << "Berhasil mengambil (pop): " << buku[top] << endl;
            top--;
        }
    }

    void peek() {
        if (isEmpty()) {
            cout << "Stack Kosong." << endl;
        } else {
            cout << "Buku paling atas (peek): " << buku[top] << endl;
        }
    }

    void tampilkanStack() {
        cout << "Isi stack saat ini: ";
        if (isEmpty()) {
            cout << "(Kosong)";
        } else {
            for (int i = 0; i <= top; i++) {
                cout << "[" << buku[i] << "] ";
            }
        }
        cout << endl;
    }
};

int main() {
    Stack s;

    cout << "=== SIMULASI STACK BUKU ===" << endl;
    // Simulasi skenario
    s.push("Fisika Dasar");
    s.push("Kalkulus");
    s.push("Algoritma");
    s.push("Jaringan");
    
    s.peek(); // Tampilkan buku paling atas
    
    s.pop(); // Pop buku 1
    s.pop(); // Pop buku 2
    
    s.tampilkanStack(); // Tampilkan isi stack setelah operasi

    return 0;
}
