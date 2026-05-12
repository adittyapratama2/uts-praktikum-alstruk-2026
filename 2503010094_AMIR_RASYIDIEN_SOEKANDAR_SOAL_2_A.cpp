#include <iostream>
#include <string>

using namespace std;

struct StackBuku {
    string buku[5];
    int top = -1;

    bool isFull() { return top == 4; }
    bool isEmpty() { return top == -1; }

    void push(string judul) {
        if (isFull()) {
            cout << ">>> ERROR: Stack sudah penuh (MAX 5)!" << endl;
        } else {
            top++;
            buku[top] = judul;
            cout << ">>> Berhasil menambah buku: " << judul << endl;
        }
    }

    void pop() {
        if (isEmpty()) {
            cout << ">>> ERROR: Stack kosong, tidak ada buku untuk diambil!" << endl;
        } else {
            cout << ">>> Buku '" << buku[top] << "' telah dikeluarkan." << endl;
            top--;
        }
    }

    void peek() {
        if (isEmpty()) cout << ">>> Stack masih kosong." << endl;
        else cout << ">>> Buku teratas saat ini: " << buku[top] << endl;
    }

    void tampilkan() {
        if (isEmpty()) {
            cout << ">>> [KOSONG]" << endl;
        } else {
            cout << "=== ISI TUMPUKAN (Atas ke Bawah) ===" << endl;
            for (int i = top; i >= 0; i--) {
                cout << " [" << i << "] " << buku[i] << endl;
            }
        }
    }
};

int main() {
    StackBuku s;
    int pilihan;
    string inputJudul;

    do {
        cout << "\n--- MENU STACK BUKU ---" << endl;
        cout << "1. Push Buku" << endl;
        cout << "2. Pop Buku" << endl;
        cout << "3. Peek (Intip Atas)" << endl;
        cout << "4. Tampilkan Isi" << endl;
        cout << "5. Keluar" << endl;
        cout << "Pilihan: "; cin >> pilihan;

        switch (pilihan) {
            case 1:
                cout << "Masukkan Judul Buku: ";
                cin.ignore();
                getline(cin, inputJudul);
                s.push(inputJudul);
                break;
            case 2:
                s.pop();
                break;
            case 3:
                s.peek();
                break;
            case 4:
                s.tampilkan();
                break;
        }
    } while (pilihan != 5);

    return 0;
}