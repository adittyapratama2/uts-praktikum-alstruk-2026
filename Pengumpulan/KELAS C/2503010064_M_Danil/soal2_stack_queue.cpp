#include <iostream>
using namespace std;

#define MAX 5

struct stack
{
    string data[MAX]; // ✅ ganti int → string
    int top;
};

// inisialisasi stack
void init(stack &s)
{
    s.top = -1;
}

// cek stack penuh?
bool isFull(stack s)
{
    return s.top == MAX - 1;
}

// cek stack kosong
bool isEmpty(stack s)
{
    return s.top == -1;
}

// memasukan data
void push(stack &s, string buku)
{
    if (isFull(s))
    {
        cout << "Stack penuh! Tidak bisa push \"" << buku << "\"" << endl; // ✅ pesan diperbaiki
    }
    else
    {
        s.top++; // ✅ logika push yang benar
        s.data[s.top] = buku;
        cout << "\"" << buku << "\" berhasil di-push" << endl;
    }
}

// mengeluarkan data
void pop(stack &s)
{
    if (isEmpty(s))
    {
        cout << "Stack kosong! Tidak bisa pop" << endl;
    }
    else
    {
        cout << "\"" << s.data[s.top] << "\" di-pop" << endl;
        s.top--;
    }
}

// lihat data teratas
void peek(stack s)
{
    if (isEmpty(s))
    {
        cout << "Stack kosong!" << endl;
    }
    else
    {
        cout << "Buku paling atas (peek): \"" << s.data[s.top] << "\"" << endl;
    }
}

// Tampilkan semua data
void tampil(stack s)
{
    if (isEmpty(s))
    {
        cout << "Stack kosong!" << endl;
    }
    else
    {
        cout << "Isi stack (atas ke bawah): " << endl;
        for (int i = s.top; i >= 0; i--)
        {
            cout << "  [" << i + 1 << "] " << s.data[i] << endl;
        }
    }
}

//========================================= QUEUE ================================================
struct queue
{
    string data[MAX];
    int front, rear;
};

// inisialisasi
void initQueue(queue &q)
{
    q.front = -1;
    q.rear = -1;
}

// cek queue penuh?
bool isFullQueue(queue q)
{
    return q.rear == MAX - 1;
}

// cek kosong?
bool isEmptyQueue(queue q)
{
    return q.front == -1;
}

// Memasukan Data
void enqueue(queue &q, string nama)
{
    if (isFullQueue(q))
    {
        cout << "Queue penuh! Tidak bisa enqueue \"" << nama << "\"" << endl;
    }
    else
    {
        if (q.front == -1)
            q.front = 0;
        q.rear++;
        q.data[q.rear] = nama;
        cout << "\"" << nama << "\" berhasil masuk antrian" << endl;
    }
}

// mengeluarkan Data
void dequeue(queue &q)
{
    if (isEmptyQueue(q))
    {
        cout << "Queue kosong! Tidak bisa dequeue" << endl;
    }
    else
    {
        cout << "\"" << q.data[q.front] << "\" keluar dari antrian" << endl;
        if (q.front == q.rear)
        {
            q.front = -1;
            q.rear = -1;
        }
        else
        {
            q.front++;
        }
    }
}

// lihat data terdepan
void peekQueue(queue q)
{
    if (isEmptyQueue(q))
    {
        cout << "Queue kosong!" << endl;
    }
    else
    {
        cout << "Anggota terdepan (peek): \"" << q.data[q.front] << "\"" << endl;
    }
}

// Menampilkan Semua Data
void tampilQueue(queue q)
{
    if (isEmptyQueue(q))
    {
        cout << "Queue kosong!" << endl;
    }
    else
    {
        cout << "Isi queue (depan ke belakang): " << endl;
        for (int i = q.front; i <= q.rear; i++)
        {
            cout << "  [" << i + 1 << "] " << q.data[i] << endl;
        }
    }
}

int main()
{
    stack s;
    init(s);

    cout << "=== PUSH 4 BUKU ===" << endl;
    push(s, "Fisika Dasar");
    push(s, "Kalkulus");
    push(s, "Algoritma");
    push(s, "Jaringan");

    cout << "\n=== PEEK ===" << endl;
    peek(s);

    cout << "\n=== POP 2 BUKU ===" << endl;
    pop(s);
    pop(s);

    cout << "\n=== ISI STACK SEKARANG ===" << endl;
    tampil(s);

    cout << "=============================== QUEUE ================================" << endl;
    queue q;
    initQueue(q);
    cout << "\n=== ENQUEUE 3 ANGGOTA ===" << endl;
    enqueue(q, "Reza");
    enqueue(q, "Mia");
    enqueue(q, "Hendra");

    cout << "\n=== ISI QUEUE ===" << endl;
    tampilQueue(q);

    cout << "\n=== PEEK ===" << endl;
    peekQueue(q);

    cout << "\n=== DEQUEUE 1 ANGGOTA ===" << endl;
    dequeue(q);

    cout << "\n=== ENQUEUE ANGGOTA BARU ===" << endl;
    enqueue(q, "Putri");

    cout << "\n=== ISI QUEUE SEKARANG ===" << endl;
    tampilQueue(q);

    return 0;
}