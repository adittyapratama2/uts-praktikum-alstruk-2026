#include <iostream>
using namespace std;

const int MAX = 5;

string antrian[MAX];
int depan = 0;
int belakang = -1;
int jumlah = 0;

// Cek queue kosong
bool kosong() {
    return jumlah == 0;
}

// Cek queue penuh
bool penuh() {
    return jumlah == MAX;
}

// Enqueue
void enqueue(string nama) {

    if (penuh()) {
        cout << "Antrian penuh!\n";
    }
    else {

        belakang++;
        antrian[belakang] = nama;
        jumlah++;

        cout << nama << " masuk ke antrian.\n";
    }
}

// Dequeue
void dequeue() {

    if (kosong()) {
        cout << "Antrian kosong!\n";
    }
    else {

        cout << antrian[depan] << " keluar dari antrian.\n";

        for (int i = depan; i < belakang; i++) {
            antrian[i] = antrian[i + 1];
        }

        belakang--;
        jumlah--;
    }
}

// Peek
void peek() {

    if (kosong()) {
        cout << "Antrian kosong!\n";
    }
    else {

        cout << "Antrian terdepan : " << antrian[depan] << endl;
    }
}

// Tampilkan queue
void tampilqueue() {

    if (kosong()) {
        cout << "Tidak ada antrian.\n";
    }
    else {

        cout << "\nIsi Antrian:\n";

        for (int i = depan; i <= belakang; i++) {
            cout << "- " << antrian[i] << endl;
        }
    }
}

int main() {

    // Tambah 3 orang
    enqueue("Reza");
    enqueue("Mia");
    enqueue("Hendra");

    cout << endl;

    // Peek
    peek();

    cout << endl;

    // Hapus 1 orang
    dequeue();

    cout << endl;

    // Tambah lagi
    enqueue("Putri");

    // Tampilkan isi queue
    tampilqueue();

    return 0;
}
