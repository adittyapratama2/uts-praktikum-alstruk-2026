#include <iostream>
#include <string>
using namespace std;

#define MAX 5

struct AntrianKasir {
    int depan;
    int belakang;
    string pelanggan[MAX];
};

void init(AntrianKasir &q) {
    q.depan = -1;
    q.belakang = -1;
}

bool isFull(AntrianKasir q) {
    return q.belakang == MAX - 1;
}

bool isEmpty(AntrianKasir q) {
    return q.depan == -1 || q.depan > q.belakang;
}

void enqueue(AntrianKasir &q, string nama) {
    if (isFull(q)) {
        cout << "antrian penuh! tidak bisa tambah data.\n";
    } else {
        if (isEmpty(q)) {
            q.depan = 0;
        }
        q.belakang++;
        q.pelanggan[q.belakang] = nama;
        cout << "berhasil menambah: " << nama << endl;
    }
}

void dequeue(AntrianKasir &q) {
    if (isEmpty(q)) {
        cout << "antrian kosong! tidak ada yang bisa di hapus.\n";
    } else {
        cout << "memanggil: " << q.pelanggan[q.depan] << endl;
        q.depan++;
    }
}

void intip(AntrianKasir q) {
    if (!isEmpty(q)) {
        cout << "antrian saat ini: " << q.pelanggan[q.depan] << endl;
    }
}

void tampilkan(AntrianKasir q) {
    cout << "Isi antrian: ";
    if (isEmpty(q)) {
        cout << "kosong";
    } else {
        for (int i = q.depan; i <= q.belakang; i++) {
            cout << "(" << q.pelanggan[i] << ") ";
        }
    }
    cout << "\n--------------------------" << endl;
}

int main() {
    AntrianKasir kasir;
    init(kasir);

    cout << "=== ANTRIAN KASIR ===\n" << endl;

    
    enqueue(kasir, "Budi");
    enqueue(kasir, "Sari");
    enqueue(kasir, "Eko");
    tampilkan(kasir);

    intip(kasir);

    cout << "\n--- Klik tombol panggil ---\n";
    dequeue(kasir);
    tampilkan(kasir);

    enqueue(kasir, "Dewi");
    tampilkan(kasir);

    return 0;
}
