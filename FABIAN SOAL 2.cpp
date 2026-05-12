#include <iostream>
using namespace std;

// ================= SOAL A =================
class Stack {
private:
    string buku[5];
    int top;

public:
    Stack() {
        top = -1;
    }

    bool isEmpty() {
        return top == -1;
    }

    bool isFull() {
        return top == 4;
    }

    void push(string judul) {
        if (isFull()) {
            cout << "Stack penuh! Buku tidak bisa ditambahkan.\n";
        } else {
            top++;
            buku[top] = judul;
            cout << "Buku \"" << judul << "\" berhasil ditambahkan.\n";
        }
    }

    void pop() {
        if (isEmpty()) {
            cout << "Stack kosong!\n";
        } else {
            cout << "Buku \"" << buku[top] << "\" dihapus dari stack.\n";
            top--;
        }
    }

    void peek() {
        if (isEmpty()) {
            cout << "Stack kosong.\n";
        } else {
            cout << "Buku paling atas: " << buku[top] << endl;
        }
    }

    void tampilkan() {
        if (isEmpty()) {
            cout << "Stack kosong.\n";
        } else {
            cout << "\nIsi Stack Buku:\n";
            for (int i = top; i >= 0; i--) {
                cout << "- " << buku[i] << endl;
            }
        }
    }
};

// ================= SOAL B =================
class Queue {
private:
    string anggota[5];
    int front, rear;

public:
    Queue() {
        front = 0;
        rear = -1;
    }

    bool isEmpty() {
        return rear < front;
    }

    bool isFull() {
        return rear == 4;
    }

    void enqueue(string nama) {
        if (isFull()) {
            cout << "Queue penuh! Anggota tidak bisa ditambahkan.\n";
        } else {
            rear++;
            anggota[rear] = nama;
            cout << nama << " masuk ke antrean.\n";
        }
    }

    void dequeue() {
        if (isEmpty()) {
            cout << "Queue kosong!\n";
        } else {
            cout << anggota[front] << " keluar dari antrean.\n";
            front++;
        }
    }

    void peek() {
        if (isEmpty()) {
            cout << "Queue kosong.\n";
        } else {
            cout << "Antrean terdepan: " << anggota[front] << endl;
        }
    }

    void tampilkan() {
        if (isEmpty()) {
            cout << "Queue kosong.\n";
        } else {
            cout << "\nIsi Queue Antrean:\n";
            for (int i = front; i <= rear; i++) {
                cout << "- " << anggota[i] << endl;
            }
        }
    }
};

// ================= MAIN =================
int main() {

    Stack stackBuku;
    Queue queueAnggota;

    int pilihan;
    string input;

    do {
        cout << "\n=============================\n";
        cout << " SISTEM PERPUSTAKAAN\n";
        cout << "=============================\n";
        cout << "1. Push Buku (Stack)\n";
        cout << "2. Pop Buku (Stack)\n";
        cout << "3. Peek Buku (Stack)\n";
        cout << "4. Tampilkan Stack\n";
        cout << "5. Enqueue Anggota (Queue)\n";
        cout << "6. Dequeue Anggota (Queue)\n";
        cout << "7. Peek Queue\n";
        cout << "8. Tampilkan Queue\n";
        cout << "9. Keluar\n";
        cout << "Pilihan: ";
        cin >> pilihan;

        cin.ignore();

        switch (pilihan) {

        case 1:
            cout << "Masukkan judul buku: ";
            getline(cin, input);
            stackBuku.push(input);
            break;

        case 2:
            stackBuku.pop();
            break;

        case 3:
            stackBuku.peek();
            break;

        case 4:
            stackBuku.tampilkan();
            break;

        case 5:
            cout << "Masukkan nama anggota: ";
            getline(cin, input);
            queueAnggota.enqueue(input);
            break;

        case 6:
            queueAnggota.dequeue();
            break;

        case 7:
            queueAnggota.peek();
            break;

        case 8:
            queueAnggota.tampilkan();
            break;

        case 9:
            cout << "Program selesai.\n";
            break;

        default:
            cout << "Pilihan tidak valid!\n";
        }

    } while (pilihan != 9);

    return 0;
}
