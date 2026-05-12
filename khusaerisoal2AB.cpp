#include<iostream>
#include<string>
using namespace std;

// ========== STACK (Tumpukan Buku) ==========
string stackArr[5];
int top = -1;

bool stackEmpty() { return top == -1; }
bool stackFull()  { return top == 4; }

void push(string judul) {
    if(stackFull()){
        cout << "Stack penuh! Buku \"" << judul << "\" tidak bisa ditambah.\n";
        return;
    }
    stackArr[++top] = judul;
    cout << "Push: \"" << judul << "\" berhasil ditambahkan.\n";
}

void pop() {
    if(stackEmpty()){
        cout << "Stack kosong! Tidak ada buku yang bisa dihapus.\n";
        return;
    }
    cout << "Pop: \"" << stackArr[top--] << "\" berhasil dihapus.\n";
}

void peekStack() {
    if(stackEmpty()){ cout << "Stack kosong!\n"; return; }
    cout << "Buku paling atas: \"" << stackArr[top] << "\"\n";
}

void tampilStack() {
    if(stackEmpty()){ cout << "Stack kosong.\n"; return; }
    cout << "Isi Stack (atas ke bawah):\n";
    for(int i = top; i >= 0; i--)
        cout << "  [" << i << "] " << stackArr[i] << "\n";
}

// ========== QUEUE (Antrian Perpustakaan) ==========
string queueArr[5];
int qFront = 0, qRear = -1, jumlah = 0;

bool queueEmpty() { return jumlah == 0; }
bool queueFull()  { return jumlah == 5; }

void enqueue(string nama) {
    if(queueFull()){
        cout << "Queue penuh! \"" << nama << "\" tidak bisa masuk antrian.\n";
        return;
    }
    qRear = (qRear + 1) % 5;
    queueArr[qRear] = nama;
    jumlah++;
    cout << "Enqueue: \"" << nama << "\" berhasil masuk antrian.\n";
}

void dequeue() {
    if(queueEmpty()){
        cout << "Queue kosong! Tidak ada anggota yang bisa dihapus.\n";
        return;
    }
    cout << "Dequeue: \"" << queueArr[qFront] << "\" berhasil keluar antrian.\n";
    qFront = (qFront + 1) % 5;
    jumlah--;
}

void peekQueue() {
    if(queueEmpty()){ cout << "Queue kosong!\n"; return; }
    cout << "Anggota terdepan: \"" << queueArr[qFront] << "\"\n";
}

void tampilQueue() {
    if(queueEmpty()){ cout << "Queue kosong.\n"; return; }
    cout << "Isi Queue (depan ke belakang):\n";
    for(int i = 0; i < jumlah; i++)
        cout << "  [" << i+1 << "] " << queueArr[(qFront + i) % 5] << "\n";
}

// ========== MAIN ==========
int main(){
    cout << "========== SIMULASI STACK BUKU ==========\n";
    push("Fisika Dasar");
    push("Kalkulus");
    push("Algoritma");
    push("Jaringan");
    peekStack();
    pop(); pop();
    tampilStack();

    cout << "\n========== SIMULASI QUEUE PERPUSTAKAAN ==========\n";
    enqueue("Reza");
    enqueue("Mia");
    enqueue("Hendra");
    tampilQueue();
    peekQueue();
    dequeue();
    tampilQueue();
    enqueue("Putri");
    tampilQueue();

    return 0;
}
