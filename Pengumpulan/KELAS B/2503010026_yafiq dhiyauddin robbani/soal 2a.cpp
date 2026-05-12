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
            cout << "[Peringatan] Stack Penuh! Tidak dapat menambah: " << judul << endl;
        } else {
            top++;
            buku[top] = judul;
            cout << "Berhasil push: " << judul << " (Top sekarang: " << top << ")" << endl;
        }
    }

    void pop() {
        if (isEmpty()) {
            cout << "[Peringatan] Stack Kosong! Tidak ada buku untuk diambil." << endl;
        } else {
            cout << "Berhasil pop: " << buku[top] << endl;
            top--;
        }
    }

    void peek() {
        if (isEmpty()) {
            cout << "Stack Kosong!" << endl;
        } else {
            cout << "Buku paling atas (Peek): " << buku[top] << endl;
        }
    }

    void display() {
        cout << "\n--- Isi Tumpukan (Dari Atas ke Bawah) ---" << endl;
        if (isEmpty()) {
            cout << "[Kosong]" << endl;
        } else {
            for (int i = top; i >= 0; i--) { // Diubah: Menampilkan dari atas ke bawah
                cout << "[" << i << "] " << buku[i] << endl;
            }
        }
        cout << "----------------------------------------\n" << endl;
    }
};

int main() {
    StackBuku s;
    cout << "=== SIMULASI STACK BUKU ===\n";
    
    // Skenario: push 4 buku
    s.push("Fisika Dasar");
    s.push("Kalkulus");
    s.push("Algoritma");
    s.push("Jaringan");
    
    s.display(); // Melihat kondisi setelah push
    
    s.peek();
    
    // Pop 2 buku
    cout << "\nMelakukan Pop 2x..." << endl;
    s.pop();
    s.pop();
    
    s.display();
    
    return 0;
}
