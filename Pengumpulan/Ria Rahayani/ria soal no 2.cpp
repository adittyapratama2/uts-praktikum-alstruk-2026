#include <iostream>
#include <string>

using namespace std;

const int MAX = 5;

// ==========================================
// BAGIAN A: STACK (Tumpukan Buku)
// ==========================================
struct Stack {
    string buku[MAX];
    int top = -1;

    bool isFull() { return top == MAX - 1; }
    bool isEmpty() { return top == -1; }

    void push() {
        if (isFull()) {
            cout << "!! Stack Penuh (Maks 5) !!" << endl;
        } else {
            string judul;
            cout << "Masukkan Judul Buku: ";
            getline(cin >> ws, judul); 
            buku[++top] = judul;
            cout << ">> '" << judul << "' berhasil ditambah ke tumpukan." << endl;
        }
    }

    void pop() {
        if (isEmpty()) {
            cout << "!! Stack Kosong !!" << endl;
        } else {
            cout << ">> '" << buku[top--] << "' telah diambil." << endl;
        }
    }

    void peek() {
        if (isEmpty()) cout << "!! Stack Kosong !!" << endl;
        else cout << ">> Buku teratas: " << buku[top] << endl;
    }

    void display() {
        cout << "\n--- ISI STACK SAAT INI ---" << endl;
        if (isEmpty()) cout << "[ Kosong ]" << endl;
        for (int i = top; i >= 0; i--) cout << "| " << buku[i] << " |" << endl;
        cout << "--------------------------" << endl;
    }
};

// ==========================================
// BAGIAN B: QUEUE (Antrian Member)
// ==========================================
struct Queue {
    string nama[MAX];
    int front = -1, rear = -1;

    bool isFull() { return rear == MAX - 1; }
    bool isEmpty() { return front == -1 || front > rear; }

    void enqueue() {
        if (isFull()) {
            cout << "!! Antrian Penuh (Maks 5) !!" << endl;
        } else {
            string n;
            cout << "Masukkan Nama Member: ";
            getline(cin >> ws, n);
            if (front == -1) front = 0;
            nama[++rear] = n;
            cout << ">> '" << n << "' masuk ke antrian." << endl;
        }
    }

    void dequeue() {
        if (isEmpty()) {
            cout << "!! Antrian Kosong !!" << endl;
        } else {
            cout << ">> '" << nama[front++] << "' selesai dilayani." << endl;
        }
    }

    void peek() {
        if (isEmpty()) cout << "!! Antrian Kosong !!" << endl;
        else cout << ">> Member terdepan: " << nama[front] << endl;
    }

    void display() {
        cout << "\n--- ISI QUEUE SAAT INI ---" << endl;
        if (isEmpty()) cout << "[ Kosong ]" << endl;
        else {
            for (int i = front; i <= rear; i++) cout << "(" << nama[i] << ") ";
            cout << endl;
        }
        cout << "--------------------------" << endl;
    }
};

int main() {
    Stack s;
    Queue q;
    int pilihan, menu;

    do {
        cout << "\n======= SISTEM PERPUSTAKAAN =======" << endl;
        cout << "1. Kelola Stack (Buku Kembali)" << endl;
        cout << "2. Kelola Queue (Antrian Pinjam)" << endl;
        cout << "3. Keluar" << endl;
        cout << "Pilih Menu: "; cin >> pilihan;

        if (pilihan == 1) { // Menu Stack
            do {
                s.display();
                cout << "1. Push (Input Buku)\n2. Pop (Ambil Buku)\n3. Peek\n4. Kembali\nPilihan: ";
                cin >> menu;
                if (menu == 1) s.push();
                else if (menu == 2) s.pop();
                else if (menu == 3) s.peek();
            } while (menu != 4);

        } else if (pilihan == 2) { // Menu Queue
            do {
                q.display();
                cout << "1. Enqueue (Input Member)\n2. Dequeue (Selesai)\n3. Peek\n4. Kembali\nPilihan: ";
                cin >> menu;
                if (menu == 1) q.enqueue();
                else if (menu == 2) q.dequeue();
                else if (menu == 3) q.peek();
            } while (menu != 4);
        }

    } while (pilihan != 3);

    cout << "Program selesai. Terima kasih!" << endl;
    return 0;
}
