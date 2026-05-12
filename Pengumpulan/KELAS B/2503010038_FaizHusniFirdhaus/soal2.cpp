#include <iostream>
#include <string>

using namespace std;

// soal A

#define MAX_STACK 5
string stackBuku[MAX_STACK];
int top = -1;

bool isStackEmpty() { return top == -1; }
bool isStackFull() { return top == MAX_STACK - 1; }

void push(string judul)
{
    if (isStackFull())
    {
        cout << "Penuh! Tidak bisa menambah buku: " << judul << endl;
    }
    else
    {
        top++;
        stackBuku[top] = judul;
        cout << "Push: " << judul << endl;
    }
}

void pop()
{
    if (isStackEmpty())
    {
        cout << "Kosong! Tidak ada buku untuk di-pop." << endl;
    }
    else
    {
        cout << "Pop: " << stackBuku[top] << endl;
        top--;
    }
}

void peekStack()
{
    if (isStackEmpty())
        cout << "Kosong!" << endl;
    else
        cout << "Buku teratas (peek): " << stackBuku[top] << endl;
}

void tampilkanStack()
{
    cout << "Isi Stack saat ini: ";
    if (isStackEmpty())
        cout << "[Kosong]";
    else
    {
        for (int i = 0; i <= top; i++)
            cout << "[" << stackBuku[i] << "] ";
    }
    cout << endl;
}

// soal B

#define MAX_QUEUE 5
string queueAnggota[MAX_QUEUE];
int front = -1, rear = -1;

bool isQueueEmpty() { return front == -1 || front > rear; }
bool isQueueFull() { return rear == MAX_QUEUE - 1; }

void enqueue(string nama)
{
    if (isQueueFull())
    {
        cout << "Penuh! " << nama << " tidak bisa masuk antrian." << endl;
    }
    else
    {
        if (front == -1)
            front = 0;
        rear++;
        queueAnggota[rear] = nama;
        cout << "Enqueue: " << nama << endl;
    }
}

void dequeue()
{
    if (isQueueEmpty())
    {
        cout << "Kosong! Tidak ada antrian." << endl;
    }
    else
    {
        cout << "Dequeue: " << queueAnggota[front] << endl;
        front++;
    }
}

void peekQueue()
{
    if (isQueueEmpty())
        cout << "Kosong!" << endl;
    else
        cout << "Anggota terdepan (peek): " << queueAnggota[front] << endl;
}

void tampilkanQueue()
{
    cout << "Isi Queue saat ini: ";
    if (isQueueEmpty())
        cout << "[Kosong]";
    else
    {
        for (int i = front; i <= rear; i++)
            cout << "(" << queueAnggota[i] << ") ";
    }
    cout << endl;
}

// menampilkan soal bagian A da B
int main()
{
    // Bagian A
    cout << "--- SOAL A: STACK (TUMPUKAN BUKU) ---" << endl;
    push("Fisika Dasar");
    push("Kalkulus");
    push("Algoritma");
    push("Jaringan");

    peekStack();
    tampilkanStack();

    pop();
    pop();

    cout << "Setelah operasi pop:" << endl;
    tampilkanStack();
    cout << endl;

    // Bagian B
    cout << "--- SOAL B: QUEUE (ANTRIAN PEMINJAMAN) ---" << endl;
    enqueue("Reza");
    enqueue("Mia");
    enqueue("Hendra");
    tampilkanQueue();

    peekQueue();
    dequeue();
    tampilkanQueue();

    enqueue("Putri");
    tampilkanQueue();

    cout << "\n--- Simulasi Selesai ---" << endl;
    return 0;
}