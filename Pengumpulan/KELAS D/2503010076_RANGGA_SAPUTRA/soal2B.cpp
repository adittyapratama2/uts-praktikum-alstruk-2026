#include <iostream>
#include <string>

using namespace std;

const int MAX_Q = 5;
string queueAnggota[MAX_Q];
int front = -1;
int rear = -1;

bool isFull() { return rear == MAX_Q - 1; }
bool isEmpty() { return front == -1 || front > rear; }

void enqueue(string nama) {
    if (isFull()) {
        cout << "Antrian penuh! " << nama << " tidak bisa masuk." << endl;
    } else {
        if (front == -1) front = 0;
        rear++;
        queueAnggota[rear] = nama;
        cout << "Berhasil " << nama << " masuk ke antrian." << endl;
    }
}

void dequeue() {
    if (isEmpty()) {
        cout << "Antrian masih kosong." << endl;
    } else {
        cout << "Memproses antrian: " << queueAnggota[front] << endl;
        front++;
    }
}

void peek() {
    if (isEmpty()) {
        cout << "Antrian saat ini kosong." << endl;
    } else {
        cout << "-> Anggota terdepan saat ini: " << queueAnggota[front] << endl;
    }
}

void displayQueue() {
    cout << "\nIsi Antrian: ";
    if (isEmpty()) cout << "[Kosong]";
    else {
        for (int i = front; i <= rear; i++) cout << "(" << queueAnggota[i] << ") ";
    }
    cout << "\n-------------------------------------------------\n";
}

int main() {
    cout << "=== SIMULASI QUEUE PERPUSTAKAAN ===\n\n";

 
    enqueue("Abdul");
    enqueue("Amir");
    enqueue("Sander");
    displayQueue();

    peek();

    cout << "\nMemproses 1 anggota...\n";
    dequeue();
    
    cout << "\nMenambahkan anggota baru...\n";
    enqueue("Putri");

    // Ta
    displayQueue();

    return 0;
}
