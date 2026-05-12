#include <iostream>
#include <string>

using namespace std;

#define MAX 5 

struct StackTransaksi {
    int top;
    string data[MAX];
};

void init(StackTransaksi &s) {
    s.top = -1;
}

bool isFull(StackTransaksi s) {
    return s.top == MAX - 1;
}

bool isEmpty(StackTransaksi s) {
    return s.top == -1;
}

void push(StackTransaksi &s, string noTrans) {
    if (isFull(s)) {
        cout << "Pesan: Stack penuh! Tidak bisa tambah transaksi. " << endl;
    } else {
        s.top++;
        s.data[s.top] = noTrans;
        cout << "Pesan: Berhasil menambahkan: " << noTrans << endl;
    }
}

void pop(StackTransaksi &s) {
    if (isEmpty(s)) {
        cout << "Pesan: Stack kosong! Tidak ada riwayat untuk dihapus." << endl;
    } else {
        cout << "Pesan: Menghapus transaksi: " << s.data[s.top] << endl;
        s.top--;
    }
}

void top(StackTransaksi s) {
    if (!isEmpty(s)) {
        cout << "Transaksi teratas saat ini: " << s.data[s.top] << endl;
    } else {
        cout << "Pesan: Stack kosong." << endl;
    }
}

void tampilkan(StackTransaksi s) {
    cout << "Isi stack saat ini: ";
    if (isEmpty(s)) {
        cout << "[Kosong]";
    } else {
        for (int i = s.top; i >= 0; i--) {
            cout << s.data[i] << " ";
        }
    }
    cout << endl;
}

int main() {
    StackTransaksi riwayat;
    init(riwayat);

    push(riwayat, "T001");
    push(riwayat, "T002");
    push(riwayat, "T003");
    push(riwayat, "T004");

    top(riwayat);
    
    cout << "\n--- Menghapus 2 transaksi ---\n";
    pop(riwayat);
    pop(riwayat);

    tampilkan(riwayat);

    return 0;
}
