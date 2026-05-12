#include <iostream>
using namespace std;

#define MAX 5

struct Stack {
    int top = -1;
    int data[MAX];

    bool isFull() {
        return top == MAX - 1;
    }

    bool isEmpty() {
        return top == -1;
    }

    void push(int noTransaksi) {
        if (isFull()) {
            cout << "Gagal Push: Riwayat Transaksi Penuh!" << endl;
        } else {
            data[++top] = noTransaksi;
            cout << "Push Berhasil: T00" << noTransaksi << " ditambahkan ke riwayat." << endl;
        }
    }

    void pop() {
        if (isEmpty()) {
            cout << "Gagal Pop: Riwayat Transaksi Kosong!" << endl;
        } else {
            cout << "Pop Berhasil: T00" << data[top--] << " dihapus dari riwayat." << endl;
        }
    }

    void peek() {
        if (isEmpty()) {
            cout << "Riwayat Kosong (Tidak ada transaksi teratas)." << endl;
        } else {
            cout << "Transaksi Teratas saat ini: T00" << data[top] << endl;
        }
    }

    void display() {
        if (isEmpty()) {
            cout << "Isi Stack: [Kosong]" << endl;
        } else {
            cout << "Isi Stack saat ini: ";
            for (int i = 0; i <= top; i++) {
                cout << "T00" << data[i] << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    Stack riwayat;

    // Simulasi Skenario
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
