#include <iostream>
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
            cout << "Gagal Push: Stack Penuh!\n";
        } else {
            top++;
            data[top] = noTransaksi;
            cout << "Push T00" << noTransaksi << " berhasil.\n";
        }
    }

    void pop() {
        if (isEmpty()) {
            cout << "Gagal Pop: Stack Kosong!\n";
        } else {
            cout << "Pop T00" << data[top] << " berhasil dikeluarkan.\n";
            top--;
        }
    }

    int peek() {
        if (!isEmpty()) return data[top];
        return -1;
    }

    void tampilkan() {
        cout << "Isi Stack saat ini: ";
        if (isEmpty()) cout << "[Kosong]";
        for (int i = 0; i <= top; i++) {
            cout << "T00" << data[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    Stack riwayat;
    riwayat.push(1);
    riwayat.push(2);
    riwayat.push(3);
    riwayat.push(4);
    
    cout << "Transaksi teratas (Peek): T00" << riwayat.peek() << endl;
    
    riwayat.pop();
    riwayat.pop();
    
    riwayat.tampilkan();
    
    return 0;
}
