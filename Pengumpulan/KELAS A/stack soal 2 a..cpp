#include <iostream>
using namespace std;

const int MAKS_STACK = 5;

struct Stack {
    int data[MAKS_STACK]; 
    int top;             
};

void initStack(Stack &s) {
    s.top = -1;
}


bool isEmpty(Stack &s) {
    return s.top == -1;
}


bool isFull(Stack &s) {
    return s.top == MAKS_STACK - 1;
}


void push(Stack &s, int noTransaksi) {
    if (isFull(s)) {
        cout << "  [!] STACK PENUH! Transaksi T00" << noTransaksi
             << " tidak bisa disimpan." << endl;
    } else {
        s.top++;
        s.data[s.top] = noTransaksi;
        cout << "  [+] Push T00" << noTransaksi
             << " berhasil. Stack berisi " << (s.top + 1) << " transaksi." << endl;
    }
}


void pop(Stack &s) {
    if (isEmpty(s)) {
        cout << "  [!] STACK KOSONG! Tidak ada transaksi untuk dihapus." << endl;
    } else {
        cout << "  [-] Pop T00" << s.data[s.top]
             << " dikeluarkan dari stack." << endl;
        s.top--;
    }
}


void peek(Stack &s) {
    if (isEmpty(s)) {
        cout << "  [!] STACK KOSONG! Tidak ada transaksi." << endl;
    } else {
        cout << "  [*] Peek: Transaksi teratas = T00"
             << s.data[s.top] << endl;
    }
}


void tampilStack(Stack &s) {
    if (isEmpty(s)) {
        cout << "  Isi Stack: [KOSONG]" << endl;
    } else {
        cout << "  Isi Stack (bawah -> atas): ";
        for (int i = 0; i <= s.top; i++) {
            cout << "T00" << s.data[i];
            if (i < s.top) cout << " | ";
        }
        cout << "  <-- TOP" << endl;
    }
}


int main() {
    Stack stackTransaksi;
    initStack(stackTransaksi);

    cout << "=======================================" << endl;
    cout << "  STACK - RIWAYAT TRANSAKSI KASIR     " << endl;
    cout << "=======================================" << endl;

    
    cout << "\n[LANGKAH 1] Push 4 transaksi (T001-T004):" << endl;
    push(stackTransaksi, 1); 
    push(stackTransaksi, 2); 
    push(stackTransaksi, 3); 
    push(stackTransaksi, 4); 
    tampilStack(stackTransaksi);

    
    cout << "\n[LANGKAH 2] Peek transaksi teratas:" << endl;
    peek(stackTransaksi);

    
    cout << "\n[LANGKAH 3] Pop 2 transaksi:" << endl;
    pop(stackTransaksi); 
    pop(stackTransaksi); 

    
    cout << "\n[LANGKAH 4] Isi stack setelah 2x pop:" << endl;
    tampilStack(stackTransaksi);

    
    cout << "\n[LANGKAH 5] Uji kondisi stack penuh:" << endl;
    push(stackTransaksi, 5); 
    push(stackTransaksi, 6);
    push(stackTransaksi, 7); 
    push(stackTransaksi, 8); 
    tampilStack(stackTransaksi);

    
    cout << "\n[LANGKAH 6] Uji kondisi stack kosong:" << endl;
    pop(stackTransaksi);
    pop(stackTransaksi);
    pop(stackTransaksi);
    pop(stackTransaksi);
    pop(stackTransaksi);
    pop(stackTransaksi); 

    cout << "\n=======================================" << endl;
    cout << "  Simulasi Stack selesai.             " << endl;
    cout << "=======================================" << endl;

    return 0;
}
