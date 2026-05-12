#include <iostream>
#include <string>

using namespace std;


#define MAX 5 

struct AntreanPelanggan {
    int head; 
    int tail; 
    string daftarNama[MAX];
};

void siapkanAntrean(AntreanPelanggan &q) {
    q.head = -1;
    q.tail = -1;
}

bool cekPenuh(AntreanPelanggan q) {
    return q.tail == MAX - 1;
}

bool cekKosong(AntreanPelanggan q) {
    return q.head == -1 || q.head > q.tail;
}

void cetak(AntreanPelanggan q) {
    cout << "Status Antrean: ";
    if (cekKosong(q)) {
        cout << "[Kosong]";
    } else {
        for (int i = q.head; i <= q.tail; i++) {
            cout << q.daftarNama[i] << (i == q.tail ? "" : " - ");
        }
    }
    cout << "\n----------------------------\n";
}

void enqueue(AntreanPelanggan &q, string nama) {
    if (cekPenuh(q)) {
        cout << "!!! Antrean Penuh: " << nama << " tidak bisa masuk.\n";
    } else {
        if (cekKosong(q)) {
            q.head = 0;
        }
        q.tail++;
        q.daftarNama[q.tail] = nama;
        cout << ">> " << nama << " masuk antrean.\n";
    }
    cetak(q);
}


void dequeue(AntreanPelanggan &q) {
    if (cekKosong(q)) {
        cout << "!!! Gagal: Antrean masih kosong.\n";
    } else {
        cout << "<< " << q.daftarNama[q.head] << " keluar (selesai).\n";
        q.head++;
    }
    cetak(q);
}

void lihatDepan(AntreanPelanggan q) {
    if (cekKosong(q)) {
        cout << "Info: Tidak ada orang di antrean.\n";
    } else {
        cout << "Orang paling depan: " << q.daftarNama[q.head] << endl;
    }
}

int main() {
    AntreanPelanggan antre;
    siapkanAntrean(antre);

    enqueue(antre, "Budi");
    enqueue(antre, "Sari");
    enqueue(antre, "Eko");

    lihatDepan(antre);
    cout << endl;

    dequeue(antre);

    enqueue(antre, "Dewi");

    return 0;
}
