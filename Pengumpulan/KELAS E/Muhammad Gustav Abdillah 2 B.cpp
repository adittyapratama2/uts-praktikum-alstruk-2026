#include <iostream>
using namespace std;

const int batas = 5;

string dataQueue[batas];
int front = 0;
int rear = -1;

// Tambah antrian
void enqueue(string nama) {

    if (rear == batas - 1) {

        cout << "Queue sudah penuh!\n";
    }
    else {

        rear++;
        dataQueue[rear] = nama;

        cout << nama << " berhasil masuk antrian.\n";
    }
}

// Hapus antrian
void dequeue() {

    if (rear < front) {

        cout << "Queue kosong!\n";
    }
    else {

        cout << dataQueue[front] << " keluar dari antrian.\n";

        front++;
    }
}

// Lihat antrian depan
void peek() {

    if (rear < front) {

        cout << "Tidak ada antrian.\n";
    }
    else {

        cout << "Antrian paling depan : " << dataQueue[front] << endl;
    }
}

// Tampilkan semua antrian
void tampilQueue() {

    if (rear < front) {

        cout << "Queue kosong.\n";
    }
    else {

        cout << "\nData Antrian:\n";

        for (int i = front; i <= rear; i++) {

            cout << i + 1 << ". " << dataQueue[i] << endl;
        }
    }
}

int main() {

    enqueue("Budi");
    enqueue("Salsa");
    enqueue("Raka");

    cout << endl;

    peek();

    cout << endl;

    dequeue();

    cout << endl;

    enqueue("Nina");

    tampilQueue();

    return 0;
}
