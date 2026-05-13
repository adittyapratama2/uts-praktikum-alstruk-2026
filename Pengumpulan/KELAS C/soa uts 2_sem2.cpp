#include <iostream>
using namespace std;

// stack

#define MAX 5
string stack_buku[MAX];
int top = -1;

bool isEmptyStack() {
    return top == -1;
}
bool isFullStack() {
    return top == MAX - 1;
}

void push(string judul) {
    if (isFullStack()) {
        cout << "Stack penuh!\n";
    } else {
        top++;
        stack_buku[top] = judul;
        cout << "Buku \"" << judul << "\" berhasil ditambahkan.\n";
    }
}

void pop() {
    if (isEmptyStack()) {
        cout << "Stack kosong!\n";
    } else {
        cout << "Buku \"" << stack_buku[top] << "\" dihapus.\n";
        top--;
    }
}

void peekStack() {
    if (isEmptyStack()) {
        cout << "Stack kosong!\n";
    } else {
        cout << "Buku paling atas: " << stack_buku[top] << endl;
    }
}

// tampil stack
void tampilkanStack() {
    if (isEmptyStack()) {
        cout << "Stack kosong!\n";
    } else {
        cout << "Isi Stack:\n";
        for (int i = top; i >= 0; i--) {
            cout << "- " << stack_buku[i] << endl;
        }
    }
}

//  QUEUE 
string queue_Anggota[MAX];
int front = -1, rear = -1;

bool isEmptyQueue() {
    return front == -1 || front > rear;
}

bool isFullQueue() {
    return rear == MAX -1;
}

void enqueue(string nama) {
    if (isFullQueue()) {
        cout << "Antrian penuh!"<<nama<<"tidak bisa masuk.\n";
    } else {
        if (isEmptyQueue()){
            front = 0;
        }
        rear++;
        queue_Anggota[rear] = nama;
        cout << "Anggota \""<< nama <<"\" masuk antrian.\n";
    }
}

void dequeue() {
    if (isEmptyQueue()) {
        cout << "Antrian kosong!!!\n";
    } else {
        cout << "Anggota \""<<queue_Anggota[front] << "\" keluar dari antrian.\n";
        front++;
        if(front > rear){
            front = rear =-1;
        }
    }
}

void peekQueue() {
    if (isEmptyQueue()) {
        cout << "Antrian kosong!\n";
    } else {
        cout << "Antrian paling depan: " << queue_Anggota[front] << endl;
    }
}

// tampil queue
void tampilkanQueue() {
    if (isEmptyQueue()) {
        cout << "Antrian kosong!\n";
    } else {
        cout << "Isi Antrian saat ini:\n";
        for (int i = front; i <= rear; i++) {
            cout << (i - front +1) << ". "<< queue_Anggota[i] << endl;
        }
    }
}

// ================= MAIN =================
int main() {
    cout << "===== STACK: TUMPUKAN BUKU =====\n";

    push("Fisika Dasar");
    push("Kalkulus");
    push("Algoritma");
    push("Jaringan");

    peekStack();
    pop();
    pop();

    cout<<"Sisa stack:\n";
    tampilkanStack();

    cout << "\n===== QUEUE: ANTRIAN PEMINJAMAN =====\n";
    enqueue("Reza");
    enqueue("Mia");
    enqueue("Hendra");

    peekQueue();

    dequeue();
    enqueue("Putri");

    cout<<"Isi antrian setelah semua oprasi:\n";
    tampilkanQueue();
    
    return 0;
}