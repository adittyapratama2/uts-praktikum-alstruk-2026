#include <iostream>
#include <string>

using namespace std;

// --- BAGIAN A: STACK (Riwayat Transaksi) ---
struct Stack {
    int top;
    int data[5];
};

// Fungsi pendukung Stack
bool stakPenuh(Stack &s) { return s.top == 4; }
bool stakKosong(Stack &s) { return s.top == -1; }

void push(Stack &s, int no) {
    if (stakPenuh(s)) {
        cout << "Peringatan: Stack penuh, T00" << no << " gagal masuk!" << endl;
    } else {
        s.top++;
        s.data[s.top] = no;
        cout << "Push: T00" << no << " berhasil." << endl;
    }
}

void pop(Stack &s) {
    if (stakKosong(s)) {
        cout << "Peringatan: Stack kosong!" << endl;
    } else {
        cout << "Pop: T00" << s.data[s.top] << " dihapus." << endl;
        s.top--;
    }
}

void peekStack(Stack s) {
    if (!stakKosong(s)) {
        cout << "Transaksi teratas (Peek): T00" << s.data[s.top] << endl;
    }
}

// --- BAGIAN B: QUEUE (Antrian Pelanggan) ---
struct Queue {
    int depan;
    int belakang;
    string pelanggan[5];
};

// Fungsi pendukung Queue
bool antrePenuh(Queue &q) { return q.belakang == 4; }
bool antreKosong(Queue &q) { return q.depan == -1 || q.depan > q.belakang; }

void enqueue(Queue &q, string nama) {
    if (antrePenuh(q)) {
        cout << "Peringatan: Antrean penuh!" << endl;
    } else {
        if (q.depan == -1) q.depan = 0;
        q.belakang++;
        q.pelanggan[q.belakang] = nama;
        cout << "Enqueue: " << nama << " masuk antrean." << endl;
    }
}

void dequeue(Queue &q) {
    if (antreKosong(q)) {
        cout << "Peringatan: Antrean kosong!" << endl;
    } else {
        cout << "Dequeue: " << q.pelanggan[q.depan] << " selesai." << endl;
        q.depan++;
    }
}

int main() {
    // --- Inisialisasi Manual (Agar Tidak Error/Merah) ---
    Stack s;
    s.top = -1;

    Queue q;
    q.depan = -1;
    q.belakang = -1;

    // --- Eksekusi Skenario SOAL A (STACK) ---
    cout << "=== SIMULASI STACK (RIWAYAT TRANSAKSI) ===" << endl;
    push(s, 1);
    push(s, 2);
    push(s, 3);
    push(s, 4);
    
    peekStack(s);
    
    pop(s);
    pop(s);

    cout << "Isi stack akhir: ";
    for (int i = 0; i <= s.top; i++) {
        cout << "T00" << s.data[i] << " ";
    }
    
    cout << "\n\n------------------------------------------\n" << endl;

    // --- Eksekusi Skenario SOAL B (QUEUE) ---
    cout << "=== SIMULASI QUEUE (ANTREAN KASIR) ===" << endl;
    enqueue(q, " RIZKAN ");
    enqueue(q, " IKIW ");
    enqueue(q, " VALDES ");

    if (!antreKosong(q)) {
        cout << "Pelanggan terdepan: " << q.pelanggan[q.depan] << endl;
    }

    dequeue(q);
    enqueue(q, " WAHYU ");

    cout << "Isi antrean akhir: ";
    for (int i = q.depan; i <= q.belakang; i++) {
        cout << q.pelanggan[i] << " ";
    }
    cout << endl;

    return 0;
}