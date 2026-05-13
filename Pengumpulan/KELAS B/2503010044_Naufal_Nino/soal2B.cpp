#include <iostream>

using namespace std;

const int QUEUE_SIZE = 5;

string queue[QUEUE_SIZE];
int front = -1;
int rear = -1;

bool isFULL() {
   return !isEMPTY() && ((rear + 1) % QUEUE_SIZE == front);
}

bool isEMPTY() {
    return front == -1;
}

void enqueue(string value) {
    if(isFULL()) {
        cout << "\n\nQueue sudah penuh. Tidak dapat menambahkan anggota kedalamnya.\n\n";
    }
    else {
        if (isEMPTY()) {
            front = 0;
            rear = 0;
        }
        else {
            rear = (rear + 1) % QUEUE_SIZE;
        }
        queue[rear] = value;
        cout << "\n\nanggota dengan nama " << value << " berhasil ditambahakan ke dalam queue.\n\n";
    }
}
void dequeue() {
    if(isEMPTY()) {
        cout << "\n\nQueue kosong. Tidak dapat menghapus anggota.\n\n";
    }
    else {
        cout << "\n\nanggota dengan nama " << queue[front] << " berhasil dihapus dari queue.\n\n";
        if (front == rear) {
            front = rear = -1;
        }
        else {
            front = (front + 1) % QUEUE_SIZE;
        }
    }
}
void peek() {
    if(isEMPTY()) {
        cout << "\n\nQueue kosong. Tidak ada anggota untuk ditampilkan.\n\n";
    }
    else {
        cout << "\n\nAnggota terdepan saat ini pada queue adalah : " << queue[front] << "\n\n";
    }
}

void display() {
    if (isEMPTY()) {
        cout << "\n\nQueue kosong. Tidak ada anggota untuk ditampilkan.\n\n";
    }
    else {
        cout << "\n\nSeluruh anggota pada queue saat ini adalah : \n\n";
        int i = front;
        while (true) {
            cout << queue[i] << endl;
            if (i == rear) break;
            i = (i + 1) % QUEUE_SIZE;
        }
    }
}

int main () {
    enqueue("Reza");
    enqueue("Mia");
    enqueue("Hendra");

    display();

    peek();

    dequeue();
    enqueue("Putri");

    display();

    return 0;


}