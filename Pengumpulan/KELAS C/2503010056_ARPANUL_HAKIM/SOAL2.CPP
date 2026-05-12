#include <iostream>
#include <string>

using namespace std;

const int MAX = 5; 
string stackBuku[MAX];
int top = -1; 

bool isStackEmpty() {
    return top == -1;
}

bool isStackFull() {
    return top == MAX - 1; 
}

void push(string judul) {
    if (isStackFull()) {
        cout << "Penuh! Gagal menaruh buku: " << judul << endl;
    } else {
        top++;
        stackBuku[top] = judul;
        cout << "Buku '" << judul << "' dimasukkan." << endl;
    }
}

void pop() {
    if (isStackEmpty()) {
        cout << "Kosong! Tidak ada buku yang bisa diambil." << endl;
    } else {
        cout << "Buku '" << stackBuku[top] << "' diambil." << endl;
        top--; 
    }
}

void peekStack() {
    if (isStackEmpty()) {
        cout << "Kosong! Tidak ada buku di tumpukan atas." << endl;
    } else {
        cout << "Buku paling atas adalah '" << stackBuku[top] << "'" << endl;
    }
}

void tampilStack() {
    cout << "--- Isi Stack Buku Saat Ini ---" << endl;
    if (isStackEmpty()) {
        cout << "(Kosong)" << endl;
    } else {
        for (int i = top; i >= 0; i--) {
            cout <<  stackBuku[i] <<  endl;
        }
    }
    cout << "-------------------------------\n" << endl;
}

string queueAntrian[MAX];
int front = -1; 
int rear = -1;  

bool isQueueEmpty() {
    return front == -1 && rear == -1;
}

bool isQueueFull() {
    return rear == MAX - 1;
}

void enqueue(string nama) {
    if (isQueueFull()) {
        cout << "Penuh! Antrian sudah batas maksimal." << endl;
    } else {
        if (front == -1) { 
            front = 0; 
        }
        rear++;
        queueAntrian[rear] = nama;
        cout << nama << "' masuk antrian." << endl;
    }
}

void dequeue() {
    if (isQueueEmpty()) {
        cout << "Kosong! Tidak ada antrian yang bisa dipanggil." << endl;
    } else {
        cout << queueAntrian[front] << "' keluar antrian." << endl;
        if (front == rear) {
            front = -1;
            rear = -1;
        } else {
            front++; 
        }
    }
}

void peekQueue() {
    if (isQueueEmpty()) {
        cout << "Kosong!" << endl;
    } else {
        cout << "Anggota terdepan saat ini adalah '" << queueAntrian[front] << "'" << endl;
    }
}

void tampilQueue() {
    cout << "Isi Queue: ";
    if (isQueueEmpty()) {
        cout << "(Kosong)" << endl;
    } else {
        cout << "Depan -> ";
        for (int i = front; i <= rear; i++) {
            cout << "[" << queueAntrian[i] << "] ";
        }
        cout << "<- Belakang" << endl;
    }
    cout << endl;
}

int main() {
    cout << "========================================" << endl;
    cout << "   SIMULASI PERTANYAAN A: STACK BUKU    " << endl;
    cout << "========================================" << endl;
    
    push("Fisika Dasar");
    push("Kalkulus");
    push("Algoritma");
    push("Jaringan");
    cout << endl;

    peekStack();
    cout << endl;
    
    pop();
    pop();
    cout << endl;
    tampilStack();


    cout << "========================================" << endl;
    cout << "  SIMULASI PERTANYAAN B: QUEUE ANTRIAN  " << endl;
    cout << "========================================" << endl;

    enqueue("Reza");
    tampilQueue();
    
    enqueue("Ameena");
    tampilQueue();
    
    enqueue("Hendra");
    tampilQueue();
    
    peekQueue();
    cout << endl;
    
    dequeue();
    tampilQueue();
    
    enqueue("Putri");
    tampilQueue();

    return 0;
}