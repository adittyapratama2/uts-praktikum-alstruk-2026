#include <iostream>
#include <string>

using namespace std;

struct Stack {
    int data[5];
    int top = -1;

    bool isFull() {
        return top == 4;
    }

    bool isEmpty() {
        return top == -1;
    }

    void push(int noTransaksi) {
        if (isFull()) {
            cout << "Stack Penuh! Tidak bisa menambah T00" << noTransaksi << endl;
        } else {
            top++;
            data[top] = noTransaksi;
            cout << "Push: T00" << noTransaksi << " berhasil." << endl;
        }
    }

    void pop() {
        if (isEmpty()) {
            cout << "Stack Kosong! Tidak ada data yang bisa dihapus." << endl;
        } else {
            cout << "Pop: T00" << data[top] << " dikeluarkan." << endl;
            top--;
        }
    }

    void peek() {
        if (isEmpty()) {
            cout << "Stack Kosong!" << endl;
        } else {
            cout << "Transaksi teratas (Peek): T00" << data[top] << endl;
        }
    }

    void display() {
        cout << "Isi Stack saat ini: ";
        if (isEmpty()) {
            cout << "[Kosong]";
        } else {
            for (int i = 0; i <= top; i++) {
                cout << "T00" << data[i] << " ";
            }
        }
        cout << endl;
    }
};

int main() {
    Stack riwayat;
    
    cout << "=== SIMULASI STACK (RIWAYAT TRANSAKSI) ===" << endl;
    riwayat.push(1);
    riwayat.push(2);
    riwayat.push(3);
    riwayat.push(4);
    
    riwayat.peek();
    
    riwayat.pop();
    riwayat.pop();
    
    riwayat.display();
    return 0;
}
