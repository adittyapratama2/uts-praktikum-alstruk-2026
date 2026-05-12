#include <iostream>
#include <string>

using namespace std;

struct QueueAntrian {
    string nama[5];
    int front = -1;
    int rear = -1;

    bool isFull() { return rear == 4; }
    bool isEmpty() { return front == -1 || front > rear; }

    void enqueue(string mhs) {
        if (isFull()) {
            cout << ">>> PERINGATAN: Antrian sudah penuh!" << endl;
        } else {
            if (front == -1) front = 0;
            rear++;
            nama[rear] = mhs;
            cout << ">>> " << mhs << " masuk ke antrian." << endl;
        }
    }

    void dequeue() {
        if (isEmpty()) {
            cout << ">>> PERINGATAN: Antrian kosong!" << endl;
        } else {
            cout << ">>> " << nama[front] << " selesai dilayani." << endl;
            front++;
        }
    }

    void peek() {
        if (isEmpty()) cout << ">>> Belum ada antrian." << endl;
        else cout << ">>> Giliran berikutnya: " << nama[front] << endl;
    }

    void tampilkan() {
        if (isEmpty()) {
            cout << ">>> Antrian Kosong." << endl;
        } else {
            cout << "STATUS ANTRIAN: ";
            for (int i = front; i <= rear; i++) {
                cout << "[" << nama[i] << "] ";
            }
            cout << endl;
        }
    }
};

int main() {
    QueueAntrian q;
    int pilihan;
    string inputNama;

    do {
        cout << "\n=== MENU ANTRIAN PERPUSTAKAAN ===" << endl;
        cout << "1. Enqueue (Masuk)" << endl;
        cout << "2. Dequeue (Keluar/Layani)" << endl;
        cout << "3. Peek (Cek Depan)" << endl;
        cout << "4. Tampilkan Antrian" << endl;
        cout << "5. Keluar" << endl;
        cout << "Pilihan: "; cin >> pilihan;

        switch (pilihan) {
            case 1:
                cout << "Nama Anggota: ";
                cin.ignore();
                getline(cin, inputNama);
                q.enqueue(inputNama);
                break;
            case 2:
                q.dequeue();
                break;
            case 3:
                q.peek();
                break;
            case 4:
                q.tampilkan();
                break;
        }
    } while (pilihan != 5);

    return 0;
}