#include <iostream>
#include <string>
using namespace std;

const int MAX = 5;

string antrian[MAX];
int depan = -1, belakang = -1;

bool kosong() { return depan == -1 || depan > belakang; }
bool penuh()  { return belakang == MAX - 1; }

void masuk(string nama) {
    if (penuh()) {
        cout << "Antrian penuh! " << nama << " tidak bisa masuk.\n";
        return;
    }
    if (depan == -1) depan = 0;
    antrian[++belakang] = nama;
    cout << nama << " masuk antrian.\n";
}

void keluar() {
    if (kosong()) {
        cout << "Antrian kosong!\n";
        return;
    }
    cout << antrian[depan++] << " selesai dilayani.\n";
}

void terdepan() {
    cout << (kosong() ? "Antrian kosong!" : "Terdepan: " + antrian[depan]) << "\n";
}

void tampil() {
    if (kosong()) { cout << "  [Kosong]\n"; return; }
    for (int i = depan; i <= belakang; i++)
        cout << "  " << (i - depan + 1) << ". " << antrian[i] << "\n";
}

int main() {
    cout << "=== Simulasi Antrian ===\n\n";

    masuk("Budi");
    masuk("Sari");
    masuk("Eko");
    tampil();

    terdepan();
    keluar();
    tampil();

    masuk("Dewi");
    tampil();
}