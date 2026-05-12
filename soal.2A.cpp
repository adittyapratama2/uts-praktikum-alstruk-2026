#include <iostream>
#include <string>

using namespace std;

#define MAX 5 

struct StackBuku {
    string judul[MAX];
    int top = -1; 


    bool isFull() {
        return top == MAX - 1;
    }

    
    bool isEmpty() {
        return top == -1;
    }

    
    void push(string judulBuku) {
        if (isFull()) {
            cout << "Gagal Push: Tumpukan buku sudah penuh!" << endl;
        } else {
            top++;
            judul[top] = judulBuku;
            cout << "Berhasil menambahkan buku: " << judulBuku << endl;
        }
    }

    
    void pop() {
        if (isEmpty()) {
            cout << "Gagal Pop: Tumpukan kosong!" << endl;
        } else {
            cout << "Berhasil mengambil buku: " << judul[top] << endl;
            top--;
        }
    }

    
    void peek() {
        if (isEmpty()) {
            cout << "Stack Kosong, tidak ada yang bisa di-peek." << endl;
        } else {
            cout << "Buku paling atas saat ini: " << judul[top] << endl;
        }
    }

    
    void display() {
        if (isEmpty()) {
            cout << "Isi Stack: [Kosong]" << endl;
        } else {
            cout << "Isi Stack saat ini (dari atas ke bawah):" << endl;
            for (int i = top; i >= 0; i--) {
                cout << "- " << judul[i] << endl;
            }
        }
    }
};

int main() {
    StackBuku tumpukan;

    cout << "=== SIMULASI STACK BUKU PERPUSTAKAAN ===" << endl;

    
    tumpukan.push("Fisika Dasar");
    tumpukan.push("Kalkulus");
    tumpukan.push("Algoritma");
    tumpukan.push("Jaringan");

    cout << endl;

    
    tumpukan.peek();

    cout << endl;

    
    tumpukan.pop();
    tumpukan.pop(); 

    cout << endl;

    
    tumpukan.display();
    
    

    return 0;
}

