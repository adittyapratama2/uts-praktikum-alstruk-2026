#include<iostream>
#include<string>
using namespace std;

string stack[5];
int top = -1;

bool isEmpty() { return top == -1; }
bool isFull()  { return top == 4;  }

void push(string judul) {
    if(isFull()){
        cout << "Stack penuh! Buku \"" << judul << "\" tidak bisa ditambah.\n";
        return;
    }
    stack[++top] = judul;
    cout << "Push: \"" << judul << "\" berhasil ditambahkan.\n";
}

void pop() {
    if(isEmpty()){
        cout << "Stack kosong! Tidak ada buku yang bisa dihapus.\n";
        return;
    }
    cout << "Pop: \"" << stack[top--] << "\" berhasil dihapus.\n";
}

void peek() {
    if(isEmpty()){
        cout << "Stack kosong!\n";
        return;
    }
    cout << "Buku paling atas: \"" << stack[top] << "\"\n";
}

void tampilStack() {
    if(isEmpty()){
        cout << "Stack kosong.\n";
        return;
    }
    cout << "Isi Stack (atas ke bawah):\n";
    for(int i = top; i >= 0; i--)
        cout << "  [" << i << "] " << stack[i] << "\n";
}



int main(){

    cout << "========== SIMULASI STACK BUKU ==========" << endl;

    cout << "\n-- Push Buku --\n";
    push("Fisika Dasar");
    push("Kalkulus");
    push("Algoritma");
    push("Jaringan");

    cout << "\n-- Peek --\n";
    peek();

    cout << "\n-- Pop 2 Buku --\n";
    pop();
    pop();

    
    cout << "\n-- Sisa Stack --\n";
    tampilStack();

    cout << "==========================================" << endl;

    return 0;
}
