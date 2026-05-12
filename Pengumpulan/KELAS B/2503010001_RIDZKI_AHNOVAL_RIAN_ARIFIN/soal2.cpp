#include <iostream>
using namespace std;

// ================= STACK =================

string stackData[5];
int top = -1;

// Tambah data stack
void push(string data){

    if(top == 4){
        cout << "Stack penuh\n";
    }
    else{
        top++;
        stackData[top] = data;

        cout << data << " masuk ke stack\n";
    }
}

// Hapus data stack
void pop(){

    if(top == -1){
        cout << "Stack kosong\n";
    }
    else{

        cout << stackData[top]
             << " keluar dari stack\n";

        top--;
    }
}

// Lihat data paling atas
void peek(){

    if(top == -1){
        cout << "Stack kosong\n";
    }
    else{
        cout << "Data teratas : "
             << stackData[top]
             << endl;
    }
}

// Tampilkan stack
void tampilStack(){

    cout << "\nIsi Stack:\n";

    for(int i = top; i >= 0; i--){
        cout << stackData[i] << endl;
    }
}


// ================= QUEUE =================

string queueData[5];

int front = 0;
int rear = -1;

// Tambah queue
void enqueue(string nama){

    if(rear == 4){
        cout << "Queue penuh\n";
    }
    else{

        rear++;
        queueData[rear] = nama;

        cout << nama
             << " masuk queue\n";
    }
}

// Hapus queue
void dequeue(){

    if(front > rear){
        cout << "Queue kosong\n";
    }
    else{

        cout << queueData[front]
             << " keluar queue\n";

        front++;
    }
}

// Lihat depan queue
void peekQueue(){

    if(front > rear){
        cout << "Queue kosong\n";
    }
    else{

        cout << "Antrian depan : "
             << queueData[front]
             << endl;
    }
}

// Tampilkan queue
void tampilQueue(){

    cout << "\nIsi Queue:\n";

    for(int i = front; i <= rear; i++){
        cout << queueData[i] << endl;
    }
}


// ================= MAIN =================

int main(){

    cout << "=== STACK ===\n";

    push("T001");
    push("T002");
    push("T003");
    push("T004");

    peek();

    pop();
    pop();

    tampilStack();


    cout << "\n\n=== QUEUE ===\n";

    enqueue("Budi");
    enqueue("Sari");
    enqueue("Eko");

    peekQueue();

    dequeue();

    enqueue("Dewi");

    tampilQueue();

    return 0;
}