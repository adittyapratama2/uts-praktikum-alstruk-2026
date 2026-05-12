#include <iostream>
#include <string>

using namespace std;

#define MAX 5

struct RiwayatKasir {
    int top;
    string nota[MAX];
};

void init(RiwayatKasir &rk) {
    rk.top = -1;
}

bool isFull(RiwayatKasir rk) {
    return rk.top == MAX - 1;
}

bool isEmpty(RiwayatKasir rk) {
    return rk.top == -1;
}

void push(RiwayatKasir &rk, string kode) {
    if (isFull(rk)) {
        cout << "Stack penuh! Tidak bisa input nota: " << kode << endl;
    } else {
        rk.top++;
        rk.nota[rk.top] = kode;
        cout << "Berhasil input: " << kode << endl;
    }
}

void pop(RiwayatKasir &rk) {
    if (isEmpty(rk)) {
        cout << "Stack kosong! Tidak ada transaksi untuk dihapus." << endl;
    } else {
        cout << "Menghapus riwayat: " << rk.nota[rk.top] << endl;
        rk.top--;
    }
}

void peek(RiwayatKasir rk) {
    if (!isEmpty(rk)) {
        cout << "Nota terakhir: " << rk.nota[rk.top] << endl;
    }
}

void display(RiwayatKasir rk) {
    cout << "\nIsi Stack saat ini: ";
    if (isEmpty(rk)) {
        cout << "[Kosong]";
    } else {
        for (int i = rk.top; i >= 0; i--) {
            cout << rk.nota[i] << " ";
        }
    }
    cout << "\n--------------------------" << endl;
}

int main() {
    RiwayatKasir r;
    init(r);

    cout << "=== KASIR STACK ===" << endl;

    push(r, "T001");
    push(r, "T002");
    push(r, "T003");
    push(r, "T004");

    display(r);
    peek(r);

    cout << "\n--- Membatalkan 2 Transaksi ---" << endl;
    pop(r);
    pop(r);

    display(r);

    return 0;
}
