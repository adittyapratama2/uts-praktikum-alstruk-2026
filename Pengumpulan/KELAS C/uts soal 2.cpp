#include <iostream>
#include <string>

using namespace std;

#define MAX 5 // Kapasitas maksimal stack


string data[MAX];
int top = -1; 

// Cek apakah stack kosong
bool isEmpty(Stack &s) {
    return s.top == -1;
}

// Cek apakah stack penuh
bool isFull(Stack &s) {
    return s.top == MAX - 1;
}

// Menambah data ke stack
void push(Stack &s, int noTransaksi) {
    if (isFull(s)) {
        cout << "Gagal! Stack penuh. Tidak bisa menambah transaksi T00" << noTransaksi << endl;
    } else {
        s.top++;
        s.data[s.top] = noTransaksi;
        cout << "Push Berhasil: T00" << noTransaksi << " ditambahkan." << endl;
    }
}

// Menghapus data teratas
void pop(Stack &s) {
    if (isEmpty(s)) {
        cout << "Gagal! Stack kosong, tidak ada yang bisa di-pop." << endl;
    } else {
        cout << "Pop Berhasil: T00" << s.data[s.top] << " dikeluarkan." << endl;
        s.top--;
    }
}

// Melihat data teratas tanpa menghapus
void peek(Stack &s) {
    if (isEmpty(s)) {
        cout << "Stack kosong." << endl;
    } else {
        cout << "Transaksi Teratas (Peek): T00" << s.data[s.top] << endl;
    }
}

// Menampilkan seluruh isi stack
void display(Stack &s) {
    if (isEmpty(s)) {
        cout << "Isi Stack: [Kosong]" << endl;
    } else {
        cout << "Isi Stack saat ini: ";
        for (int i = 0; i <= s.top; i++) {
            cout << "T00" << s.data[i] << " ";
        }
        cout << endl;
    }
}

int main() {
    Stack riwayat;

    cout << "=== Simulasi Stack Transaksi ===\n" << endl;

    // 1. Push 4 Transaksi
    push(riwayat, 1);
    push(riwayat, 2);
    push(riwayat, 3);
    push(riwayat, 4);
    display(riwayat);
    cout << endl;

    // 2. Peek Transaksi Teratas
    peek(riwayat);
    cout << endl;

    // 3. Pop 2 Transaksi
    pop(riwayat);
    pop(riwayat);
    cout << endl;

    // 4. Tampilkan isi stack akhir
    display(riwayat);

    return 0;
}

