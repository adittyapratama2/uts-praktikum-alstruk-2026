#include <iostream>
using namespace std;

#define MAX 5

// ================= STACK =================
struct Stack {
    string data[MAX];
    int top;
};

void initStack(Stack &s) {
    s.top = -1;
}

bool isEmptyStack(Stack s) {
    return s.top == -1;
}

bool isFullStack(Stack s) {
    return s.top == MAX - 1;
}

void push(Stack &s, string judul) {
    if (isFullStack(s)) {
        cout << "Gagal push! Stack penuh.\n";
    } else {
        s.data[++s.top] = judul;
        cout << "Push: \"" << judul << "\" berhasil ditambahkan.\n";
    }
}

void pop(Stack &s) {
    if (isEmptyStack(s)) {
        cout << "Gagal pop! Stack kosong.\n";
    } else {
        cout << "Pop: \"" << s.data[s.top] << "\" berhasil dihapus.\n";
        s.top--;
    }
}

void peekStack(Stack s) {
    if (isEmptyStack(s)) {
        cout << "Stack kosong.\n";
    } else {
        cout << "Buku paling atas: \"" << s.data[s.top] << "\"\n";
    }
}

void tampilStack(Stack s) {
    if (isEmptyStack(s)) {
        cout << "Stack kosong.\n";
    } else {
        cout << "Isi stack :\n";
        for (int i = s.top; i >= 0; i--) {
            cout << "  - " << s.data[i] << endl;
        }
        cout << "Jumlah elemen: " << s.top + 1 << endl;
    }
}


// ================= QUEUE =================
struct Queue {
    string data[MAX];
    int front, rear;
};

void initQueue(Queue &q) {
    q.front = q.rear = -1;
}

bool isEmptyQueue(Queue q) {
    return q.front == -1;
}

bool isFullQueue(Queue q) {
    return q.rear == MAX - 1;
}

void enqueue(Queue &q, string nama) {
    if (isFullQueue(q)) {
        cout << "Gagal enqueue! Antrian penuh.\n";
    } else {
        if (isEmptyQueue(q)) q.front = 0;
        q.data[++q.rear] = nama;
        cout << "Enqueue: \"" << nama << "\" berhasil ditambahkan.\n";
    }
}

void dequeue(Queue &q) {
    if (isEmptyQueue(q)) {
        cout << "Gagal dequeue! Queue kosong.\n";
    } else {
        cout << "Dequeue: \"" << q.data[q.front] << "\" berhasil dihapus.\n";
        q.front++;
        if (q.front > q.rear) {
            q.front = q.rear = -1;
        }
    }
}

void peekQueue(Queue q) {
    if (isEmptyQueue(q)) {
        cout << "Antrian kosong.\n";
    } else {
        cout << "Antrian terdepan: \"" << q.data[q.front] << "\"\n";
    }
}

void tampilQueue(Queue q) {
    if (isEmptyQueue(q)) {
        cout << "Antrian kosong.\n";
    } else {
        cout << "Isi Antrian (depan ke belakang):\n";
        for (int i = q.front; i <= q.rear; i++) {
            cout << "  - " << q.data[i] << endl;
        }
        cout << "Jumlah elemen: " << (q.rear - q.front + 1) << endl;
    }
}



int main() {


    cout << "=====================================\n";
    cout << "        SOAL A - STACK\n";
    cout << "=====================================\n";

    Stack s;
    initStack(s);

    push(s, "Fisika Dasar");
    push(s, "Kalkulus");
    push(s, "Algoritma");
    push(s, "Jaringan");

    peekStack(s);

    pop(s);
    pop(s);

    tampilStack(s);


 
    cout << "\n=====================================\n";
    cout << "        SOAL B - QUEUE\n";
    cout << "=====================================\n";

    Queue q;
    initQueue(q);

    enqueue(q, "Reza");
    enqueue(q, "Mia");
    enqueue(q, "Hendra");

    peekQueue(q);

    dequeue(q);

    enqueue(q, "Putri");

    tampilQueue(q);

    return 0;
}