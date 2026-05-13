#include <iostream>
#include <string>
using namespace std;

const int MAX = 5;
string queueArr[MAX];
int front = -1, rear = -1;


bool isEmpty() {
    return front == -1;
}


bool isFull() {
    return rear == MAX - 1;
}


void enqueue(string nama) {
    if (isFull()) {
        cout << "Queue penuh! Tidak bisa tambah anggota.\n";
        return;
    }

    if (isEmpty()) {
        front = rear = 0;
    } else {
        rear++;
    }

    queueArr[rear] = nama;
    cout << nama << " berhasil masuk antrian.\n";
}


void dequeue() {
    if (isEmpty()) {
        cout << "Queue kosong!\n";
        return;
    }

    cout << queueArr[front] << " keluar dari antrian.\n";

    if (front == rear) {
        front = rear = -1;
    } else {
        front++;
    }
}


void peek() {
    if (isEmpty()) {
        cout << "Queue kosong!\n";
    } else {
        cout << "Anggota terdepan: " << queueArr[front] << endl;
    }
}


void display() {
    if (isEmpty()) {
        cout << "Queue kosong!\n";
        return;
    }

    cout << "Isi Queue: ";
    for (int i = front; i <= rear; i++) {
        cout << queueArr[i];
        if (i < rear) cout << " <- ";
    }
    cout << endl;
}

int main() {
    int pilihan;
    string nama;

    do {
        cout << "\n--- MENU QUEUE PERPUSTAKAAN ---\n";
        cout << "1. Enqueue Anggota\n";
        cout << "2. Dequeue Anggota\n";
        cout << "3. Peek (Lihat Depan)\n";
        cout << "4. Tampilkan Isi Queue\n";
        cout << "5. Keluar\n";
        cout << "Pilihan: ";
        cin >> pilihan;
        cin.ignore();

        switch (pilihan) {
            case 1:
                cout << "Masukkan nama anggota: ";
                getline(cin, nama);
                enqueue(nama);
                break;

            case 2:
                dequeue();
                break;

            case 3:
                peek();
                break;

            case 4:
                display();
                break;

            case 5:
                cout << "Program selesai.\n";
                break;

            default:
                cout << "Pilihan tidak valid!\n";
        }

    } while (pilihan != 5);


    return 0;
}
