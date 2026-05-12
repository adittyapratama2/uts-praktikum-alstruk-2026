#include <iostream>
#include <string>

using namespace std;

struct StackBuku {
    int top;
    string tumpukan[5];

    // Inisialisasi top agar tidak warning di Dev-C++
    void init() { top = -1; }

    bool isFull() { return top == 4; }
    bool isEmpty() { return top == -1; }

    void push(string judul) {
        if (isFull()) {
            cout << "Pesan: Stack penuh! Tidak bisa menambah: " << judul << endl;
        } else {
            top++;
            tumpukan[top] = judul;
            cout << "Pesan: Berhasil menambah '" << judul << "'" << endl;
        }
    }

    void pop() {
        if (isEmpty()) {
            cout << "Pesan: Stack kosong!" << endl;
        } else {
            cout << "Pesan: Berhasil mengambil '" << tumpukan[top] << "'" << endl;
            top--;
        }
    }

    void peek() {
        if (isEmpty()) {
            cout << "Pesan: Tidak ada buku di tumpukan." << endl;
        } else {
            cout << "Buku paling atas (Peek): " << tumpukan[top] << endl;
        }
    }

    void tampilkan() {
        cout << "Isi Tumpukan saat ini: ";
        if (isEmpty()) cout << "[Kosong]";
        for (int i = 0; i <= top; i++) {
            cout << "[" << tumpukan[i] << "] ";
        }
        cout << "\n-----------------------------------" << endl;
    }
};

int main() {
    StackBuku s;
    s.init();
    string judulInput;

    cout << "=== Simulasi Input Stack Buku ===" << endl;

    // Skenario: Push 4 buku (Input Manual)
    for (int i = 1; i <= 4; i++) {
        cout << "Masukkan judul buku ke-" << i << ": ";
        getline(cin, judulInput); // Menggunakan getline agar bisa pakai spasi
        s.push(judulInput);
    }
    
    s.tampilkan();
    s.peek();

    // Skenario: Pop 2 buku
    cout << "\nMelakukan operasi POP 2 kali..." << endl;
    s.pop();
    s.pop();

    cout << "\nSetelah operasi pop:" << endl;
    s.tampilkan();

    return 0;
}
