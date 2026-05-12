#include <iostream>
using namespace std;

#define MAX 5

// ================= PERTANYAAN A = STACK =================
string stackBuku[MAX];
int top = -1;

bool isEmptyStack() { return top == -1; }
bool isFullStack() { return top == MAX - 1; }

void push(string judul) {
    if (isFullStack()) {
    	cout << "Stack penuh! Tidak bisa menambahkan data\n";
	} else {
        stackBuku[++top] = judul;
        cout << "Push: " << judul << " berhasil ditambahkan\n";
    }
}

void pop() {
    if (isEmptyStack()) {
    	cout << "Stack kosong! Tidak ada data\n";
	} else {
		 cout << "Pop: " << stackBuku[top] << " berhasil dihapus\n";
		 top--;
	}
}

void peekStack() {
    if (isEmptyStack()) {
    	cout << "Stack kosong! Tidak ada data\n";
	} else {
		cout << "Data terbatas: " << stackBuku[top] << endl;
	} 
}


// ================= PERTANYAAN B = QUEUE =================
string queueMhs[MAX];
int front = 0, rear = -1, count = 0;

bool isEmptyQueue() { return count == 0; }
bool isFullQueue() { return count == MAX; }

void enqueue(string nama) {
    if (isFullQueue()) {
    	cout << "Queue penuh! Tidak bisa menambahkan antrian\n";
	} else {
        queueMhs[++rear] = nama;
        count++;
        cout << "Enqueue: " << nama << " masuk ke antrian\n";
    }
}

void dequeue() {
    if (isEmptyQueue()) {
    	cout << "Queue kosong! Tidak ada antrian\n";
	} else {
        cout << "Dequeue: " << queueMhs[front] << " keluar dari antrian\n";
        front++;
        count--;
    }
}

void peekQueue() {
    if (isEmptyQueue()) {
    	cout << "Queue kosong!\n";
	} else {
		cout << "Antrian terdepan: " << queueMhs[front] << endl;
	}
}

// ================= MAIN =================
int main() {

    cout << "=== STACK ===\n";
    push("Fisika Dasar");
    push("Kalkulus");
    push("Algoritma");
    push("Jaringan");

    peekStack();
    pop();
    pop();
    
    cout << "\n=== QUEUE ===\n";
    enqueue("Reza");
    enqueue("Mia");
    enqueue("Hendra");

    peekQueue();
    dequeue();
    enqueue("Putri");

    return 0;
}
