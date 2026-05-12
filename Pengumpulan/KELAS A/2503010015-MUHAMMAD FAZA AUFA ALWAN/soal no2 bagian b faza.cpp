#include <iostream>
#include <string>

using namespace std;

class QueueAntrian {
private:
    static const int MAX = 5; 
    string data[MAX];         
    int front;                
    int rear;                

public:
    QueueAntrian() {
        front = -1; 
        rear = -1;
    }

    bool isEmpty() {
        return front == -1;
    }

    bool isFull() {
        return rear == MAX - 1;
    }

    // Fungsi untuk menambahkan pelanggan ke antrian (belakang)
    void enqueue(string nama) {
        if (isFull()) {
            cout << "[Enqueue] Gagal: Antrian Penuh! Tidak dapat memasukkan pelanggan '" << nama << "'.\n";
        } else {
            if (isEmpty()) {
                front = 0; 
            }
            rear++;
            data[rear] = nama;
            cout << "Berhasil: Pelanggan '" << nama << "' masuk ke dalam antrian.\n";
        }
    }

    // Fungsi untuk mengeluarkan pelanggan dari antrian (depan)
    void dequeue() {
        if (isEmpty()) {
            cout << "Gagal: Antrian Kosong! Tidak ada pelanggan yang bisa dilayani.\n";
        } else {
            cout << "Berhasil: Pelanggan '" << data[front] << "' telah dilayani dan keluar dari antrian.\n";
            
            if (front == rear) {
                front = -1;
                rear = -1;
            } else {
                front++; 
            }
        }
    }

    // Fungsi untuk melihat pelanggan yang ada di posisi terdepan
    void peek() {
        if (isEmpty()) {
            cout << "[Peek] Gagal: Antrian Kosong! Tidak ada pelanggan terdepan.\n";
        } else {
            cout << "[Peek] Pelanggan terdepan saat ini: " << data[front] << "\n";
        }
    }

    // Fungsi tambahan untuk menampilkan semua isi antrian
    void tampilkanQueue() {
        if (isEmpty()) {
            cout << "-> Isi Antrian saat ini: [Kosong]\n";
        } else {
            cout << "-> Isi Antrian saat ini (Depan ke Belakang): ";
            for (int i = front; i <= rear; i++) {
                cout << "[" << data[i] << "] ";
                if (i < rear) cout << "- ";
            }
            cout << "\n";
        }
    }
};

int main() {
    QueueAntrian kasir;

    cout << "=== Simulasi Queue Antrian Kasir ===\n\n";

    cout << "\n";
    kasir.enqueue("Budi");
    kasir.tampilkanQueue();
    cout << endl;

    kasir.enqueue("Sari");
    kasir.tampilkanQueue();
    cout << endl;

    kasir.enqueue("Eko");
    kasir.tampilkanQueue();
    cout << endl;

    cout << "\n";
    kasir.peek();
    cout << endl;
    
    cout << "\n";
    kasir.dequeue();
    kasir.tampilkanQueue();
    cout << endl;

    cout << "\n";
    kasir.enqueue("Dewi");
    kasir.tampilkanQueue();
    cout << endl;

    return 0;
}

