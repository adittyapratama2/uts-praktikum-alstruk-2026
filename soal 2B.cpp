#include <iostream>
#include <string>

using namespace std;

#define MAX 5 

struct QueuePerpustakaan {
    string nama[MAX];
    int front = -1; 
    int rear = -1;  

    
    bool isFull() {
        return rear == MAX - 1;
    }

    
    bool isEmpty() {
        return front == -1 || front > rear;
    }

    
    void enqueue(string namaAnggota) {
        if (isFull()) {
            cout << "Gagal Enqueue: Antrean penuh, " << namaAnggota << " tidak bisa masuk." << endl;
        } else {
            if (front == -1) front = 0; 
            rear++;
            nama[rear] = namaAnggota;
            cout << "Berhasil Enqueue: " << namaAnggota << " masuk antrean." << endl;
        }
    }

    
    void dequeue() {
        if (isEmpty()) {
            cout << "Gagal Dequeue: Antrean kosong!" << endl;
        } else {
            cout << "Berhasil Dequeue: " << nama[front] << " selesai dilayani." << endl;
            front++;
        }
    }

    
    void peek() {
        if (isEmpty()) {
            cout << "Antrean kosong, tidak ada orang di depan." << endl;
        } else {
            cout << "Anggota terdepan saat ini: " << nama[front] << endl;
        }
    }

    
    void display() {
        if (isEmpty()) {
            cout << "Isi Queue: [Kosong]" << endl;
        } else {
            cout << "Daftar Antrean saat ini: ";
            for (int i = front; i <= rear; i++) {
                cout << "[" << nama[i] << "] ";
            }
            cout << endl;
        }
    }
};

int main() {
    QueuePerpustakaan antrean;

    cout << "=== SIMULASI ANTREAN PEMINJAMAN BUKU ===" << endl;

    
    antrean.enqueue("Ujang");
    antrean.enqueue("Asep");
    antrean.enqueue("Caplin");

    cout << endl;


    antrean.peek();

    cout << endl;

    
    antrean.dequeue();

    cout << endl;

    
    antrean.enqueue("Puput");

    cout << endl;

    
    antrean.display();

    return 0;
}

