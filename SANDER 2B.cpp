#include<iostream>
#include<string>
using namespace std;

string queue[5];
int front = 0, rear = -1, jumlah = 0;

bool isEmpty() { return jumlah == 0; }
bool isFull()  { return jumlah == 5; }

void enqueue(string nama) {
    if(isFull()){
        cout << "Queue penuh! \"" << nama << "\" tidak bisa masuk antrian.\n";
        return;
    }
    rear = (rear + 1) % 5;
    queue[rear] = nama;
    jumlah++;
    cout << "Enqueue: \"" << nama << "\" berhasil masuk antrian.\n";
}

void dequeue() {
    if(isEmpty()){
        cout << "Queue kosong! Tidak ada anggota yang bisa dihapus.\n";
        return;
    }
    cout << "Dequeue: \"" << queue[front] << "\" berhasil keluar antrian.\n";
    front = (front + 1) % 5;
    jumlah--;
}

void peek() {
    if(isEmpty()){
        cout << "Queue kosong!\n";
        return;
    }
    cout << "Anggota terdepan: \"" << queue[front] << "\"\n";
}

void tampilQueue() {
    if(isEmpty()){
        cout << "Queue kosong.\n";
        return;
    }
    cout << "Isi Queue (depan ke belakang):\n";
    for(int i = 0; i < jumlah; i++)
        cout << "  [" << i+1 << "] " << queue[(front + i) % 5] << "\n";
}


int main(){

    cout << "========== SIMULASI QUEUE PERPUSTAKAAN ==========" << endl;

    cout << "\n-- Enqueue 3 Anggota --\n";
    enqueue("Reza");
    enqueue("Mia");
    enqueue("Hendra");
    tampilQueue();

    cout << "\n-- Peek --\n";
    peek();

    cout << "\n-- Dequeue 1 Anggota --\n";
    dequeue();
    tampilQueue();

    cout << "\n-- Enqueue Anggota Baru --\n";
    enqueue("Putri");
    tampilQueue();

    cout << "==================================================" << endl;

    return 0;
}
