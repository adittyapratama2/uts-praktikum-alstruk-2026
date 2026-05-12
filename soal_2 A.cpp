#include <iostream>
#include <string>

using namespace std;

struct StackBuku {
    string buku[5];
    int top = -1;

    bool isFull() {
        return top == 4;
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
            cout << "Info: Berhasil push buku '" << judul << "'" << endl;
        }
    }

    void pop() {
        if (isEmpty()) {
            cout << "Kondisi: Stack Kosong! Tidak ada buku yang bisa diambil." << endl;
        } else {
            cout << "Info: Berhasil pop buku '" << buku[top] << "'" << endl;
            top--;
        }
    }

    void peek() {
        if (isEmpty()) {
            cout << "Kondisi: Stack Kosong." << endl;
        } else {
            cout << "Buku paling atas (peek): " << buku[top] << endl;
        }
    }

    void tampilkan() {
        if (isEmpty()) {
            cout << "Isi Stack: (Kosong)" << endl;
        } else {
            cout << "Isi Stack saat ini: " << endl;
            for (int i = top; i >= 0; i--) {
                cout << "[" << i << "] " << buku[i] << endl;
            }
        }
    }
};

int main() {
    StackBuku s;

    cout << "--- SIMULASI STACK (TUMPUKAN BUKU) ---" << endl;
    s.push("Fisika Dasar");
    s.push("Kalkulus");
    s.push("Algoritma");
    s.push("Jaringan");

    s.peek();

    cout << "\nMelakukan Pop 2 kali..." << endl;
    s.pop();
    s.pop();

    cout << endl;
    s.tampilkan();

    return 0;
}