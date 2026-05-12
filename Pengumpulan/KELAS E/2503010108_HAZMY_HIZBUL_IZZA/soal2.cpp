#include <iostream>
#include <string>
using namespace std;

const int MAX = 5;

class StackBuku {
private:
    string stack[MAX];
    int top;

public:
    StackBuku() {
        top = -1;
    }

    bool isEmpty() {
        return top == -1;
    }

    bool isFull() {
        return top == MAX - 1;
    }

    void push(string judul) {
        if (isFull()) {
            cout << "Stack penuh! Buku \"" << judul << "\" tidak bisa ditambahkan.\n";
        } else {
            top++;
            stack[top] = judul;
            cout << "Buku \"" << judul << "\" berhasil ditambahkan ke stack.\n";
        }
    }

    void pop() {
        if (isEmpty()) {
            cout << "Stack kosong! Tidak ada buku yang bisa dihapus.\n";
        } else {
            cout << "Buku \"" << stack[top] << "\" dihapus dari stack.\n";
            top--;
        }
    }

    void peek() {
        if (isEmpty()) {
            cout << "Stack kosong!\n";
        } else {
            cout << "Buku paling atas: " << stack[top] << endl;
        }
    }

    void tampilkan() {
        if (isEmpty()) {
            cout << "Isi stack kosong.\n";
        } else {
            cout << "\nIsi Stack Buku:\n";
            for (int i = top; i >= 0; i--) {
                cout << "- " << stack[i] << endl;
            }
        }
    }
};

int main() {
    StackBuku s;

    // Push 4 buku
    s.push("Fisika Dasar");
    s.push("Kalkulus");
    s.push("Algoritma");
    s.push("Jaringan");

    // Tampilkan buku paling atas
    cout << endl;
    s.peek();

    // Pop 2 buku
    cout << endl;
    s.pop();
    s.pop();

    // Tampilkan isi stack
    cout << endl;
    s.tampilkan();

    return 0;
}




#include <iostream>
#include <string>
using namespace std;

const int MAX = 5;

class QueueAnggota {
private:
    string queue[MAX];
    int front, rear;

public:
    QueueAnggota() {
        front = 0;
        rear = -1;
    }

    bool isEmpty() {
        return rear < front;
    }

    bool isFull() {
        return rear == MAX - 1;
    }

    void enqueue(string nama) {
        if (isFull()) {
            cout << "Queue penuh! Anggota \"" << nama << "\" tidak bisa masuk antrian.\n";
        } else {
            rear++;
            queue[rear] = nama;
            cout << "Anggota \"" << nama << "\" masuk ke antrian.\n";
        }
    }

    void dequeue() {
        if (isEmpty()) {
            cout << "Queue kosong! Tidak ada anggota yang bisa diproses.\n";
        } else {
            cout << "Anggota \"" << queue[front] << "\" keluar dari antrian.\n";
            front++;
        }
    }

    void peek() {
        if (isEmpty()) {
            cout << "Queue kosong!\n";
        } else {
            cout << "Anggota terdepan: " << queue[front] << endl;
        }
    }

    void tampilkan() {
        if (isEmpty()) {
            cout << "Isi queue kosong.\n";
        } else {
            cout << "\nIsi Queue:\n";
            for (int i = front; i <= rear; i++) {
                cout << "- " << queue[i] << endl;
            }
        }
    }
};

int main() {
    QueueAnggota q;

    // Enqueue 3 anggota
    q.enqueue("Hazmy");
    q.tampilkan();

    q.enqueue("Zofan");
    q.tampilkan();

    q.enqueue("Adit");
    q.tampilkan();

    // Tampilkan anggota terdepan
    cout << endl;
    q.peek();

    // Dequeue 1 anggota
    cout << endl;
    q.dequeue();
    q.tampilkan();

    // Enqueue anggota baru
    cout << endl;
    q.enqueue("Bayu");
    q.tampilkan();

    return 0;
}