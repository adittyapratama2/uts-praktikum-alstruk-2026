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
            cout << "[GAGAL] Stack penuh! " << noTransaksi << " tidak dapat disimpan.\n";
            return;
        }
        data[++top] = noTransaksi;
        cout << "[+] Transaksi " << noTransaksi << " berhasil disimpan.\n";
    }

    void pop() {
        if (isEmpty()) {
            cout << "[GAGAL] Riwayat kosong, tidak ada transaksi untuk dihapus.\n";
            return;
        }
        cout << "[-] Transaksi " << data[top--] << " dihapus dari riwayat.\n";
    }

    string peek() {
        if (isEmpty()) {
            cout << "[INFO] Riwayat kosong.\n";
            return "";
        }
        return data[top];
    }

    void tampilkan() {
        if (isEmpty()) {
            cout << "Riwayat transaksi kosong.\n";
            return;
        }
        cout << "Riwayat transaksi (terbaru -> terlama): ";
        for (int i = top; i >= 0; i--)
            cout << data[i] << (i > 0 ? " -> " : "");
        cout << "\n";
    }
};

int main() {
    Stack s;

    cout << "-- Menyimpan transaksi --\n";
    s.push("T001");
    s.push("T002");
    s.push("T003");
    s.push("T004");

    cout << "\nTransaksi terakhir: " << s.peek() << "\n";

    cout << "\n-- Menghapus 2 transaksi terakhir --\n";
    s.pop();
    s.pop();

    cout << "\n";
    s.tampilkan();

    return 0;
}
