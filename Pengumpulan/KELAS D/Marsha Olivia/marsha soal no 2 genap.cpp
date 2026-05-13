#include <iostream>
#include <string>

using namespace std;

// batas max array
const int MAX = 5;

struct RakBuku {
    string tumpukan[MAX];
    int top = -1;

    void push() {
        if (top == MAX - 1) {
            cout << "--> Gagal: Rak sudah penuh (Stack Overflow)!" << endl;
        } else {
            string judul;
            cout << "Masukkan Judul Buku: ";
            cin.ignore();
            getline(cin, judul);
            top++;
            tumpukan[top] = judul;
            cout << "--> '" << judul << "' berhasil ditumpuk." << endl;
        }
    }

    void pop() {
        if (top == -1) {
            cout << "--> Gagal: Tidak ada buku untuk diambil (Stack Underflow)." << endl;
        } else {
            cout << "--> Buku '" << tumpukan[top] << "' telah diambil." << endl;
            top--;
        }
    }

    void peek() {
        if (top != -1) {
            cout << "--> Buku paling atas saat ini: " << tumpukan[top] << endl;
        } else {
            cout << "--> Rak masih kosong." << endl;
        }
    }

    void tampilkan() {
        cout << "\n[ Kondisi Rak Saat Ini ]" << endl;
        if (top == -1) {
            cout << "Kosong" << endl;
        } else {
            for (int i = top; i >= 0; i--) {
                cout << " [" << i << "] " << tumpukan[i] << endl;
            }
        }
    }
};
// b queue antrian perpustakaan	
struct Antrian {
    string nama[MAX];
    int front = 0;
    int rear = -1;
    int hitung = 0;

    void enqueue() {
        if (hitung == MAX) {
            cout << "--> Gagal: Antrian sudah penuh!" << endl;
        } else {
            string member;
            cout << "Masukkan Nama Member: ";
            cin.ignore();
            getline(cin, member);
            rear = (rear + 1) % MAX;
            nama[rear] = member;
            hitung++;
            cout << "--> " << member << " masuk dalam barisan." << endl;
        }
    }

    void dequeue() {
        if (hitung == 0) {
            cout << "--> Gagal: Antrian sedang kosong." << endl;
        } else {
            cout << "--> Member '" << nama[front] << "' selesai dilayani." << endl;
            front = (front + 1) % MAX;
            hitung--;
        }
    }

    void tampilkan() {
        cout << "\n[ Daftar Antrian Member ]" << endl;
        if (hitung == 0) {
            cout << "Kosong" << endl;
        } else {
            int index = front;
            for (int i = 0; i < hitung; i++) {
                cout << " (" << i + 1 << ") " << nama[index] << endl;
                index = (index + 1) % MAX;
            }
        }
    }
};


int main() {
    RakBuku stack;
    Antrian queue;
    int pilihanUtama, pilihanSub;

    do {
        cout << "\n====================================" << endl;
        cout << "   SISTEM MANAJEMEN PERPUSTAKAAN    " << endl;
        cout << "====================================" << endl;
        cout << "1. Kelola Tumpukan Buku (Stack)" << endl;
        cout << "2. Kelola Antrian Member (Queue)" << endl;
        cout << "3. Keluar" << endl;
        cout << "Pilih Menu [1-3]: ";
        cin >> pilihanUtama;

        switch (pilihanUtama) {
            case 1:
                do {
                    stack.tampilkan();
                    cout << "\n-- MENU STACK --" << endl;
                    cout << "1. Push Buku" << endl;
                    cout << "2. Pop Buku" << endl;
                    cout << "3. Peek (Lihat Atas)" << endl;
                    cout << "4. Kembali ke Menu Utama" << endl;
                    cout << "Pilihan: ";
                    cin >> pilihanSub;

                    if (pilihanSub == 1) stack.push();
                    else if (pilihanSub == 2) stack.pop();
                    else if (pilihanSub == 3) stack.peek();
                } while (pilihanSub != 4);
                break;

            case 2:
                do {
                    queue.tampilkan();
                    cout << "\n-- MENU QUEUE --" << endl;
                    cout << "1. Enqueue (Masuk)" << endl;
                    cout << "2. Dequeue (Keluar)" << endl;
                    cout << "3. Kembali ke Menu Utama" << endl;
                    cout << "Pilihan: ";
                    cin >> pilihanSub;

                    if (pilihanSub == 1) queue.enqueue();
                    else if (pilihanSub == 2) queue.dequeue();
                } while (pilihanSub != 3);
                break;
        }

    } while (pilihanUtama != 3);

    cout << "Program selesai. Terima kasih!" << endl;
    return 0;
}
