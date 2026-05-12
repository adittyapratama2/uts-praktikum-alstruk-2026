#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

const int MAX = 5;


int riwayatTransaksi[MAX];
int top = -1;

bool s_isEmpty() {
    return top == -1;
}

bool s_isFull() {
    return top == MAX - 1;
}

void s_push(int noTransaksi) {
    if (s_isFull()) {
        cout << "[GAGAL] Stack Penuh! Tidak dapat menambahkan transaksi T" 
             << setfill('0') << setw(3) << noTransaksi << ".\n";
    } else {
        top++;
        riwayatTransaksi[top] = noTransaksi;
        cout << "[PUSH] Berhasil menambahkan transaksi T" 
             << setfill('0') << setw(3) << noTransaksi << " ke dalam Stack.\n";
    }
}

void s_pop() {
    if (s_isEmpty()) {
        cout << "[GAGAL] Stack Kosong! Tidak ada transaksi yang bisa dihapus.\n";
    } else {
        cout << "[POP] Transaksi T" << setfill('0') << setw(3) << riwayatTransaksi[top] 
             << " berhasil dihapus dari Stack.\n";
        top--;
    }
}

void s_peek() {
    if (s_isEmpty()) {
        cout << "[INFO] Stack Kosong! Tidak ada transaksi di posisi teratas.\n";
    } else {
        cout << "[PEEK] Transaksi teratas saat ini adalah: T" 
             << setfill('0') << setw(3) << riwayatTransaksi[top] << "\n";
    }
}

void s_tampilkan() {
    cout << "\nISI STACK RIWAYAT TRANSAKSI SAAT INI\n";
    if (s_isEmpty()) {
        cout << "Stack Kosong!\n";
    } else {
        cout << "(Atas -> Bawah)\n";
        for (int i = top; i >= 0; i--) {
            cout << "| T" << setfill('0') << setw(3) << riwayatTransaksi[i] << " |\n";
        }
        cout << "---------\n";
    }
}


string antrianKasir[MAX];
int front = -1;
int rear = -1;

bool q_isEmpty() {
    return front == -1;
}

bool q_isFull() {
    return rear == MAX - 1; 
}

void q_tampilkan() {
    cout << "Isi Antrian  : ";
    if (q_isEmpty()) {
        cout << "[ Kosong ]\n";
    } else {
        cout << "[ ";
        for (int i = front; i <= rear; i++) {
            cout << antrianKasir[i];
            if (i < rear) cout << ", ";
        }
        cout << " ]\n";
    }
}

void q_enqueue(string nama) {
    if (q_isFull()) {
        cout << "[GAGAL] Antrian Penuh! Pelanggan '" << nama << "' tidak dapat masuk.\n";
        q_tampilkan();
    } else {
        if (front == -1) {
            front = 0; 
        }
        rear++; 
        antrianKasir[rear] = nama; 
        cout << "[ENQUEUE] Pelanggan '" << nama << "' berhasil masuk antrian.\n";
        q_tampilkan();
    }
    cout << "--------------------------------------------------\n";
}

void q_dequeue() {
    if (q_isEmpty()) {
        cout << "[GAGAL] Antrian Kosong! Tidak ada pelanggan yang bisa dilayani.\n";
        q_tampilkan();
    } else {
        cout << "[DEQUEUE] Pelanggan '" << antrianKasir[front] << "' telah dilayani dan keluar dari antrian.\n";
        if (front == rear) {
            front = -1;
            rear = -1;
        } else {
            front++; 
        }
        q_tampilkan();
    }
    cout << "--------------------------------------------------\n";
}		

void q_peek() {
    if (q_isEmpty()) {
        cout << "[INFO] Antrian Kosong! Tidak ada pelanggan di posisi terdepan.\n";
    } else {
        cout << "[PEEK] Pelanggan di posisi terdepan saat ini adalah: '" << antrianKasir[front] << "'\n";
    }
}

int main() {
    // SIMULASI STACK (SOAL A)
    cout << "========== SIMULASI STACK: RIWAYAT TRANSAKSI ==========\n";
    s_push(1);
    s_push(2);
    s_push(3);
    s_push(4);
    
    cout << "\n";
    s_peek();
    
    cout << "\n";
    s_pop();
    s_pop();

    s_tampilkan();
    cout << "\n\n";

    // SIMULASI QUEUE (SOAL B)
    cout << "========== SIMULASI QUEUE: ANTRIAN KASIR ==========\n";
    q_enqueue("Budi");
    q_enqueue("Sari");
    q_enqueue("Eko");

    cout << "\n>>> CEK PELANGGAN TERDEPAN <<<\n";
    q_peek();
    cout << "\n";

    q_dequeue();

    q_enqueue("Dewi");

    return 0;
}