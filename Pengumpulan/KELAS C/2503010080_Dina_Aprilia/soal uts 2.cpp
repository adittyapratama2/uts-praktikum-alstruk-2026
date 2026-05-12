#include <iostream>
using namespace std;

// stack
#define MAX_stack 5

string stackBuku[MAX_stack];
int top = -1;

bool isEmpty() {
    return top == -1;
}

bool isFull() {
    return top == MAX_stack- 1;
}
//push
void push(string judul) {
    if (isFull()) {
        cout << "Stack penuh! Buku tidak bisa ditambahkan.\n";
    } else {
        top++;
        stackBuku[top] = judul;
        cout << "Buku \"" << judul << "\" berhasil ditambahkan.\n";
    }
}

// pop
void pop() {
    if (isEmpty()) {
        cout << "Stack kosong! Tidak ada buku yang dihapus.\n";
    } else {
        cout << "Buku \"" << stackBuku[top] << "\" diambil dari stack.\n";
        top--;
    }
}

// peek
void peek() {
    if (isEmpty()) {
        cout << "Stack kosong!\n";
    } else {
        cout << "Buku paling atas: " << stackBuku[top] << endl;
    }
}

// tampilan isi stack
void tampil() {
    if (isEmpty()) {
        cout << "Stack kosong.\n";
    } else {
        cout << "\nIsi Stack:\n";
        for (int i = top; i >= 0; i--) {
            cout << stackBuku[i] << endl;
        }
    }
}

// queue
#define MAX_queue 5

string queueAnggota[MAX_queue];
int front = -1;
int rear = -1;

bool Queue_isEmpty() {
    return front == -1;
}

bool Queue_isFull() {
    return rear == MAX_queue - 1;
}

// enqueue
void enqueue(string nama) {
    if (Queue_isFull()) {
        cout << "Queue penuh! Anggota tidak bisa ditambahkan.\n";
    } else {
        if (Queue_isEmpty()) {
            front = 0;
        }

        rear++;
        queueAnggota[rear] = nama;

        cout << nama << " masuk ke antrian.\n";
    }
}

// dequeue
void dequeue() {
    if (Queue_isEmpty()) {
        cout << "Queue kosong! Tidak ada anggota yang keluar.\n";
    } else {
        cout << queueAnggota[front] << " keluar dari antrian.\n";

        if (front == rear) {
            front = rear = -1;
        } else {
            front++;
        }
    }
}

// peek
void peek_queue() {
    if (Queue_isEmpty()) {
        cout << "Queue kosong!\n";
    } else {
        cout << "Antrian terdepan: " << queueAnggota[front] << endl;
    }
}


void tampilkan() {
    if (Queue_isEmpty()) {
        cout << "Queue kosong.\n";
    } else {
        cout << "\nIsi Queue:\n";
        for (int i = front; i <= rear; i++) {
            cout << queueAnggota[i] << endl;
        }
    }
}
	
int main() {
	cout<<"==========Stack==========="<<endl;
    push("Fisika Dasar");
    push("Kalkulus");
    push("Algoritma");
    push("Jaringan");

    tampil();

    cout << endl;
    peek();

    cout << endl;
    pop();
    pop();

    tampil();
	
	cout<<"==========Queue=========="<<endl;
	enqueue("Reza");
    enqueue("Mia");
    enqueue("Hendra");

    tampilkan();

    cout << endl;
    peek_queue();

    cout << endl;
    dequeue();

    tampilkan();

    cout << endl;
    enqueue("Putri");

    tampilkan();
    
	return 0;
}
