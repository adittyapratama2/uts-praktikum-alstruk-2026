#include <iostream>
#include <string>
using namespace std;


const int MAKS_QUEUE = 5;

struct Queue {
    string data[MAKS_QUEUE]; 
    int front;               
    int rear;                
    int jumlah;              
};


void initQueue(Queue &q) {
    q.front  = 0;
    q.rear   = -1;
    q.jumlah = 0;
}


bool isEmpty(Queue &q) {
    return q.jumlah == 0;
}


bool isFull(Queue &q) {
    return q.jumlah == MAKS_QUEUE;
}


void enqueue(Queue &q, string nama) {
    if (isFull(q)) {
        cout << "  [!] ANTRIAN PENUH! " << nama
             << " tidak bisa masuk antrian." << endl;
    } else {
        q.rear = (q.rear + 1) % MAKS_QUEUE; 
        q.data[q.rear] = nama;
        q.jumlah++;
        cout << "  [+] " << nama << " masuk antrian."
             << " (Antrian: " << q.jumlah << " orang)" << endl;
    }
}


void dequeue(Queue &q) {
    if (isEmpty(q)) {
        cout << "  [!] ANTRIAN KOSONG! Tidak ada pelanggan." << endl;
    } else {
        cout << "  [-] " << q.data[q.front]
             << " selesai dilayani dan keluar dari antrian." << endl;
        q.front = (q.front + 1) % MAKS_QUEUE; 
        q.jumlah--;
    }
}


void peek(Queue &q) {
    if (isEmpty(q)) {
        cout << "  [!] ANTRIAN KOSONG! Tidak ada pelanggan." << endl;
    } else {
        cout << "  [*] Peek: Pelanggan terdepan = "
             << q.data[q.front] << endl;
    }
}


void tampilQueue(Queue &q) {
    if (isEmpty(q)) {
        cout << "  Isi Antrian: [KOSONG]" << endl;
    } else {
        cout << "  Isi Antrian (depan -> belakang): ";
        for (int i = 0; i < q.jumlah; i++) {
            int idx = (q.front + i) % MAKS_QUEUE;
            cout << q.data[idx];
            if (i < q.jumlah - 1) cout << " -> ";
        }
        cout << endl;
    }
}


int main() {
    Queue antrianKasir;
    initQueue(antrianKasir);

    cout << "=======================================" << endl;
    cout << "  QUEUE - ANTRIAN PELANGGAN KASIR     " << endl;
    cout << "=======================================" << endl;

    
    cout << "\n[LANGKAH 1] Enqueue 3 pelanggan (Budi, Sari, Eko):" << endl;
    enqueue(antrianKasir, "Budi");
    enqueue(antrianKasir, "Sari");
    enqueue(antrianKasir, "Eko");
    tampilQueue(antrianKasir);

    
    cout << "\n[LANGKAH 2] Peek pelanggan terdepan:" << endl;
    peek(antrianKasir);

    
    cout << "\n[LANGKAH 3] Dequeue 1 pelanggan:" << endl;
    dequeue(antrianKasir);
    tampilQueue(antrianKasir);

    
    cout << "\n[LANGKAH 4] Enqueue pelanggan baru (Dewi):" << endl;
    enqueue(antrianKasir, "Dewi");
    tampilQueue(antrianKasir);

    
    cout << "\n[LANGKAH 5] Uji kondisi antrian penuh:" << endl;
    enqueue(antrianKasir, "Andi");
    enqueue(antrianKasir, "Rini");
    enqueue(antrianKasir, "Tono");
    tampilQueue(antrianKasir);

    
    cout << "\n[LANGKAH 6] Uji kondisi antrian kosong:" << endl;
    dequeue(antrianKasir);
    dequeue(antrianKasir);
    dequeue(antrianKasir);
    dequeue(antrianKasir);
    dequeue(antrianKasir);
    dequeue(antrianKasir); 

    cout << "\n=======================================" << endl;
    cout << "  Simulasi Queue selesai.             " << endl;
    cout << "=======================================" << endl;

    return 0;
}
