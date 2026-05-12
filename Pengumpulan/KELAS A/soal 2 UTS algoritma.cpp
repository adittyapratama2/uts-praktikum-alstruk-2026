#include <iostream>
using namespace std;

const int MAX = 5;

// 2A (stack)
string stackBuku[MAX];
int top = -1;

bool stackKosong() {
    return top == -1;
}

bool stackPenuh() {
    return top == MAX - 1;
}

void push(string judul) {
    if (stackPenuh()) {
        cout << "Stack penuh!\n";
    } else {
        top++;
        stackBuku[top] = judul;
        cout << "Buku berhasil ditambahkan.\n";
    }
}

void pop() {
    if (stackKosong()) {
        cout << "Stack kosong!\n";
    } else {
        cout << "Buku \"" << stackBuku[top] << "\" dihapus.\n";
        top--;
    }
}

void peekStack() {
    if (stackKosong()) {
        cout << "Stack kosong.\n";
    } else {
        cout << "Buku paling atas: " << stackBuku[top] << endl;
    }
}

void tampilStack() {
    if (stackKosong()) {
        cout << "Stack kosong.\n";
    } else {
        cout << "\nIsi Stack:\n";
        for (int i = top; i >= 0; i--) {
            cout << i + 1 << ". " << stackBuku[i] << endl;
        }
    }
}

// 2B (queue)
string queueAnggota[MAX];
int front = -1;
int rear = -1;

bool queueKosong() {
    return front == -1;
}

bool queuePenuh() {
    return rear == MAX - 1;
}

void enqueue(string nama) {
    if (queuePenuh()) {
        cout << "Queue penuh!\n";
    } else {
        if (queueKosong()) {
            front = 0;
        }

        rear++;
        queueAnggota[rear] = nama;

        cout << "Anggota berhasil masuk antrian.\n";
    }
}

void dequeue() {
    if (queueKosong()) {
        cout << "Queue kosong!\n";
    } else {
        cout << queueAnggota[front] << " keluar dari antrian.\n";

        if (front == rear) {
            front = rear = -1;
        } else {
            front++;
        }
    }
}

void peekQueue() {
    if (queueKosong()) {
        cout << "Queue kosong.\n";
    } else {
        cout << "Antrian terdepan: " << queueAnggota[front] << endl;
    }
}

void tampilQueue() {
    if (queueKosong()) {
        cout << "Queue kosong.\n";
    } else {
        cout << "\nIsi Queue:\n";
        for (int i = front; i <= rear; i++) {
            cout << i - front + 1 << ". " << queueAnggota[i] << endl;
        }
    }
}

int main() {

    int pilihan;
    string data;

    do {
        cout << "\n===== SISTEM PERPUSTAKAAN =====\n";
        cout << "1. Push Buku (Stack)\n";
        cout << "2. Pop Buku (Stack)\n";
        cout << "3. Peek Stack\n";
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
            getline(cin, data);
            push(data);
            break;

        case 2:
            pop();
            break;

        case 3:
            peekStack();
            break;

        case 4:
            tampilStack();
            break;

        case 5:
            cout << "Masukkan nama anggota: ";
            getline(cin, data);
            enqueue(data);
            break;

        case 6:
            dequeue();
            break;

        case 7:
            peekQueue();
            break;

        case 8:
            tampilQueue();
            break;

        case 9:
            cout << "Program selesai.\n";
            break;

        default:
            cout << "Pilihan tidak tersedia.\n";
        }

    } while (pilihan != 9);

    return 0;
}
