#include <iostream>
#include <string>

using namespace std;

// === STRUKTUR DATA UNTUK STACK (LIFO) ===
struct Tumpukan {
    int top = -1; // Menandai posisi teratas
    int isi[5];   // Kapasitas maksimal 5
};

// Fungsi cek kondisi Stack
bool tumpukanKosong(Tumpukan &s) { return s.top == -1; }
bool tumpukanPenuh(Tumpukan &s) { return s.top == 4; }

// Operasi Push: Tambah data
void masukkan_riwayat(Tumpukan &s, int nomor) {
    if (tumpukanPenuh(s)) {
        cout << "[Gagal] Stack penuh! T00" << nomor << " tidak bisa masuk." << endl;
    } else {
        s.top++;
        s.isi[s.top] = nomor;
        cout << "Berhasil Push: T00" << nomor << endl;
    }
}

// Operasi Pop: Hapus data teratas
void hapus_riwayat(Tumpukan &s) {
    if (tumpukanKosong(s)) {
        cout << "[Gagal] Stack kosong!" << endl;
    } else {
        cout << "Pop: T00" << s.isi[s.top] << " dihapus dari riwayat." << endl;
        s.top--;
    }
}

// === STRUKTUR DATA UNTUK QUEUE (FIFO) ===
struct Antrean {
    int depan = -1;
    int belakang = -1;
    string nama[5]; // Kapasitas maksimal 5
};

// Fungsi cek kondisi Queue
bool antreanKosong(Antrean &q) { return q.depan == -1 || q.depan > q.belakang; }
bool antreanPenuh(Antrean &q) { return q.belakang == 4; }

// Operasi Enqueue: Masuk antrean
void tambah_pelanggan(Antrean &q, string orang) {
    if (antreanPenuh(q)) {
        cout << "[Peringatan] Antrean penuh! " << orang << " harus menunggu." << endl;
    } else {
        if (q.depan == -1) q.depan = 0;
        q.belakang++;
        q.nama[q.belakang] = orang;
        cout << "Enqueue: " << orang << " masuk antrean." << endl;
    }
}

// Operasi Dequeue: Keluar antrean
void panggil_pelanggan(Antrean &q) {
    if (antreanKosong(q)) {
        cout << "[Peringatan] Antrean sedang kosong!" << endl;
    } else {
        cout << "Dequeue: " << q.nama[q.depan] << " selesai dilayani." << endl;
        q.depan++;
    }
}

int main() {
    // --- SIMULASI PERTANYAAN A (STACK) ---
    Tumpukan s;
    cout << "--- SIMULASI STACK (RIWAYAT TRANSAKSI) ---" << endl;
    
    // Skenario: push 4 transaksi
    masukkan_riwayat(s, 1);
    masukkan_riwayat(s, 2);
    masukkan_riwayat(s, 3);
    masukkan_riwayat(s, 4);

    // Peek: Tampilkan transaksi teratas
    if (!tumpukanKosong(s)) {
        cout << "Transaksi teratas (Peek): T00" << s.isi[s.top] << endl;
    }

    // Pop 2 transaksi
    hapus_riwayat(s);
    hapus_riwayat(s);

    // Tampilkan isi stack setelah operasi
    cout << "Isi stack akhir: ";
    for (int i = 0; i <= s.top; i++) {
        cout << "T00" << s.isi[i] << " ";
    }
    
    cout << "\n\n------------------------------------------\n" << endl;

    // --- SIMULASI PERTANYAAN B (QUEUE) ---
    Antrean q;
    cout << "--- SIMULASI QUEUE (ANTREAN PELANGGAN) ---" << endl;

    // Skenario: enqueue 3 pelanggan
    tambah_pelanggan(q, "Budi");
    tambah_pelanggan(q, "Sari");
    tambah_pelanggan(q, "Eko");

    // Tampilkan pelanggan terdepan
    if (!antreanKosong(q)) {
        cout << "Pelanggan paling depan: " << q.nama[q.head] << endl;
    }

    // Dequeue 1 pelanggan
    panggil_pelanggan(q);

    // Enqueue pelanggan baru (Dewi)
    tambah_pelanggan(q, "Dewi");

    // Tampilkan isi queue terakhir
    cout << "Isi antrean akhir: ";
    if (antreanKosong(q)) {
        cout << "(Kosong)";
    } else {
        for (int i = q.depan; i <= q.belakang; i++) {
            cout << q.nama[i] << " ";
        }
    }
    cout << endl;

    return 0;
}
