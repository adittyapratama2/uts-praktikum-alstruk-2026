#include <iostream>
#include <string>
using namespace std;

#define MAX 5

struct Stack {
    string data[MAX];
    int top;
};

void initStack(Stack &s) {
    s.top = -1;
}

bool isEmpty(Stack &s) {
    return s.top == -1;
}

bool isFull(Stack &s) {
    return s.top == MAX - 1;
}

void push(Stack &s, string tidakTransaksi) {
    if (isFull(s)) {
        cout << "Stack penuh!" << endl;
    } else {
        s.top++;
        s.data[s.top] = tidakTransaksi;
    }
}

void pop(Stack &s) {
    if (isEmpty(s)) {
        cout << "Stack kosong!" << endl;
    } else {
        s.top--;
    }
}

void peek(Stack &s) {
    if (isEmpty(s)) {
        cout << "Stack kosong!" << endl;
    } else {
        cout << "Transaksi teratas: " << s.data[s.top] << endl;
    }
}

void displayStack(Stack &s) {
    if (isEmpty(s)) {
        cout << "Stack kosong!" << endl;
    } else {
        cout << "Indeks\tTransaksi" << endl;
        for (int i = s.top; i >= 0; i--) {
            cout << "[" << i << "]\t" << s.data[i];
            if (i == s.top) {
                cout << " <-- TOP";
            }
            cout << endl;
        }
    }
}

int main() {
    Stack stackTransaksi;
    initStack(stackTransaksi);
    
    cout << "========== SIMULASI STACK: RIWAYAT TRANSAKSI ==========" << endl;
    
    cout << "--- Push 4 Transaksi ---" << endl;
    push(stackTransaksi, "T001");
    push(stackTransaksi, "T002");
    push(stackTransaksi, "T003");
    push(stackTransaksi, "T004");
    
    cout << "--- Tampilkan Transaksi Teratas (Peek) ---" << endl;
    peek(stackTransaksi);
    
    cout << "--- Isi Stack Setelah 4 Push ---" << endl;
    displayStack(stackTransaksi);
    
    cout << "--- Pop 2 Transaksi ---" << endl;
    pop(stackTransaksi);
    pop(stackTransaksi);
    
    cout << "--- Isi Stack Setelah 2 Pop ---" << endl;
    displayStack(stackTransaksi);
    
    cout << "--- Pop Sisa Transaksi ---" << endl;
    pop(stackTransaksi);
    pop(stackTransaksi);
    
    cout << "--- Pop Saat Stack Kosong ---" << endl;
    pop(stackTransaksi);
    
    cout << "--- Push Melebihi Kapasitas ---" << endl;
    push(stackTransaksi, "T005");
    push(stackTransaksi, "T006");
    push(stackTransaksi, "T007");
    push(stackTransaksi, "T008");
    push(stackTransaksi, "T009");
    push(stackTransaksi, "T010");
    
    cout << "--- Menampilkan  isi Stack ---" << endl;
    displayStack(stackTransaksi);
    
    return 0;
}
