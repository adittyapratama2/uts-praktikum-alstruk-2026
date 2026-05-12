#include <iostream>
using namespace std;

const int MAX = 5;

struct Stack {
    string data[MAX];
    int top;
};

// Mengecek stack kosong
bool isEmpty(Stack &s) {
    return s.top == -1;
}

// Mengecek stack penuh
bool isFull(Stack &s) {
    return s.top == MAX - 1;
}

// Menambahkan data buku ke stack
void push(Stack &s, string judul) {
    if (isFull(s)) {
        cout << "Stack penuh! buku\n";
    } else {
        s.top++;
        s.data[s.top] = judul;
        cout << judul << " berhasil ditambahkan ke stack\n";
    }
}

// Menghapus data dari stack
void pop(Stack &s) {
    if (isEmpty(s)) {
        cout << "Stack kosong!Tidak ada buku yang dihapus.\n";
    } else {
        cout << "Buku \"" << s.data[s.top] 
             << "\"  dihapus dari stack\n";
        s.top--;
    }
}

// Melihat data paling atas
void peek(Stack &s) {
    if (isEmpty(s)) {
        cout << "Stack kosong!tidak ada buku dibagian atas.\n";
    } else {
        cout << "Buku paling atas: " 
             << s.data[s.top] << endl;
    }
}

// Menampilkan isi stack
void tampil(Stack &s) {
    if (isEmpty(s)) {
        cout << "Stack kosong\n";
    } else {
        cout << "\nIsi Stack Buku:\n";
        
        for (int i = s.top; i >= 0; i--) {
            cout << "- " << s.data[i] << endl;
        }
    }
}

int main() {
    Stack s;
    s.top = -1;

    // Push data
    push(s, "Fisika Dasar");
    push(s, "Kalkulus");
    push(s, "Algoritma");
    push(s, "Jaringan");

    // Tampilkan aktivitas terakhir
    cout << endl;
    peek(s);

    // Pop 2 data
    cout << endl;
    pop(s);
    pop(s);

    // Tampilkan isi stack
    tampil(s);

    return 0;
}
