#include <iostream>
#include <string>
using namespace std;

class Stack {
private:
    string data[5]; 
    int top;        
    int maxSize;    
    
public:
    Stack() {
        top = -1;      
        maxSize = 5;
    }
    
    bool isFull() {
        return top == maxSize - 1;
    }
    
    bool isEmpty() {
        return top == -1;
    }
    
    void push(string item) {
        if (isFull()) {
            cout << "Stack penuh! Tidak bisa menambah buku." << endl;
        } else {
            top++;
            data[top] = item;
            cout << "Buku \"" << item << "\" berhasil ditambahkan ke stack." << endl;
        }
    }
    
    void pop() {
        if (isEmpty()) {
            cout << "Stack kosong! Tidak ada buku yang bisa diambil." << endl;
        } else {
            cout << "Buku \"" << data[top] << "\" berhasil diambil dari stack." << endl;
            top--;
        }
    }
    
    void peek() {
        if (isEmpty()) {
            cout << "Stack kosong!" << endl;
        } else {
            cout << "Buku teratas: \"" << data[top] << "\"" << endl;
        }
    }
    
    void display() {
        if (isEmpty()) {
            cout << "Stack kosong!" << endl;
        } else {
            cout << "Isi Stack (dari atas ke bawah):" << endl;
            for (int i = top; i >= 0; i--) {
                cout << "  " << (top - i + 1) << ". " << data[i] << endl;
            }
        }
    }
};

class Queue {
private:
    string data[5]; 
    int front;      
    int rear;       
    int maxSize;    
    int count;     
    
public:
    Queue() {
        front = 0;
        rear = -1;
        maxSize = 5;
        count = 0;
    }
    
    bool isFull() {
        return count == maxSize;
    }
    
    bool isEmpty() {
        return count == 0;
    }
    
    void enqueue(string item) {
        if (isFull()) {
            cout << "Antrian penuh! Tidak bisa menambah anggota." << endl;
        } else {
            rear = (rear + 1) % maxSize;
            data[rear] = item;
            count++;
            cout << "Anggota \"" << item << "\" berhasil masuk antrian." << endl;
        }
    }
    
    void dequeue() {
        if (isEmpty()) {
            cout << "Antrian kosong! Tidak ada anggota yang bisa dilayani." << endl;
        } else {
            cout << "Anggota \"" << data[front] << "\" telah dilayani dan keluar dari antrian." << endl;
            front = (front + 1) % maxSize; 
            count--;
        }
    }
    
    void peek() {
        if (isEmpty()) {
            cout << "Antrian kosong!" << endl;
        } else {
            cout << "Anggota terdepan: \"" << data[front] << "\"" << endl;
        }
    }
    
    void display() {
        if (isEmpty()) {
            cout << "Antrian kosong!" << endl;
        } else {
            cout << "Isi Antrian (dari depan ke belakang):" << endl;
            int idx = front;
            for (int i = 0; i < count; i++) {
                cout << "  " << (i + 1) << ". " << data[idx] << endl;
                idx = (idx + 1) % maxSize;
            }
        }
    }
};

int main() {
    cout << "================================================" << endl;
    cout << "  BAGIAN A: SIMULASI STACK (TUMPUKAN BUKU)" << endl;
    cout << "================================================" << endl;
    cout << endl;
    
    Stack stackBuku;
    cout << "--- Menambahkan 4 Buku ke Stack ---" << endl;
    stackBuku.push("Fisika Dasar");
    stackBuku.push("Kalkulus");
    stackBuku.push("Algoritma");
    stackBuku.push("Jaringan");
    cout << endl;
    cout << "--- Melihat Buku Teratas ---" << endl;
    stackBuku.peek();
    cout << endl;
    cout << "--- Mengambil 2 Buku dari Stack ---" << endl;
    stackBuku.pop();
    stackBuku.pop();
    cout << endl;
    cout << "--- Kondisi Stack Terakhir ---" << endl;
    stackBuku.display();
    cout << endl;
    
    cout << "================================================" << endl;
    cout << "  BAGIAN B: SIMULASI QUEUE (ANTRIAN PEMINJAMAN)" << endl;
    cout << "================================================" << endl;
    cout << endl;
    
    Queue queuePeminjaman;
    cout << "--- Menambahkan 3 Anggota ke Antrian ---" << endl;
    queuePeminjaman.enqueue("Reza");
    queuePeminjaman.enqueue("Mia");
    queuePeminjaman.enqueue("Hendra");
    cout << endl;
    cout << "--- Kondisi Antrian Awal ---" << endl;
    queuePeminjaman.display();
    cout << endl;
    cout << "--- Melihat Anggota Terdepan ---" << endl;
    queuePeminjaman.peek();
    cout << endl;
    cout << "--- Melayani 1 Anggota ---" << endl;
    queuePeminjaman.dequeue();
    cout << endl;
    cout << "--- Kondisi Antrian Setelah Melayani ---" << endl;
    queuePeminjaman.display();
    cout << endl;
    cout << "--- Menambahkan 1 Anggota Baru ---" << endl;
    queuePeminjaman.enqueue("Putri");
    cout << endl;
    cout << "--- Kondisi Antrian Terakhir ---" << endl;
    queuePeminjaman.display();
    cout << endl;
    
    return 0;
}
