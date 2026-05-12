#include <iostream>
using namespace std;
//(Struktur) SOAL BAGIAN A 
#define max 5

struct stack {

    int top = -1;
    string buku [max];

    bool isfull() {
        return top == max -1;
    }
    bool isEmpty() {
        return top == -1;
    }

    void push (string data) {
        if (isfull()) {
             cout << "Tumpukan penuh tidak bisa menambah buku " <<data <<endl;
        } else {
            top ++;
            buku[top] = data;
            cout << "Buku di tambahkan!" <<data <<endl;
        }
    
    } 
    void pop () {
        if (isEmpty()) {
            cout <<"Tumpukan kosong";
        } else {
            cout << "Buku dikeluarkan" <<buku[top] <<endl;
            top --;
        }

    } 

    void peek () {
        if (isEmpty()) {
            cout << "Tumpukan Kosong. " <<endl;
        } else  {
            cout << "Buku paling atas dari tumpukan :" <<buku[top] <<endl; 
        } 
    }
    void display () {
        if(isEmpty()) {
            cout << "Tumpukan kosong";
        } else {
            cout << "Tumpukan teratas :" <<endl;
            for (int i = top; i>=0; i--) {
                cout << "-" <<buku[i] <<endl;
            } 
        }
    }

};

//(Struktur) Soal bagian B
const int MAX = 5;

string queueArr[MAX];
int front = -1;
int rear = -1;

bool isEmpty() {
    return front == -1;
}

bool isFull() {
    return rear == MAX - 1;
}


void enqueue(string nama) {
    if (isFull()) {
        cout << "Queue penuh! Tidak bisa menambahkan " << nama << endl;
    } else {
        if (isEmpty()) {
            front = 0;
        }
        rear++;
        queueArr[rear] = nama;

        cout << nama << " berhasil masuk ke antrian." << endl;
    }
}

void dequeue() {
    if (isEmpty()) {
        cout << "Queue kosong! Tidak ada anggota yang diproses." << endl;
    } else {
        cout << queueArr[front] << " keluar dari antrian." << endl;

        if (front == rear) {
            front = rear = -1;
        } else {
            front++;
        }
    }
}

void peek() {
    if (isEmpty()) {
        cout << "Queue kosong!" << endl;
    } else {
        cout << "Anggota terdepan: " << queueArr[front] << endl;
    }
}

void tampilQueue() {
    if (isEmpty()) {
        cout << "Queue kosong." << endl;
    } else {
        cout << "Isi Queue: ";

        for (int i = front; i <= rear; i++) {
            cout << queueArr[i];

            if (i < rear) {
                cout << " -> ";
            }
        }

        cout << endl;
    }
}
int main () {
        stack a;

        cout <<"=== SIMULASI STACK BUKU ===" <<endl;

        a.push("Fisika Dasar");
        a.push("Kalkulus");
        a.push("Algoritma");
        a.push("Jaringan");
        
        cout << "\n-- Operasi Peek --" <<endl;
        a.peek();

        cout << "\n-- Operasi Pop 2 Buku --" <<endl;
        a.pop();
        a.pop();

        cout << "\n-- Kondisi Akhir --" <<endl;
        a.display();


        cout << "=== ENQUEUE 3 ANGGOTA ===" << endl;

        enqueue("Arfyn");
        tampilQueue();

         enqueue("Diazs");
        tampilQueue();

        enqueue("Aryada");
        tampilQueue();

        cout << "\n=== PEEK ===" << endl;
        peek();

        cout << "\n=== DEQUEUE 1 ANGGOTA ===" << endl;
        dequeue();
        tampilQueue();

        cout << "\n=== ENQUEUE ANGGOTA BARU ===" << endl;
        enqueue("Steven");
        tampilQueue();

        return 0;
    }