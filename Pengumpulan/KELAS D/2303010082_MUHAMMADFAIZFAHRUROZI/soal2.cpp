#include <iostream>
using namespace std;

const int MAX = 5;

string stackBuku[MAX], queueAnggota[MAX];
int top = -1, front = 0, rear = -1, jumlah = 0;

bool isEmptyStack(){ return top == -1; }
bool isFullStack(){ return top == MAX - 1; }

void push(string judul){
    if(isFullStack())
        cout << "Stack penuh!\n";
    else{
        top++;
        stackBuku[top] = judul;
        cout << judul << " ditambahkan\n";
    }
}

void pop(){
    if(isEmptyStack())
        cout << "Stack kosong!\n";
    else{
        cout << stackBuku[top] << " dihapus\n";
        top--;
    }
}

void peekStack(){
    if(isEmptyStack())
        cout << "Stack kosong!\n";
    else
        cout << "Teratas : "
             << stackBuku[top] << endl;
}

void tampilStack(){
    if(isEmptyStack())
        cout << "Stack kosong\n";
    else{
        cout << "Isi Stack:\n";
        for(int i = top; i >= 0; i--)
            cout << "- "
                 << stackBuku[i] << endl;
    }
}

bool isEmptyQueue(){ return jumlah == 0; }
bool isFullQueue(){ return jumlah == MAX; }

void enqueue(string nama){
    if(isFullQueue())
        cout << "Queue penuh!\n";
    else{
        rear++;
        queueAnggota[rear] = nama;
        jumlah++;
        cout << nama
             << " masuk antrian\n";
    }
}

void dequeue(){
    if(isEmptyQueue())
        cout << "Queue kosong!\n";
    else{
        cout << queueAnggota[front]
             << " keluar antrian\n";
        front++;
        jumlah--;
    }
}

void peekQueue(){
    if(isEmptyQueue())
        cout << "Queue kosong!\n";
    else
        cout << "Depan : "
             << queueAnggota[front] << endl;
}

void tampilQueue(){
    if(isEmptyQueue())
        cout << "Queue kosong\n";
    else{
        cout << "Isi Queue:\n";
        for(int i = front; i <= rear; i++)
            cout << "- "
                 << queueAnggota[i] << endl;
    }
}

int main(){
    cout << "===== STACK =====\n";
    push("Fisika Dasar");
    tampilStack();
    push("Kalkulus");
    tampilStack();
    push("Algoritma");
    tampilStack();
    push("Jaringan");
    tampilStack();
    peekStack();
    pop();
    tampilStack();
    pop();
    tampilStack();
    cout << "\n===== QUEUE =====\n";
    enqueue("Reza");
    tampilQueue();
    enqueue("Mia");
    tampilQueue();
    enqueue("Hendra");
    tampilQueue();
    peekQueue();
    dequeue();
    tampilQueue();
    enqueue("Putri");
    tampilQueue();
    return 0;
}
