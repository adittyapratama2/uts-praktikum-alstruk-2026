#include <iostream>
#include <string>

using namespace std;

// A. STACK Riwayat Transaksi
struct StackRiwayat {
    int top = -1;
    string data[5];
    int maksimal = 5;

    bool isFull() { return top == maksimal - 1; }
    bool isEmpty() { return top == -1; }

    void push(string no) {
        if (isFull()) cout << "!! Stack Penuh\n";
        else { data[++top] = no; cout << ">> Berhasil Push: " << no << endl; }
    }

    void pop() {
        if (isEmpty()) cout << "!! Stack Kosong\n";
        else { cout << ">> Berhasil Pop: " << data[top] << endl; top--; }
    }

    void peek() {
        if (isEmpty()) cout << "!! Stack Kosong\n";
        else cout << ">> Transaksi Teratas: " << data[top] << endl;
    }

    void tampilkan() {
        cout << "Isi Stack : ";
        if (isEmpty()) cout << "[Kosong]";
        else { for (int i = top; i >= 0; i--) cout << data[i] << " "; }
        cout << endl;
    }
};

// B. QUEUE Antrian Pelanggan
struct QueueAntrian {
    int front = -1, rear = -1;
    string data[5];
    int maksimal = 5;

    bool isFull() { return rear == maksimal - 1; }
    bool isEmpty() { return front == -1; }

    void enqueue(string nama) {
        if (isFull()) cout << "!! Queue Penuh\n";
        else {
            if (isEmpty()) front = 0;
            data[++rear] = nama;
            cout << ">> " << nama << " masuk antrian.\n";
        }
    }

    void dequeue() {
        if (isEmpty()) cout << "!! Queue Kosong\n";
        else {
            cout << ">> Melayani: " << data[front] << endl;
            if (front == rear) front = rear = -1;
            else front++;
        }
    }

    void peek() {
        if (isEmpty()) cout << "!! Queue Kosong\n";
        else cout << ">> Antrian Terdepan: " << data[front] << endl;
    }

    void tampilkan() {
        cout << "Daftar Antrian: ";
        if (isEmpty()) cout << "[Kosong]";
        else { for (int i = front; i <= rear; i++) cout << "(" << data[i] << ") "; }
        cout << endl;
    }
};

int main() {
    StackRiwayat s;
    QueueAntrian q;
    int pilihan, menu;
    string input;

    do {
        cout << "\n=== SISTEM KASIR SUPERMARKET ===\n";
        cout << "1. Menu Stack \n";
        cout << "2. Menu Queue \n";
        cout << "3. Keluar\n";
        cout << "Pilih menu: "; cin >> menu;

        if (menu == 1) {
            do {
                cout << "\n--- MENU STACK ---\n";
                s.tampilkan();
                cout << "1. Push (Tambah Transaksi)\n2. Pop (Hapus Terakhir)\n3. Peek (Lihat Atas)\n4. Kembali\n";
                cout << "Pilihan: "; cin >> pilihan;
                if (pilihan == 1) { cout << "Input No Transaksi: "; cin >> input; s.push(input); }
                else if (pilihan == 2) s.pop();
                else if (pilihan == 3) s.peek();
            } while (pilihan != 4);
        } 
        else if (menu == 2) {
            do {
                cout << "\n--- MENU QUEUE ---\n";
                q.tampilkan();
                cout << "1. Enqueue (Tambah Pelanggan)\n2. Dequeue (Layani Pelanggan)\n3. Peek (Lihat Depan)\n4. Kembali\n";
                cout << "Pilihan: "; cin >> pilihan;
                if (pilihan == 1) { cout << "Input Nama Pelanggan: "; cin >> input; q.enqueue(input); }
                else if (pilihan == 2) q.dequeue();
                else if (pilihan == 3) q.peek();
            } while (pilihan != 4);
        }
    } while (menu != 3);

    cout << "Program selesai. Terima kasih!\n";
    return 0;
}
