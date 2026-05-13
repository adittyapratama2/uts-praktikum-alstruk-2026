#include <iostream>
using namespace std;

#define MAX 5

struct stack {
    string data[MAX];
    int top;
};

void init(stack &s) {
    s.top = -1;
}

bool isEmpty(stack s) {
    return s.top == -1;
}

bool isFull(stack s) {
    return s.top == MAX - 1;
}

void push(stack &s, string judul) {
    if (isFull(s)) {
        cout << "stack penuh!\n";
    } else {
        s.top++;
        s.data[s.top] = judul;
        cout << "Buku \"" << judul
             << "\" berhasil ditambahkan.\n";
    }
}

void pop(stack &s) {
    if (isEmpty(s)) {
        cout << "stack kosong! \n";
    } else {
        cout << "Buku \"" << s.data[s.top]
             << "\" dihapus dari stack.\n";
        s.top--;
    }
}

void peek(stack s) {
    if (isEmpty(s)) {
        cout << "stack kosong.\n";
    } else {
        cout << "Buku paling atas: "
             << s.data[s.top] << endl;
    }
}

void display(stack s) {
    if (isEmpty(s)) {
        cout << "stack kosong.\n";
    } else {
        cout << "\nIsi stack:\n";
        for (int i = s.top; i >= 0; i--) {
            cout << "- " << s.data[i] << endl;
        }
    }
}

int main() {

    stack s;
    init(s);

    push(s, "Fisika Dasar");
    push(s, "Kalkulus");
    push(s, "Algoritma");
    push(s, "Jaringan");
    cout << endl;

    peek(s);
    cout << endl;

    pop(s);
    pop(s);
    cout << endl;

    display(s);

    return 0;
}