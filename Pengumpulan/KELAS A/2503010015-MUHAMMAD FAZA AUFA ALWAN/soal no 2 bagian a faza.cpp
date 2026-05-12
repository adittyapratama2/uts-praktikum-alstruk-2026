#include <iostream>
#include <iomanip>

using namespace std;

class StackTransaksi {
private:
    static const int MAX = 5;
    int data[MAX];            
    int top;                  

public:
    // Constructor untuk inisialisasi stack
    StackTransaksi() {
        top = -1; 
    }

    // Fungsi untuk mengecek apakah stack kosong
    bool isEmpty() {
        return top == -1;
    }

    // Fungsi untuk mengecek apakah stack penuh
    bool isFull() {
        return top == MAX - 1;
    }

    void push(int noTransaksi) {
        if (isFull()) {
            cout << "Gagal Push: Stack Penuh! Tidak dapat menambahkan transaksi T" 
                 << setfill('0') << setw(3) << noTransaksi << ".\n";
        } else {
            top++;
            data[top] = noTransaksi;
            cout << " Push: Transaksi T" 
                 << setfill('0') << setw(3) << noTransaksi << "\n";
        }
    }

    void pop() {
        if (isEmpty()) {
            cout << "Gagal Pop: Stack Kosong! Tidak ada transaksi yang bisa dihapus.\n";
        } else {
            cout << " Pop: Transaksi T" 
                 << setfill('0') << setw(3) << data[top] << "\n";
            top--;
        }
    }

    void peek() {
        if (isEmpty()) {
            cout << "Peek Gagal: Stack Kosong! Tidak ada transaksi di posisi teratas.\n";
        } else {
            cout << "Transaksi teratas (Peek) saat ini: T" 
                 << setfill('0') << setw(3) << data[top] << "\n";
        }
    }

    void tampilkanStack() {
        if (isEmpty()) {
            cout << "Isi Stack saat ini: [Kosong]\n";
        } else {
            cout << "Isi Stack saat ini (dari atas ke bawah):\n";
            for (int i = top; i >= 0; i--) {
                cout << "- T" << setfill('0') << setw(3) << data[i] << "\n";
            }
        }
    }
};

int main() {
    StackTransaksi riwayat;

    cout << "=== Simulasi Stack Riwayat Transaksi ===\n\n";

    cout << "[Melakukan Push 4 Transaksi]\n";
    riwayat.push(1); 
    riwayat.push(2);
    riwayat.push(3); 
    riwayat.push(4); 

    cout << "\n[Melihat Transaksi Teratas (Peek)]\n";
    riwayat.peek();

    cout << "\n[Melakukan Pop 2 Transaksi]\n";
    riwayat.pop();
    riwayat.pop();

    cout << "\n[Menampilkan Isi Stack Setelah Pop]\n";
    riwayat.tampilkanStack();

    return 0;
}

